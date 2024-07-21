#include <iostream>
using namespace std;
int recordsBroken(int days[], int n){
    int arr[n+1]; // duplicating an array with the same elements and appending the last element as -1
    for(int i=0; i<n; i++){
        arr[i] = days[i];
    }
    arr[n+1] = -1;

    // the conditon for a day to be "record breaking",
    //1. greater than all prev days
    //2. greater than the following day

    // variables
    int rd =0; // this will be our answer
    int pmax = INT8_MIN; // to store and update the previous max element 
    // loop away

    for(int i=0; i<=n; i++){
        if(arr[i] > pmax && arr[i] > arr[i+1]){
            rd++;
        }
            //update the max element
            pmax = max(pmax, arr[i]);
    }

    return rd;

}
int main(){
    int n;
    cout<<"Enter the number of elements: "; //5
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }

    cout<<"Your Array: "<<endl; // 1 2 1 4 5
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //calling the function
    cout<<"Records broken on " << recordsBroken(arr,n) << " days"; // should be 2
    
    

    return 0;
}