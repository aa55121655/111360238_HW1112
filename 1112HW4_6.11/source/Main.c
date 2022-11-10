#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//111360238
#define SIZE 10

void bubble_sort(int[], int);

int main()
{
	int D[SIZE] = { 47,2,8,12,92,9,76,5,8,22 }, i;

	printf("¥¼±Æ§Ç°}¦C :\n");
	for (i = 0; i < SIZE; i++) 
	{
		printf("%4d", D[i]);
	}
	printf("\n");
		
	bubble_sort(D, SIZE);

	printf("±Æ§Ç°}¦C :\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", D[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}

void bubble_sort(int data[], int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}