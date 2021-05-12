// Program for the bubble sort
#include<iostream>
using namespace std;

int* bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(){
    int *ptr;
    int n = 6;
    int arr[] = {6,5,4,3,2,1};
    ptr = bubbleSort(arr,n);

       cout <<"{";
    for (int  i = 0; i < n; i++){
        cout << ptr[i] << ", ";
    }
    cout <<"}";

    return 0;
}
