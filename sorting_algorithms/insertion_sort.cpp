#include <bits/stdc++.h>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {20, 12, 43, 65, 765, 34, 76, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    return 0;
}