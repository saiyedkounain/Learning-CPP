#include <iostream>
using namespace std;

void subarraysSum(int arr[], int n){
    // [1,2,2]
    for(int i =0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            cout<<sum<<" ";
        }
    }
}
int main(){
    // getting input
    cout<<"ENter the length of array";
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }

    //displaying the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //giving the output
    subarraysSum(arr,n);

    return 0;
}