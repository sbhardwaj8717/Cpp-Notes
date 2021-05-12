// Program for the linear search
#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int num){    
    for (int i = 0; i < 10; i++){
        if (arr[i] == num){
            return true;
        }
    }
    return false;
}

bool binarySearch(int arr[] , int search){    
    int start = 0;
    int end = 10;
    while (start <= end){
        int mid = (start + end)/2;
        if (mid == search){
            return true;
        }else if (arr[mid] > search){
            end = mid-1; 
        }else{
            start = mid+1;
        }
    }
    return false;
}


int main(){

    int arr[] = {1,2,4,5,45,74,600,841,964,8717};
    int search;
    cout << "Enter a number to search = ";
    cin >> search;
    if(linearSearch(arr, search))
        cout << "\n ELEMENT FOUND IN LINERAR SEARCH." <<endl;
    else 
        cout << "\n ELEMENT NOT FOUND IN LINERAR SEARCH."<<endl;

    
    if(binarySearch(arr, search))
        cout << "\n ELEMENT FOUND IN BINARY SEARCH." <<endl;
    else 
        cout << "\n ELEMENT NOT FOUND IN BINARY SEARCH."<<endl;
    return 0;
}