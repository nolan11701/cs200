#include <iostream>
using namespace std;

int nums[1000];

int main(){
    int n;
    cin>>n;
    n-=2;
    nums[0] = 1;

    for (int i=1; i<=n; i++){
        int sum = 0;
        for (int j = 0; j < i; j++){
            sum += nums[j] * nums[i-j-1];
        }
        nums[i]=sum;
    }
    cout << nums[n];
}


