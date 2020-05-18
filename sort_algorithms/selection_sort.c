//
// Created by huyan on 2020/5/18.
//
extern void swap(int * a, int * b);

void selection_sort(int arr[], int len)
{
    for (int i = 0 ; i < len - 1 ; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++) {     //Go through all unsorted values
            if (arr[j] < arr[min]) {
                min = j;    //Find and update the minvalue label
            }
        }
        swap(&arr[min], &arr[i]);    //Swap previous minvalue and current minvalue
    }
}
