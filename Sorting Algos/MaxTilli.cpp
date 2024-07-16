#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,5,2,7};
    int mx = INT8_MIN;
    for(int i = 0; i<5; i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
}