#include <bits/stdc++.h>

using namespace std;

int s[50][30];

int calc(int n)
{
    if(n > 0)
        return calc(--n);
    

}

int solve()
{
    int n, k, p;
    cin >> n >> k >> p;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < k; j++)
            cin >> s[i][j];


    for(int i = 0; i < k; i++){
        
    }
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
        cout << "Case #" << i+1 << ": " << solve() << endl;
}