// Program for the insertion sort
#include<iostream>
using namespace std;

int* insertionSort(int arr[], int n){
    for (int i = 1; i <n; i++){
        int current =  arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    return arr;
}

int main(){
    int *ptr;
    int arr[] = {1,3,54,85,18,26,48,58};
    int n = 8; // element numbers of arr
    ptr = insertionSort(arr,n);


   cout <<"{";
    for (int  i = 0; i < n; i++){
        cout << ptr[i] << ", ";
    }
    cout <<"}";

}