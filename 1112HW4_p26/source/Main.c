#include <stdio.h>
#include <stdlib.h>

//111360238
int main(void)
{
	char array[5];
	printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
		array, &array[0], &array);

	system("pause");
	return 0;
}