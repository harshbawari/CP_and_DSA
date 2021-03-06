#include <bits/stdc++.h>

using namespace std;

#define li long int
#define ll long long
#define ull unsigned long long

void solve()
{
    ull n, count = 0;
    cin >> n;

    //if n is even, divide by 2 until zero
    if (n == 1)
        count = 1;
    else if (n == 2)
        count = 1;
    else if (n == 3)
        count = 2;
    else if (n == 4)
        count = 3;
    else if (n % 2 == 0)
    {
        while (n > 0)
        {
            count += n / 2;
            n /= 2;
        }
    }
    else
    {
        count = n / 2;
    }

    cout << count << endl;

    //if n is odd,, divide by 2
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unsigned int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}