// returnType funName(parameter 1 , parameter 2,...... ){
//     body of the funtion
//}


//  fun() are called in the call stack
#include<iostream>
using namespace std;

int sum (int a , int b){
    return a + b;
}

int main(){

    int a = 5;
    int b = 4;
    cout << "sum of 5 and 4 = " << sum(a,b) << endl;  
    // call by value...passing the values not the actual reference. 
    return 0;
}