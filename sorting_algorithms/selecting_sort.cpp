#include <bits/stdc++.h>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swapValues(arr[i], arr[minIndex]);
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
