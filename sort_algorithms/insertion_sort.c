//
// Created by huyan on 2020/5/18.
//

void insertion_sort(int arr[], int len){
    int i,j,temp;
    for (i=1;i<len;i++){
        temp = arr[i];
        for (j=i;j>0 && arr[j-1]>temp;j--)
            arr[j] = arr[j-1];
        arr[j] = temp;
    }
}