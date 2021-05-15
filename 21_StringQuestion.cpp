// Pratice ques for cpp...

#include<iostream>
#include<string>          // for all strings methods
#include<algorithm>
using namespace std;

int main(){
    /*
    cout << 'a'- 'A'<< endl;            // 32 will be the answer 
    // ques ::- toUpperCase and toLowerCase
    string str = "sbhardwaj";
    // toUpperCase ::-
    for (int i = 0; i < str.size(); i++){
        str[i] -=32;
    }
    cout << str << endl;

    // toLowerCase ::-
    for (int i = 0; i < str.size(); i++){
        str[i] +=32;
    }
    cout << str << endl;

    //transform(beginIndex , lastIndex , whereToStart, ::toType) ::- inBulit function for the caseConversion   
    string javaIsGreat = "And people says that java is lenthy...idiots";
    transform(javaIsGreat.begin(), javaIsGreat.end(), javaIsGreat.begin(), ::toupper);
    cout << javaIsGreat << endl;
    */

   /*
   //ques 2 ::- string greatest number
   string str = " 8717";
   sort(str.begin() , str.end() , greater<int>());
   cout << str<<endl;
   */ 

  // max occrence charater

    string str = "this is me bro s bhardwaj";
    int allChar[26];
    for (int i = 0; i < 26; i++){
        allChar[i] = 0;
    }
    for (int i = 0; i < str.length(); i++){
        allChar[str[i] -'a']++;
    }
    int max = 0;
    char ans ='a';
    for (int i = 0; i < 26; i++){
        if(allChar[i] > max){
            max = allChar[i];
            ans = i + 'a';
        }
    }
    cout << "max char is '" << ans <<"' and freq is "<< max << endl;
     

}
