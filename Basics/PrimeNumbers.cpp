#include<iostream>
using namespace std;
int main(){
    
    //Prime number or not
    int n;
    cin>>n;
    bool isPrime = true;
    
    for(int i=2;i<n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }    
    }
    if(isPrime){
        cout<<"Prime";
    }else{
        cout<<"Not a prime";
    }
    

    return 0;
}