#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = high+low/2;
        if(arr[mid]==key){
            return mid;
            break;
        }else if(key > arr[mid]){
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter the length of Array: ";
    int n;
    cin>>n;
    int arr[n];
    //Input the array:
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    
    cout<<"Enter key to find: ";
    int key; cin>>key;
    int pos = binarySearch(arr,n,key);
    if(pos != -1){
        cout<<"Found It at position "<< pos+1;
    }else{
        cout<<"It aint here bro";
    }


    return 0;
}