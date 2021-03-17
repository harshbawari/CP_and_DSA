#include <bits/stdc++.h>

#define db1(x) cout << #x << "=" << x << '\n'
#define db2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  vector<int> arr;

  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    arr.push_back(temp);
  }

  vector<int> order;

  sort(arr.begin(), arr.end());

  //cout << "yo" << endl;
  int prev = -1;
  int i = 0;
  while (arr.size() > 0)
  {
    //cout << "i: " << i << " arr[i]: " << arr[i] << endl;
    if (arr[i] != prev)
    {
      cout << arr[i] << " ";
      prev = arr[i];
      //cout << "erase: " << i << " " << arr[i] << endl;
      arr.erase(arr.begin() + i);
      n--;
    } else {
      //cout << "else";
      if(i > n - 2) {
        i = 0;
      } else {
        i++;
      }
    }
    //cout << "i: " << i << endl;
  }

  cout << endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}