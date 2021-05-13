// For N charaters we need to take N+1 size of the array due to the last element of char arr is null( '\0' ).

#include<iostream>
using namespace std;
int main(){
    char arr[100] = "apple";
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    
}