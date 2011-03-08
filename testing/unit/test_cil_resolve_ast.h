#ifndef TEST_CIL_RESOLVE_AST_H_
#define TEST_CIL_RESOLVE_AST_H_

#include "CuTest.h"

void test_cil_resolve_name(CuTest *);
void test_cil_resolve_name_invalid_type_neg(CuTest *);

void test_cil_resolve_ast_curr_null_neg(CuTest *);

void test_cil_resolve_roleallow(CuTest *);
void test_cil_resolve_roleallow_srcdecl_neg(CuTest *);
void test_cil_resolve_roleallow_tgtdecl_neg(CuTest *);
void test_cil_resolve_ast_roleallow(CuTest *);
void test_cil_resolve_ast_roleallow_neg(CuTest *);

void test_cil_resolve_sensalias(CuTest *);
void test_cil_resolve_sensalias_sensdecl_neg(CuTest *);
void test_cil_resolve_ast_sensalias(CuTest *);
void test_cil_resolve_ast_sensalias_neg(CuTest *);

void test_cil_resolve_roletrans(CuTest *);
void test_cil_resolve_roletrans_srcdecl_neg(CuTest *);
void test_cil_resolve_roletrans_tgtdecl_neg(CuTest *);
void test_cil_resolve_roletrans_resultdecl_neg(CuTest *);
void test_cil_resolve_ast_roletrans(CuTest *);
void test_cil_resolve_ast_roletrans_srcdecl_neg(CuTest *);
void test_cil_resolve_ast_roletrans_tgtdecl_neg(CuTest *);
void test_cil_resolve_ast_roletrans_resultdecl_neg(CuTest *);

void test_cil_resolve_typeattr(CuTest *);
void test_cil_resolve_typeattr_typedecl_neg(CuTest *);
void test_cil_resolve_typeattr_attrdecl_neg(CuTest *);
void test_cil_resolve_ast_typeattr(CuTest *);
void test_cil_resolve_ast_typeattr_neg(CuTest *);

void test_cil_resolve_typealias(CuTest *);
void test_cil_resolve_ast_typealias(CuTest *);
void test_cil_resolve_ast_typealias_notype_neg(CuTest *);

void test_cil_resolve_avrule(CuTest *);
void test_cil_resolve_ast_avrule(CuTest *);
void test_cil_resolve_ast_avrule_src_nores_neg(CuTest *);
void test_cil_resolve_ast_avrule_tgt_nores_neg(CuTest *);
void test_cil_resolve_ast_avrule_class_nores_neg(CuTest *);
void test_cil_resolve_ast_avrule_datum_null_neg(CuTest *);

void test_cil_resolve_type_rule_transition(CuTest *);
void test_cil_resolve_type_rule_transition_srcdecl_neg(CuTest *);
void test_cil_resolve_type_rule_transition_tgtdecl_neg(CuTest *);
void test_cil_resolve_type_rule_transition_objdecl_neg(CuTest *);
void test_cil_resolve_type_rule_transition_resultdecl_neg(CuTest *);
void test_cil_resolve_ast_type_rule_transition(CuTest *);
void test_cil_resolve_ast_type_rule_transition_neg(CuTest *);

void test_cil_resolve_type_rule_change(CuTest *);
void test_cil_resolve_type_rule_change_srcdecl_neg(CuTest *);
void test_cil_resolve_type_rule_change_tgtdecl_neg(CuTest *);
void test_cil_resolve_type_rule_change_objdecl_neg(CuTest *);
void test_cil_resolve_type_rule_change_resultdecl_neg(CuTest *);
void test_cil_resolve_ast_type_rule_change(CuTest *);
void test_cil_resolve_ast_type_rule_change_neg(CuTest *);

void test_cil_resolve_type_rule_member(CuTest *);
void test_cil_resolve_type_rule_member_srcdecl_neg(CuTest *);
void test_cil_resolve_type_rule_member_tgtdecl_neg(CuTest *);
void test_cil_resolve_type_rule_member_objdecl_neg(CuTest *);
void test_cil_resolve_type_rule_member_resultdecl_neg(CuTest *);
void test_cil_resolve_ast_type_rule_member(CuTest *);
void test_cil_resolve_ast_type_rule_member_neg(CuTest *);

void test_cil_resolve_sid(CuTest *);
void test_cil_resolve_sid_named_levels(CuTest *);
void test_cil_resolve_sid_named_context(CuTest *);

#endif