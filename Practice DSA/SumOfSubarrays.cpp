#include <iostream>
using namespace std;

void SubArraysSum(int arr[], int n){
    for(int i=0; i<n; i++){
         int sum =0; 
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<sum<<" ";
        }
    }
}
int main(){
      int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }

    cout<<"Your Array: "<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //calling the function
    SubArraysSum(arr,n);
    return 0;
}