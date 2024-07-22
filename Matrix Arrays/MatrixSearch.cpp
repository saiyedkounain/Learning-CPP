#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;
    int arr [n][m];
    //getting input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x; cin >> x;
            arr[i][j] = x;
        }
    }
    cout<<"Your Matrix"<<endl;
    //printing the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------"<<endl;

    int key;
    cout<<"Enter key to search: ";
    cin>>key;

    int r,c; // we will set starting point the top right element of the matrix
    r =0;
    c =m-1;
    bool found = false;

    while(r<n && c>=0){
        int current = arr[r][c];
        if(key == current){
            found = true;
            break;
        }else if(key > current){
            r+=1; // going down from the current element
        }else{
            c-=1; // moving left
        }
    }

    if(found){
        cout<<"The element is at "<< r+1 <<","<< c+1 << " position";
    }

    return 0;

    
}