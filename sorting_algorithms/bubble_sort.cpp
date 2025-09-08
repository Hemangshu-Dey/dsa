#include <bits/stdc++.h>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        int didSwap=0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j]>arr[j + 1]) {
                swapValues(arr[j],arr[j + 1]);
                didSwap=1;
            }
        }

        if(didSwap == 0){
            break;
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

    bubble_sort(arr, n);

    return 0;
}
