#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n;j++){
            if(arr[j] < arr[min]){
                //cjhnaging the smallest index
                min = j;
            }
        }
        //swap
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

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
    selectionSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<",";
        
    }



    return 0;
}