#ifndef DQLITE_TEST_DB_H
#define DQLITE_TEST_DB_H

#include <CUnit/CUnit.h>

void test_dqlite__db_setup();
void test_dqlite__db_teardown();

void test_dqlite__db_open();

CU_TestInfo dqlite__db_open_suite[] = {
	{"open",             test_dqlite__db_open},
	CU_TEST_INFO_NULL,
};

CU_SuiteInfo dqlite__db_suites[] = {
	{
		"dqlite__db_open",
		NULL, NULL,
		test_dqlite__db_setup, test_dqlite__db_teardown,
		dqlite__db_open_suite
	},
	CU_SUITE_INFO_NULL,
};

#endif /* DQLITE_TEST_DB_H */
