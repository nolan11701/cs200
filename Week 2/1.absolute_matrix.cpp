#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat[n][m];
   
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }

   
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++){
            cout << abs(mat[i][j]) << " ";
        }
        cout << "\n";
    }
    

}