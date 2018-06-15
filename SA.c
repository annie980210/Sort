#include "SA.h"

/*
void insertionSort(DT * arr, int length)
{
	int i, j;
	DT temp;
	for (i = 1; i < length; i++)
	{
		temp = arr[i];					//삽입할 대상을
		j = i - 1;						//뒤에서부터
		while (j >= 0 && arr[j] > temp) //밀어내면서 적절한 자리를 찾으면
		{
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = temp;				//그곳에 삽입
	}
}
*/
void insertionSortRec(Rectangles * arr, int length)
{
	int i, j;
	Rectangles temp;
	for (i = 1; i < length; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j].height * arr[j].weight > temp.height * temp.weight)
		{
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = temp;
	}
}

/*
int middleValue3(DT * arr, int one, int two, int three)
{
	if (arr[one] < arr[two])
	{
		if (arr[two] < arr[three])
			return two;
		else if (arr[three] < arr[one])
			return one;
		else
			return three;
	}
	else if (arr[one] > arr[two])
	{
		if (arr[one] < arr[three])
			return one;
		else if (arr[three] < arr[two])
			return two;
		else
			return three;
	}
	else
		return one;
}


void quickSort(DT * arr, int left, int right)
{
	int i, j;
	int pivotIndex = middleValue3(arr, left, (left + right) / 2, right);
	DT pivot = arr[pivotIndex];
	
	if (pivotIndex == left)
		i = left + 1, j = right;
	else if (pivotIndex == right)
		i = left, j = right + 1;
	else
		i = left, j = right;

	while (arr[i] < pivot)
		i++;
	while (pivot < arr[j])
		j--;






}

void quickSort(DT *arr, int left, int right)
{
        int i, j;
        DT temp;
        DT pivot = arr[left];
        if(left < right)
        {
               i = left;
               j = right+1;
               while( i <= j)
               {
                       do
                       i++;
                       while(arr[i] > pivot);
                       do
                       j--;
                       while(arr[j] < pivot);
                       if(i<j)
                       {
                              temp = arr[i];
                              arr[i] = arr[j];
                              arr[j] = temp;
                       }
                       else
                             break;
               }
               temp = arr[j];
               arr[j] = arr[left];
               arr[left] = temp;
               quickSort(arr, left, j-1);
               quickSort(arr, j+1, right);
        }
}

void quickSortRec(Rectangles * arr, int left, int right);
void iterativeMergeSort(DT * arr, int length);
void iterativeMergeSortRec(Rectangles * arr, int length);
void heapSort(DT * arr, int length);
void heapSortRec(Rectangles * arr, int length);
*/
