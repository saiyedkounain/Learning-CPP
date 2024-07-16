#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int pidx = low-1;

    for(int j=low; j<high; j++){
        if(pivot > arr[j]){
            //make space for pivot and swap
            pidx++;
            int temp = arr[j];
            arr[j] = arr[pidx];
            arr[pidx] = temp;
        }
    }
    //make the last space for the pivot itself
    pidx++;
    int temp = arr[high];
    arr[high] = arr[pidx];
    arr[pidx] = temp;

    return pidx;

}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pidx = partition (arr, low, high);

        quickSort(arr, low, pidx-1);
        quickSort(arr, pidx+1, high);

    }
}
int main(){
    cout<<"ENter the length of array: ";
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
    quickSort(arr,0,n-1);
    // printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}