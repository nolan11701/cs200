#include <iostream>
using namespace std;

int main()
{

    int m = 4;
    int n = 5;
    cin >> n >> m;
    int mat[n][m];
    //  {{3,3,3,4},{2,0,0,3},{0,3,1,4},{3,4,3,3},{1,0,3,3}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
