#include <iostream>
using namespace std;

    int getFactorial(int f){
        int fact = 1;
        for(int i =1; i<f;i++){
            fact += fact*i;
        }
        return fact;
    }
int main(){
    //Factorial of a number
    int n;
    cin>>n;
    cout<<getFactorial(n)<<endl;

    return 0;
}