#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> days;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    days.push_back(temp);
  }

  int count = 0;
  int max = -1;
  for(int i = 0; i < n; i++) {
    if(days[i] > max && (days[i] > days[i+1] || i == n-1)) {
      count++;
      
    }
    if(days[i] > max) {
      max = days[i];
    }
  }

  cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    
    for(int i = 0; i < t; i++) {
      cout << "Case #" << i + 1 << ": ";
      solve();
    }
    
    return 0;
}