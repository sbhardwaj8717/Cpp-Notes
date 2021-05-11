#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 6;
    // AIRTHMATIC ::- +, -, /, *, %, ++, --
    cout <<"a + b = " << a +b << endl;
    cout <<"a X b = " << a *b << endl; 

    cout <<"a MOD b = " << a %b << endl;
    cout <<"a++  AND ++b= " << a++ <<" and "<< ++b << endl;

    // COMPARISION ::-   ==, !=, >=, >, <, <=
    if(a == b)
        cout <<" a and b are equal" << endl;
    else    
        cout <<" a and b are not equal" << endl;
    
    // LOGICAL ::- &&, ||, !
    // BITWISE ::- &,|, ^ (XOR), ~ (ONES), << (LEFT SHIFT), >> (RIGHT SHIFT)

    // AND (&) ::- 1 & 1 = 1 ONLY; ELSE 0;
    // OR (|) ::- 0 | 0 = 0 ONLY; ELSE 1;
    // XOR (^) = SAME = 0 AND DIFFRENT = 1; 0 + 0 = 0 = 1 + 1; 0 + 1 = 1 = 0 + 1;
    // ONES (~)=  0 TO 1 AND TO 0; ~ 110 = 001     
    // RIGHT SHIFT (>>) ::-  a >> n = a / 2^n;
    // LEFT SHIFT (<<) ::-  a << n = a * 2^n;



    //MISCELLANEOUS ::- sizeof(), cast(), &var = memory refrence, *var = pointer of the memory;
    //TERNARY ::- CONDITION ? X : Y; 

    return 0;
}