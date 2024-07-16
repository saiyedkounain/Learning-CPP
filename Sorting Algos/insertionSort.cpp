#include <iostream>
using namespace std;
void inSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && current < arr[j]){
            arr[j+1] = arr[j];
            j-=1;
        }
        //placement
        arr[j+1] = current;
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

    //Sorting it out
    inSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<",";
        
    }


    return 0;
}