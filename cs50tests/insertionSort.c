#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int size);

void main_insertionSort()
{
	int arrayOne[6] = { 6,3,2,5,4,1 };

	for (int i = 0; i < 6; i++)
	{
		printf("%i", arrayOne[i]);
	}
	printf("\n");

	printf("Address of array: %i\n", &arrayOne);
	printf("Size of array: %i\n", sizeof arrayOne);

	insertionSort(arrayOne, sizeof arrayOne/ sizeof arrayOne[0]);

	for (int i = 0; i < 6; i++)
	{
		printf("%i", arrayOne[i]);
	}
}

void insertionSort(int arr[], int size)
{
	int index = 0, sorted = arr[index], unsorted = arr[index + 1];

	while (index+1 < size)
	{
		sorted = arr[index];
		unsorted = arr[index + 1];
		if (sorted <= unsorted)
		{
			index++;
		}
		else
		{
			while (sorted > unsorted)
			{
				arr[index] = unsorted;
				arr[index + 1] = sorted;
				if (index > 0)
				{
					index--;
				}
				sorted = arr[index];
				unsorted = arr[index + 1];
			}
		}
	}
	//free(firstPointer, sorted, unsorted);
}