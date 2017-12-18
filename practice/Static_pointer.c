#include<stdio.h>

int* demo()
{
	int static a;
	return &a;
}
int main()
{
	int *ptr = demo();
	return 0;
}
