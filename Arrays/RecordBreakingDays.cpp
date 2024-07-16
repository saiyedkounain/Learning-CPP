// This is a kickstart question form Google
// Input is a list with days i and the visitors v[i], and output is the number of record breaking days
// A record breaking day is 1. More visitors than all previous days
// SHould be greater than the visitors in the next day.
//First and last day can also be a record breaking day

#include <iostream>
using namespace std;
int recordsBroken(int arr[], int n){
    int rd =0;
    int j =0;
    int pm =INT8_MIN;
    // if(arr[0] > arr[1]){
    //     pm = arr[0];
    //     rd ++;
    //     j = 2;
    // }else{
    //     j=1;
    // }

    while(j<n){
        if(arr[j] > pm && arr[j] > arr[j+1]){
            rd++;
            pm = arr[j];
        }
        j++;
    }

    // if(arr[n-1] > pm ){
    //     rd++;
    // }

    return rd;
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
    cout <<"Number of record breaking days: " << recordsBroken(arr,n) << endl;
    return 0;

}