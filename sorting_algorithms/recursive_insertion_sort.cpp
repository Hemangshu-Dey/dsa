#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(int arr[], int i, int n){
    if( i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j -1], arr[j]);
        j--;
    }

    insertionSort(arr, i + 1 , n);
}

int main(){
    int arr[] = {20, 12, 43, 65, 765, 34, 76, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    for ( int i=0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}