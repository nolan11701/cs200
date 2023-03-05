#include <iostream>
using namespace std;

int nums[1000];

int main(){
    int n;
    cin>>n;
    nums[0] = 1;
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 4;

    for (int i=4; i<=n; i++){
        int sum = 0;
        
        for (int j = 0; j < i-1; j++){
            sum += nums[j] * nums[i-j-2] % 12345;
        }
        nums[i]= (sum + nums[i-1]) %12345;
    }
    cout << nums[n] % 12345;
}


