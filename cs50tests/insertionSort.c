#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr);

void main_insertionSort()
{
	int arrayOne[6] = { 6,3,2,5,4,1 };

	for (int i = 0; i < 6; i++)
	{
		printf("%i", arrayOne[i]);
	}
	printf("\n");

	insertionSort(arrayOne);

	for (int i = 0; i < 6; i++)
	{
		printf("%i", arrayOne[i]);
	}
}

void insertionSort(int *arr)
{
	int firstPointer=arr, sorted = *arr, unsorted = *(arr+1);

	while( (arr+1))
	{
		sorted = *arr;
		unsorted = *(arr+1);
		if (sorted <= unsorted)
		{
			arr++;
		}
		else
		{
			while (sorted > unsorted)
			{
				*arr = unsorted;
				*(arr+1) = sorted;
				if (arr>firstPointer)
				{
					arr--;
				}
				sorted = *arr;
				unsorted = *(arr+1);
			}
		}
	}
	free(firstPointer, sorted, unsorted);
}