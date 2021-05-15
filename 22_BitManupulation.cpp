#include<iostream>
using namespace std;

int main(){
    // ques ::- find the i-th bit of any number
    int n = 5;      // 5 == 0101
    // let's find 2nd bit of 5

    if (1<<2 & 5)           // left shift of 1 by 2 == 1 << 2 == 0100 & 0101 = 0100 
        cout << "1";
    else 
        cout << "0";
}