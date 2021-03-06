#include <bits/stdc++.h>

using namespace std;

#define li long int
#define ll long long

void solve()
{
    int nd, n;

    cin >> nd >> n;

    string s = to_string(n);
    int turn = 1;

    while (s.size() > 1)
    {
        if (turn == 1)
        {
            for (int i = 0; i < nd; i += 2)
            {
                if (i + 2 >= nd)
                {
                    s.erase(s.begin() + i);
                    turn = 2;
                }
                else if (s[i] % 2 != 0)
                {
                    continue;
                }
                else
                {
                    s.erase(s.begin() + i);
                    turn = 2;
                }
            }
        }
        else
        {
            for (int i = 1; i < nd; i += 2)
            {
                if (i + 2 >= nd)
                {
                    s.erase(s.begin() + i);
                    turn = 1;
                }
                else if (s[i] % 2 == 0)
                {
                    continue;
                }
                else
                {
                    s.erase(s.begin() + i);
                    turn = 1;
                }
            }
        }
    }

    if (s[0] % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
        cout << 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}