#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//11360238
int main(void)
{
	int n[10];
	int i;
	for ( i = 0; i < 10; i++)
	{
		n[i] = 0;
	}
	printf("%s%13s\n", "Element", "Value");
	for ( i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}

	system("pause");
	return 0;
}