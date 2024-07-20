#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;
    int matrix [n][m];
    //getting input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x; cin >> x;
            matrix[i][j] = x;
        }
    }

    //printing the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
