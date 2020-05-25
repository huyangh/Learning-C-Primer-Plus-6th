//
// Created by  huyangh on 2020/5/18.
//

typedef struct {
    int start, end;
} Range;
Range new_Range(int s, int e) {
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int * a, int * b);

void quick_sort(int arr[], int len) {
    if (len <= 0)
        return; // Avoid Segment Fault
    // r[p++] equivalent to push,r[--p] equivalent to pop
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        int mid = arr[(range.start + range.end) / 2]; // Choose middle as pivot
        int left = range.start, right = range.end;
        do
        {
            while (arr[left] < mid) ++left;   // Check pivot left
            while (arr[right] > mid) --right; // Check pivot right

            if (left <= right)
            {
                swap(&arr[left],&arr[right]);
                left++;right--;               // Move pointer to continue
            }
        } while (left <= right);

        if (range.start < right) r[p++] = new_Range(range.start, right);
        if (range.end > left) r[p++] = new_Range(left, range.end);
    }
}

