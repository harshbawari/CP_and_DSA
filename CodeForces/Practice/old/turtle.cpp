#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, mat[100][100];
    cin >> m >> n;

    //Input Matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    //Traverse all elements of matrix
    //Check for elements present at i-1, j-1, i+1, j+1
    //increment count if another 1 found found and continue

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                if (i - 1 >= 0 && mat[i - 1][j] == 1)
                {
                    //cout << "1:" << i - 1 << mat[i - 1][j] << endl;
                    count++;
                }
                else if (j - 1 >= 0 && mat[i][j - 1] == 1)
                {
                    //cout << "2:" << j - 1 << mat[i - 1][j] << endl;
                    count++;
                }
                else if (i + 1 < m && mat[i + 1][j] == 1)
                {
                    //cout << "3:" << i + 1 << mat[i - 1][j] << endl;
                    count++;
                }
                else if (j + 1 < n && mat[i][j + 1] == 1)
                {
                    //cout << "4:" << j + 1 << mat[i - 1][j] << endl;
                    count++;
                }
            }
        }
    }

    cout << count;
}