#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SA.h"

void main()
{
	DT arr[LENGTH];
	clock_t start, end;
	srand((unsigned int)time(NULL));

	/* Initialize elements of the array
	for (int i = 0; i < LENGTH; i++)
		arr[i] = (DT)rand();

	for (int i = 0; i < LENGTH; i++)
	{
		arr[i].x = (float)rand();
		arr[i].y = (float)rand();
		arr[i].height = (float)rand();
		arr[i].weight = (float)rand();
	}
	*/

	start = clock();
	/* Sorting algorithm
	insertionSort(arr, LENGTH);
	quickSort(arr, 0, LENGTH - 1);
	iterativeMergeSort(arr, LENGTH);
	heapSort(arr, LENGTH);
	*/
	end = clock();

	printf("\nThe elasped time is %ld ms in %s, %s array[%d].\n", end - start, SA, DTS, LENGTH);

	system("pause");
}

