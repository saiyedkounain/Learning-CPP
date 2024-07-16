#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    // Sorting Out
    for(int i =0; i<n-1;i++){
        int swap =0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap
                swap = swap +1;
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(swap == 0){
            break;
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

    //Sorting it out
    bubbleSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<",";
        
    }



    return 0;
}