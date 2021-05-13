#include<iostream>
using namespace std;
int main(){
    int len;
    cout << "Enter the word length = ";
    cin >> len;
    cout << len;
    cout<< "\nEnter a word here...    ";
    char arr[len+1];
    cin >> arr;

    bool isTrue = 1;
    for (int i = 0; i < len; i++){
        if(arr[i] != arr[len-1-i]){
            isTrue = false;
            break;
        }
    }
    
    if (isTrue)
        cout << "\nULTA SIDHA 1 SAMAN..xd";
    else
        cout << "\nNA BHAI NA...";
}