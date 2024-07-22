// given 2 2d arrays, m1 and m2 of orders n1Xn2 and n2Xn3 , return the answer matrix which is
// the product of m1 and m2
#include <iostream>
using namespace std;

int main(){
    //input the orders of the matrix
    int n1,n2,n3;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    cout<<"Enter n3: ";
    cin>>n3;

    //declaring the matrices
    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];

    // first matrix's input
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>m1[i][j];
        }
    }
    // second matrix's input
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>m2[i][j];
        }
    }
    cout<<"Your Matrices"<<endl;
    //printing m1 and m2
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------"<<endl;
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------"<<endl;


    // answer matrix with all 0
    for(int i=0;i<n1;i++){
        for(int j=0; j<n3; j++){
            ans[i][j] = 0;
        }
    }

    // multipying both with 3 order nested loop

    for(int i=0; i<n1; i++){ //first matrix's row
        for(int j=0; j<n3; j++){ //second matrix's column
            for(int k=0; k<n2; k++){ // multipyling 
                ans[i][j] += m1[i][k]*m2[k][j];
            }

        }
    }

    cout<<"Answer Matrix:"<<endl;
    // printing the output
    for(int i=0;i<n1;i++){
        for(int j=0; j<n3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}