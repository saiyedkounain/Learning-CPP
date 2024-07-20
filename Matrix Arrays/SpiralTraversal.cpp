#include <iostream>
using namespace std;
// void traverse(int arr[3][3], int n, int m){
//     int top, down,right,left;
//     top = 0;
//     left = 0;
//     down = n-1;
//     right = m-1;

//     int direction = 0;

//     while(top <= down && left <= right){
//         if(direction == 0){
//             for(int i=top; i<=right; i++){
//                 cout<<arr[top][i];
//                 top+=1;
//             }
//         }
//         else if(direction == 1){
//             for(int i=right; i<=down; i++){
//                 cout<<arr[i][right];
//                 right-=1;
//             }
//         }
//         else if(direction == 2){
//             for(int i=right; i<=left; i++){
//                 cout<<arr[down][i];
//                 down-=1;
//             }
//         }
//         else if(direction == 3){
//             for(int i=down; i<=top; i++){
//                 cout<<arr[i][left];
//                 left+=1;
//             }
//         }

//         direction = (direction + 1) % 4;
        

//     }

// }
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
    
    int top, down,right,left;
    top = 0;
    left = 0;
    down = n-1;
    right = m-1;

    int direction = 0;

    while(top <= down && left <= right){
        if(direction == 0){
            for(int i=left; i<=right; i++){
                cout<<arr[top][i];
            }
                top+=1;
        }
        else if(direction == 1){
            for(int i=right; i<=down; i++){
                cout<<arr[i][right];
            }
                right-=1;
        }
        else if(direction == 2){
            for(int i=right; i>=left; i--){
                cout<<arr[down][i];
            }
                down-=1;
        }
        else if(direction == 3){
            for(int i=down; i>=top; i--){
                cout<<arr[i][left];
            }
                left+=1;
        }

        direction = (direction + 1) % 4;
        

    }
    return 0;
}