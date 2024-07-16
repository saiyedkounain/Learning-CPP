#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j =low; j<high;j++){
        if(arr[j] < pivot){
            i++;
            //swap i with j
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] =temp;
        }

    }
    i++;
    // swap pivot and i
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;

    return i;
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pidx = partition(arr, low, high);

        quickSort(arr,low, pidx-1);
        quickSort(arr, pidx+1, high);
    }

}
int main (){
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

    //Calling quicksort
    quickSort(arr,0,n-1);
    cout<<"Sorted Array: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<",";
        
    }
    return  100;
}