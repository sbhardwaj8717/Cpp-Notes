// Pointers are used for the address of any variable.

#include<iostream>
using namespace std;

void swap(int *a , int *b){
    int temp  = *b;
    *b = *a;
    *a = temp;
}
int main(){
   /*
    int a = 5;
    int *ptr = &a;
    *ptr = 10;
    cout << a;
    */

   // Pointer Arithmatic ::- ++, --, +, -
   // increases acro 

   // pass by reference 

   int a = 5,b = 6;
   swap(&a,&b);
   cout<< a << "  " << b;
}
