#include "stdio.h"

extern void test_a(void);

int main(void)
{
	printf("git test\n");	
	test_a();
	printf("11\n");
	return 0;
}
