#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n]; 
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int b[m];
    for (int i=0;i<m;i++) {
        cin >> b[i];    
    }
    int ma = 0;
    int mb = 0;
    for (int i: a){
        ma = max(i, ma);
    }
    for (int i: b){
        mb =  max(i, mb);
    }
    cout << ma+mb;
} 