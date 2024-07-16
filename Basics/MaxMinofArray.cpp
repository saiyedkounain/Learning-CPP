#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the length of the array";
    int n;
    cin>>n;
    int arr[n];
    // Input of the array
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    //Output of the same array
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

    //Finding max and min
    int maxima = INT8_MIN; //INT8_MIN is the minimum value of int in C++
    int minima = INT8_MAX; //Same but maximum value

    // Visiting each element of the list and checking which is max or min and updating as we go
    for(int i =0; i<n;i++){
        maxima = max(maxima, arr[i]); //max() returns the max value among the 2 arguments given
        minima = min(minima, arr[i]); //same thing lol
    }

    //Getting the output
    cout<<"The maximum vaulue is "<<maxima<<" The minimum value is "<<minima<<endl;


    return 0;
}