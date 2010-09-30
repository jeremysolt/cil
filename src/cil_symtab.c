#include <stdlib.h>
#include <sepol/errcodes.h>
#include <sepol/policydb/hashtab.h>
#include <string.h>
#include "cil_tree.h"
#include "cil_symtab.h"

int cil_symtab_insert(symtab_t *symtab, hashtab_key_t key, cil_symtab_datum_t *datum, struct cil_tree_node *node)
{
	char *newkey = strdup(key);
	int rc = hashtab_insert(symtab->table, newkey, (hashtab_datum_t)datum);
	if (rc != SEPOL_OK) {
		free(newkey);
		return rc;
	}
	else {
		datum->value = ++symtab->nprim;
		datum->node = node;
		datum->name = newkey;
	}
	
	return SEPOL_OK;
}

int cil_symtab_get_node(symtab_t *symtab, char *key, struct cil_tree_node **node)
{
	cil_symtab_datum_t *datum = (cil_symtab_datum_t*)hashtab_search(symtab->table, (hashtab_key_t)key);
	if (datum == NULL)
		return SEPOL_ERR;

	*node = datum->node;

	return SEPOL_OK;
}

int cil_symtab_get_value(symtab_t *symtab, char *key, uint32_t *value)
{
	cil_symtab_datum_t *datum = (cil_symtab_datum_t*)hashtab_search(symtab->table, (hashtab_key_t)key);
	if (datum == NULL)
		return SEPOL_ERR;

	*value = datum->value;

	return SEPOL_OK;
}
