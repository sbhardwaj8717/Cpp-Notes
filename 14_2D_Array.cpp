// matirx form of array

#include<iostream>
using namespace std;

 int main(){
     int arr[4][5];
     for(int i =0; i <4; i++){
         for (int j = 0; j < 5; j++){
             cin>> arr[i][j];
         }
     }
     for(int i =0; i <4; i++){
         for (int j = 0; j < 5; j++){
             cout<< arr[i][j];
         }
         cout<<endl;
     }
 }