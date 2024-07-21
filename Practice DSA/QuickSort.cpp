#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1; //asssuming the space needed for the pivot element is none;
    for(int j =low; j < high; j++){
        if(pivot > arr[j]){ //checking if the pivot needs space to be on the right index
            i++; //making space
            //swap
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    //making room for the pivot itself
    i++;
    //swap arr[i] and arr[high]
    int temp = arr[high];
    arr[high] = arr[i];
    arr[i] = temp;
    return i;
}
void quickSort(int arr[], int low, int high){
    if(low <= high){
        int pidx = partition(arr,low, high);

        quickSort(arr,low , pidx-1);
        quickSort(arr,pidx+1, high);
    }
}
// Time Complexity
// AVg Case : O(nLogn)
// Worst Case : O(n**2) only when the pivot we chose is to be the largest or smallest element of the array
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
    quickSort(arr, 0, n-1);

    cout<<"Sorted Array: "<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}