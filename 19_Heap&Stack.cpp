// Heap & Stack memory.

#include<iostream>
using namespace std;

int main(){
    int a = 10;     // Stack memory
    int *p = new int();     // p is in Stack cantains the location of Heap

    *p = 20;                // 20 is in heap memory
    cout << a << " and " << p << " and " << *p <<endl;

    delete p;               // Deleting Heap Memory only from Stack

    p = new int[4];         // Rememory Allocation
    delete[] p;

    p = NULL;               // Removing from Stack memory

}