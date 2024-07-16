#include <iostream>
using namespace std;
// Sub array is the continous part of an array, in order obviously
int main(){
     cout<<"Enter the length of array: ";
    int n; cin>>n;
    int arr[n];
    //Input array
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    cout<<endl;

    //Displaying unsorted array
    cout<<"Your Array: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<",";
        
    }
    cout<<endl;

    // To print the sum of all the subarrays
    //Eg: [1,2,2]
    //The subarrays are = n*(n+1)/2 i.e 6 here
    //[1,2,2] [1,2] [1] [2,2] [2]  [2]
    // 5,3,1,4,2

    //Using nested loops
 

    for(int i=0; i<n;i++){
        int sum = 0;
        for(int j=i; j<n;j++){
            sum = sum+arr[j];

            cout<<sum<<" ";
        }
    }


}