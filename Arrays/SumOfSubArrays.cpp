#include <iostream>
using namespace std;
void sumOfSubArrays(int arr[], int n){
    for(int i = 0; i<n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum = sum + arr[j];
            cout<<sum<<" ";
        }
    }
}
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
    sumOfSubArrays(arr,n);
    return 0;
}
