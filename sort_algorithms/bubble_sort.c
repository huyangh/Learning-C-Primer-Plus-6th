//
// Created by huyan on 2020/5/18.
//
extern void swap(int * a, int * b);

void bubble_sort(int arr[], int len) {
//    int temp = 0;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]){
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
