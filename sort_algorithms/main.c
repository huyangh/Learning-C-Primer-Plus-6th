#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int len);
void selection_sort(int arr[], int len);
void insertion_sort(int arr[], int len);
void quick_sort(int arr[], int len);

int main() {

//    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70, 120, 101, 100 };
    int arr[20];
    srand(time(NULL));

    for (int j = 0; j < 20; j++) {
        arr[j] = rand();
    }

    int len = (int) sizeof(arr) / sizeof(*arr);

//    bubble_sort(arr, len);
//    selection_sort(arr, len);
//    insertion_sort(arr, len);
    quick_sort(arr,len);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    return 0;
}

void swap(int * a, int * b){
    int temp = *b;
    *b = *a;
    *a = temp;
}