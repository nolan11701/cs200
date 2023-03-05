#include <iostream>
using namespace std;

string f(string s) {
    if (s == ""){
        return "";
    }
    return f(s.substr(1,s.length()-1)) + s[0];
}

int main(){
    string a;
    cin >> a;
    cout << f(a);
}