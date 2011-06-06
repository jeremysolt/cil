#ifndef TEST_CIL_POLICY_H_
#define TEST_CIL_POLICY_H_

#include "CuTest.h"

void test_cil_filecon_compare_meta_a_not_b(CuTest *tc);
void test_cil_filecon_compare_meta_b_not_a(CuTest *tc);
void test_cil_filecon_compare_meta_a_and_b_strlen_a_greater_b(CuTest *tc);
void test_cil_filecon_compare_meta_a_and_b_strlen_b_greater_a(CuTest *tc);
void test_cil_filecon_compare_type_atype_greater_btype(CuTest *tc);
void test_cil_filecon_compare_type_btype_greater_atype(CuTest *tc);
void test_cil_filecon_compare_stemlen_a_greater_b(CuTest *tc);
void test_cil_filecon_compare_stemlen_b_greater_a(CuTest *tc);
void test_cil_filecon_compare_equal(CuTest *tc);

void test_cil_nodecon_compare_aipv4_bipv6(CuTest *tc);
void test_cil_nodecon_compare_aipv6_bipv4(CuTest *tc);
void test_cil_nodecon_compare_aipv4_greaterthan_bipv4(CuTest *tc);
void test_cil_nodecon_compare_aipv4_lessthan_bipv4(CuTest *tc);
void test_cil_nodecon_compare_amaskipv4_greaterthan_bmaskipv4(CuTest *tc);
void test_cil_nodecon_compare_amaskipv4_lessthan_bmaskipv4(CuTest *tc);
void test_cil_nodecon_compare_aipv6_greaterthan_bipv6(CuTest *tc);
void test_cil_nodecon_compare_aipv6_lessthan_bipv6(CuTest *tc);
void test_cil_nodecon_compare_amaskipv6_greaterthan_bmaskipv6(CuTest *tc);
void test_cil_nodecon_compare_amaskipv6_lessthan_bmaskipv6(CuTest *tc);
#endif
