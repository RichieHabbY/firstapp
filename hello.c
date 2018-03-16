#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(int argc, char * argv[])
{
	printf("this is my app codes whit github!\n");
	int ret = add (3 , 16);

	printf("add ret : %d \n", ret);
	return 0;
}
