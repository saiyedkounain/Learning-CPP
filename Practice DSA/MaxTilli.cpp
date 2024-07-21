#include <iostream>
using namespace std;
void maxTilli(int arr[], int n){
    // intialize a max with the minumum number possible in c++
    int mx = INT8_MIN;
    //Loop over & if any element is greater than mx, update it and print it out.
    for(int i =0; i < n; i++){
        mx = max(mx,arr[i]); //updating the latest maxinmum element
        cout<<mx<<" ";
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
    maxTilli(arr,n);

    return 0;
}