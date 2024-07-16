#include <iostream>
using namespace std;
int main(){
    //Linear search, lets see if i remenber this lol.
    cout<<"Enter length of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];//intialising the array
    //getting inout form the user
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    //Displaying the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }

    //Asking for key
    cout<<"Enter key to find: "<<endl;
    int k;
    cin>>k;

    //Searching linear
    bool flag =  false;
    int pos;
    for(int i=0; i<n; i++){
        if(k == arr[i]){
            flag = true;
            pos = i+1;
            break;
        }
    }
    if(flag){
        cout<<"Key found at position "<<pos<<endl;
    }else{
        cout<<"Key not found"<<endl;
    }


    return 0;
}