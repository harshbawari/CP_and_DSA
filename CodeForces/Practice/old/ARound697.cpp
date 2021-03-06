#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define li long int


void solve()
{
  ll n;
  cin >> n;

  while(n % 2 == 0 && n > 2) {
    n /= 2;
  }

  bool div = false;
  for(ll i = 3; i <= n; i += 2) {
    if(n % i == 0) {
      div = true;
      break;
    }
  }

  if(div) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}


int main()
{
  int t;
  cin >> t;

  while(t--) {
    solve();
  }
}
