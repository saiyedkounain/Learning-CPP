#include <iostream>
using namespace std;
int main(){
    //Rectangle
    
    for (int i = 0; i < 5; i++){
        for(int j =0; j<4; j++){
            cout<<"*";
        }
        cout<<" "<<endl;
    }

    //Hollow Rectangle
    cout<<"Hollow Rectangle"<<endl;
    for (int i = 0; i < 5; i++){
        for(int j =0; j<4; j++){
            if(i==0 || i==4 || j==0 || j==3){
            cout<<"*";
            }else{
                cout<<" ";
            }
        }
        
        cout<<" "<<endl;
    }

    cout<<"Inverted Half Pyramid"<<endl;
    int n =5;
    for(int i =n; i>=1; i--){
        for(int j = n; j>i; j--){
            cout<<"*";
        }
        cout<<" "<<endl;
    }

    return 0;
}