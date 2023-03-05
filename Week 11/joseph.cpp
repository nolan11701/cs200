#include <iostream>
using namespace std;

int josephus(int n, int k) {
  if (n == 1) {
    return 0;
  } else {
    return (josephus(n - 1, k) + k) % n;
  }
}

int main() { cout << josephus(20, 3) + 1; }