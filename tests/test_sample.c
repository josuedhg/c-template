#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

#include "hello.h"

void test_hello(void **state)
{
}

int main()
{
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_hello),
	};
	return cmocka_run_group_tests(tests, NULL, NULL);
}
