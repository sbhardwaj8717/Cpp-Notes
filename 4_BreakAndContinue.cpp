#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 50; i++)
    {
        if(i >10 && i < 20 )
            continue;
        else   
            cout << "S is the great alphabet."<< i <<endl;
    }
    
}