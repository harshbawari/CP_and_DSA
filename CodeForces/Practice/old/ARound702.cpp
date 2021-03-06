#include <bits/stdc++.h>

using namespace std;

#define li long int
#define ll long long

void solve()
{
  int len, a[50];

  cin >> len;

  for (int i = 0; i < len; i++)
  {
    cin >> a[i];
  }

  int count = 0;
  for (int i = 0; i < len - 1; i++)
  {
    if (a[i] < a[i + 1])
    {
      int temp = a[i];
      while (temp * 2 < a[i + 1])
      {
        temp *= 2;
        count++;
      }
    }
    else
    {
      int temp = a[i + 1];
      while (temp * 2 < a[i])
      {
        temp *= 2;
        count++;
      }
    }
  }

  cout << count << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << "a";
  int t;

  cin >> t;

  while (t--)
  {
    solve();
  }
}