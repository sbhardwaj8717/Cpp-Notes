// Groups of Char. Char[] is static in nature but Strings are dynamic in nature

#include<iostream>
#include<algorithm>       // for inbuilt algos
#include<string>          // for all strings methods
using namespace std;

int main(){
/*
    string str;
    cin >>  str;         
    // First word of the sentence;
    cout << str;
    string str1;
      cout <<endl;
    getline(cin,str1);   // Complete sentence
    cout << str1;
*/

/*
    // Contactination ::- using append
    string s1 = "Saurabh", s2= "Bhardwaj8717";
    // s1 = s1+s2;        //either this
    s1.append(s2);        // or this
    cout << s1<< endl;

    // for charAt(index)
    cout << s1[2] << endl;
    // clear fun()
    s1.clear();
*/

/*
    // compare() :: if(a1 > a2) == 1 ,0,-1
  
    string a1= "abc";
    string a2 = "jkl";
    cout << a1.compare(a2);
  */

  // empty() :: checks wheter it is empty or not
  // erase(index , count) :: remove char

/*
  string erase = "sbhardwaj8717";
  erase.erase(2 , 3);
  cout << erase << endl; 
*/

/*

  // find("subString") ::- finds a substring in a string

  string javaLoversInCpp = "Hey coders, I am not a professional C/CPP coder. I Loves to code in JAVA";
  cout << javaLoversInCpp.find("Loves") << endl;

  // Inset(index, string) ::- use to sandwich a string
  javaLoversInCpp.insert(12 , "how are you ");
  cout << javaLoversInCpp << endl;

  // size() / length() ::-- used to find the length of a string
  cout << javaLoversInCpp.size() << " and " << javaLoversInCpp.length() << " Both are same bro..lol" << endl;  

  // substr(index , count) ::- give a substring form the starting index till count
  cout << javaLoversInCpp.substr(0,11) << javaLoversInCpp.substr(60 , javaLoversInCpp.size()) <<endl;
*/

// stoi(string) ::- string to int
string toInt = "8717";
int loveCode = stoi(toInt);
cout <<"SBhardwaj" << loveCode << endl;
// to_string(intValue) ::- int to string

string s8717 ="S.Bhardwaj" + to_string(loveCode);
 cout << s8717 << endl; 
// sort(bignIndex, endIndex) ::-  to sort the string lexcally (<algorithm>)
sort(s8717.begin() , s8717.end());
cout << s8717;
return 0;
}
