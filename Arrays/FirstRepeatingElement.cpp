#include <iostream>
using namespace std;

int firstRE(int arr[], int n){
    int mindx = INT8_MAX;
    const int N = 1e3; // 10 to the power of 3
    int indx[N];
    for(int i=0; i < N; i++){
        indx[i] = -1;

    }

    // real work
    for(int i=0; i<n; i++){
        int element = arr[i];
        if(indx[element] == -1){
            indx[element] = i;
        }else{
            mindx = min(mindx, indx[element]);
        }
    }

    if(mindx == INT8_MAX){
        return -1;
    }else{
        return mindx+1;
    }
}
int main(){
    cout<<"Enter the length of array: ";
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
    cout << "The first repeating element is at positon: " << firstRE(arr, n) << endl;

    return 0;
}