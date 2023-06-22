#include <iostream>
using namespace std;
#include <math.h>

bool isPowerOfTwo(int n){
        for(int i=0; i<=30; i++){
            int ans = pow(2,i);
            if(ans == n){
                return true;
            }
        }
        return false;
}

int main(){
    int n;
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<"Number is a power of 2 "<<endl;
    }    
    else{
        cout<<"Number is not a power of 2"<<endl;
    }
}