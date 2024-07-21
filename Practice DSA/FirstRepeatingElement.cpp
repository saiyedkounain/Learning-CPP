#include <iostream>
using namespace std;

int firstRE(int arr[], int n){
    // varaiables needed
    int N = 1e3+1; // 10 to the power of 3 +2
    int indx[N]; 
    int mindx = INT8_MAX; //we will return this
    for(int i=0; i<N; i++){
        indx[i] = -1;
    }
    // indx[] has N elements with all of them '-1'

    // loop over the array and put the element's index in the elementth index in the indx[]
    // basically indx[arr[i]] = i
    // 1 3 4 3 5 6 arr[]
    // -1 0 -1 1 2 3 4 indx[]
    for(int i=0; i<n; i++){
        int element = arr[i];
        if(indx[element] == -1){
            indx[element] = i;
        }else{
            mindx = min(mindx, indx[element]);
        }
    }

    return mindx+1;

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
    cout<< "The First Repeating element is at position: " << firstRE(arr,n) <<endl;
    
    

    return 0;
}