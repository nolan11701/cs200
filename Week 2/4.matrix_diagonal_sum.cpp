#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int mat[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    int count = 0;
    for (int i=0;i<n;i++) 
    {

        for (int j=0;j<n;j++){
            if (i==j || i+j == n-1)
            count += mat[j] [i]; 
        }
    }
    cout << count;
}