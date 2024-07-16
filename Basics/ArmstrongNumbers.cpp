#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int temp = n;
    int sum = 0;

    while(n>0){
        int lastDigit = n%10;
        sum += pow(lastDigit,3);
        n = n/10;
    }
    if(temp == sum){
        cout<<temp<<" is an armstrong number";
    }else{
        cout<<"Nah bruh, it aint an armstrong number";
    }
    return 0;
}