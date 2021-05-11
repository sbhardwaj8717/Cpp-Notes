// A group of similar type of data is called Array.

// dataType arrayName[size];
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[4] = {8,7,1,7};
    for (int i = 0; i < 4; i++){
        cout <<arr[i];
    }

    int max = INT_MAX;
    int min = INT_MIN;
    cout << endl << min << "  " << max; 

}