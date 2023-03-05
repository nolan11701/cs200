#include <iostream>
using namespace std;

long long c[100] = {};

long long catalan(int n){
    if (c[n] > 0) {
        return c[n];
    }
    c[0] = 1;
    c[1] = 1;
 
    if (n>1) {
        for (int i = 0;i<=n; i++){       
            if (c[i] ==0){
                long s = 0;
                for (int j =0;j<i;j++) {
                    s+= c[j]*c[i-j];
                }
                c[i]=s;
            }     
        }
    }
    return c[n] ;
}

int main(){
    int n;
    cin>>n; 
    cout << catalan(n+1);
}