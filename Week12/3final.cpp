#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    int s = -1;
    
    for (int i; i<=n.length(); i++){
        if (n[i] == 'x'){
            s = i;
            
        }
    }
    if (s == -1){
        cout << n;
    } else {
        cout << n.substr(0, s) << n.substr(s+1, n.length()-1);
    }
}
