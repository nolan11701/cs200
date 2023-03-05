#include <iostream>
using namespace std;

string T(string code){
  // to figure out if the entire string is ones or zeros, we need to keep these booleans around
  bool allOne = true;
  bool allZero = true;

  for (int i = 0 ; i < code.size(); i ++){
    if (code.at(i) == '0'){
      allOne = false;
    } else if (code.at(i) == '1'){
      allZero = false;
    } else if (!allZero && !allOne){
      break;
    }
  }
  if (allZero){
    return "A";
  } else if (allOne){
    return "B";
  } else {
    int half_length = code.size() /2;
    string s1 = code.substr(0, half_length);
    string s2 = code.substr(half_length, code.size());
    return "C" + T(s1) + T(s2);
  }
}

int main(){
  string s;
  cin >> s;
  cout << T(s);  
}