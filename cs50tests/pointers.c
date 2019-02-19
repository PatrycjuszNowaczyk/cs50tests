#include <stdio.h>

void main_pointers(void)
{
	printf("Hello from pointers.c\n\n");

	int arr[] = { 1,2,3 };
	int* parr = &arr;
	
	printf("%d\n", sizeof(arr));
	printf("%d\n", parr);
	parr++;
	printf("%d\n", parr);

	//for (int i = 0, n = sizeof(arr) / sizeof(int); i < n; i++)
	//{
	//	printf("%i", parr[i]);
	//}

}