#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++){
       if(num%i == 0)
        return false;
    }
    return true;
    
}
int main(){
    int a,b;
    cin >>a >> b;

    // for(int i = a; i <= b ; i++){
    for(int i = (a<b ? a:b) ; i <= (a>b ? a:b); i++){
        if(isPrime(i))
            cout<<i<<endl; 
      }
}