// Largest word in a sentence

#include<iostream>
using namespace std;
int main(){
    int len;
    cout << "Enter the word length = ";
    cin >> len;
    cin.ignore();

    cout<< "\nEnter a word here...    ";
    char arr[len+1];
    cin.getline(arr,len);
    

    int i =0;
    int curLen = 0, maxLen = 0;
    while (1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curLen > maxLen)
                maxLen = curLen;
            curLen = 0;
        }else  
            curLen++;
        if(arr[i] == '\0')
            break;
        i++;
    }

    cout << endl << maxLen;
}