#include<bits/stdc++.h>
using namespace std;


void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n){
    if( n==1) return;

    int didSwap = 0;
    for(int j=0; j<n-1;j++){
        if(arr[j]> arr[j+1]){
            swap(arr[j],arr[j + 1]);
            didSwap = 1;
        }
    }
    if(didSwap == 0) return;
    bubbleSort(arr, n-1);
}

int main(){
    int arr[] = {20, 12, 43, 65, 765, 34, 76, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for ( int i=0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}