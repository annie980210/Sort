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

void Merge(DT * str, int nLow, int nMid, int nHigh) 
{ 
    DT buf[10] = {0,}; 
    int i,j,k; 

    printf("[Merge Test] %s\n",str); 

    i = nLow; j = nMid+1; k = nLow; 
    while (i <= nMid && j <= nHigh) 
    { 
        if (str[i] < str[j]) 
            buf[k++] = str[i++]; 
        else 
            buf[k++] = str[j++]; 
    } 

    while (i <= nMid) 
        buf[k++] = str[i++]; 

    while (j <= nHigh) 
        buf[k++] = str[j++]; 

    for (i=nLow; i<=nHigh; i++) 
    { 
        str[i] = buf[i]; 
    } 

    printf("%s\n",str); 
} 

void iterativeMergeSort(DT * str, int nLow, int nHigh) 
{ 
    int nMid; 

    nMid = (nLow + nHigh) / 2; 
    if (nLow < nHigh) 
    { 
        MergeSort(str, nLow, nMid); 
        MergeSort(str, nMid+1, nHigh); 
        Merge(str, nLow, nMid, nHigh); 
    } 
    else 
    { 
        return; 
    } 
}

void iterativeMergeSortRec(Rectangles * arr, int length);

void BuildMinHeap(DT values[],int from, int to){
 int left,right,go,idx;
 DT temp;
 if(to-from<2){
  return;
 }
 while(from>=0){
  count++;
  idx = from;
  count++;
  go = from;
  count++;
  while(go*2+1<to){
   count++;
   left = go * 2 + 1;
   count++;
   right = go * 2 + 2;
   count++;
   go = left;
   count++;
   if(right<to && values[right]<=values[left]){
    count++;
    go = right;
    count++;
   }
   if(values[go]<values[idx]){
    count++;
    SWAP(values[idx],values[go],temp);
    idx=go;
    count++;
   }else break;
  }
  count++;
  --from;
  count++;
 }
 count++;
}

void heapSort(DT values[],int c){
 DT temp;
 BuildMinHeap(values,c/2-1,c);
 while(c>0){
  count++;
  --c;
  count++;
  SWAP(values[0],values[c],temp);
  BuildMinHeap(values,0,c);
 }
 count++;
}

void heapSortRec(Rectangles * arr, int length);

