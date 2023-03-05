#include <iostream>
using namespace std;

string f(string s) {
    if (s == "") {
        return "";
    } else {
        if (s[0] == 'x') {
            return f(s.substr(1, s.length() - 1));
        } else {
            return s[0] + f(s.substr(1, s.length() - 1));
        }
    }
}

int main() {
    string a;
    cin >> a;
    cout << f(a);
}