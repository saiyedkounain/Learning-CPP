#include <iostream>
using namespace std;
void maxTilli(int arr[], int n){
    int mx = INT8_MIN;
    for(int i =0; i<n; i++){
        mx = max(mx,arr[i]);
        cout<<mx<<" "; 
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
    maxTilli(arr,n);
    return 0;
    return 0;

}