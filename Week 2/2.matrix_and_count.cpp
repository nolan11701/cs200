#include <iostream>

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

   
    for (int i=0;i<m;i++) {
        int count = 0;
        for (int j=0;j<n;j++){
            count += mat[j][i]; 
        }
        cout << count;
        cout << "\n";
    }
    

}