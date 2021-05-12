// Program for the Selection Sort
#include<iostream>
using namespace std;

int* selectionSort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        int min =arr[i];
        for(int j = i+1; j < n; j++){
            if(arr[j] <min){
                int temp = arr[j];
                arr[j] = min;
                min = temp;
            }
        }
        arr[i] = min;
    }
    return arr;
}
int main(){
    int *ptr;
    int n = 7;
    int arr[] = {351,351,46,5,454,45,754};
    ptr = selectionSort(arr , n);

    cout <<"{";
    for (int  i = 0; i < n; i++){
        cout << ptr[i] << ", ";
    }
    cout <<"}";

    return 0;
        
}