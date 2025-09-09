#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int temp[high - low + 1];
    int left = low;
    int right = mid + 1;
    int count = 0;

    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp[count++] = arr[left++];
        } else {
            temp[count++] = arr[right++];
        }
    }

    while (left <= mid) {
        temp[count++] = arr[left++];
    }
    while (right <= high) {
        temp[count++] = arr[right++];
    }

    for (int i = 0; i < count; i++) {
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int arr[] = {20, 12, 43, 65, 765, 34, 76, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
