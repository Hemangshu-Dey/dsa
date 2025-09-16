#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while( arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while( arr[j] >pivot && j >= low + 1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low , pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main() {
    int arr[] = {20, 12, 43, 65, 765, 34, 76, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}