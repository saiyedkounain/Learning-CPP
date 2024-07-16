#include <iostream>
using namespace std;

int main(){
    while(true){
        
    cout<<"Select anything: ";
    int n;
    cin>>n;
    switch(n){
        case 1:
            cout<<"Salaam"<<endl;
            break;
        case 2:
            cout<<"Shubh Vridya"<<endl;
            break;
        case 3:
            cout<<"Peace"<<endl;
            break;
        default:
            cout<<"Hey"<<endl;
            break;
        
    }
    }
    return 0;
}