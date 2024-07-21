#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter rows: "; cin>>n;
    cout<<"Enter columns: "; cin>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your Matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Spiral Traverse: "<<endl;
    // the real stuff
    int top,down,left, right,dir;
    top =0;
    left =0;
    down = n-1;
    right = m-1;
    dir =0;

    while(top <= down && left <= right){
        if(dir == 0){
            for(int i=left; i<=right; i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
        }
        else if(dir == 1){
            for(int i=top; i<=down; i++){
                cout<<arr[i][right]<<" ";
            }
            right--;
        }
        else if(dir == 2){
            for(int i=right; i>=left; i--){
                cout<<arr[down][i]<<" ";
            }
            down--;
        }
        else if(dir == 3){
            for(int i=down; i>=top; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }

        dir = (dir +1) % 4;

    }



    return 0;
}