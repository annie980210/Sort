#pragma once
#define SA "insertion sort" //Sorting Algorithm
#define DTS "char" //Data Type String
#define DT Rectangles
#define LENGTH 80000

typedef struct rectangles {
	float x;
	float y;
	float height;
	float weight;
} Rectangles;

void insertionSort(DT * arr, int length);
void insertionSortRec(Rectangles * arr, int length);
void quickSort(DT * arr, int left, int right);
void quickSortRec(Rectangles * arr, int left, int right);
void iterativeMergeSort(DT * arr, int length);
void iterativeMergeSortRec(Rectangles * arr, int length);
void heapSort(DT * arr, int length);
void heapSortRec(Rectangles * arr, int length);
