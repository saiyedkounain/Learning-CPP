#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter upper limit";
    cin >> n;
    for(int i=1; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
    
    return 0;
}