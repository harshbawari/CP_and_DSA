#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mp make_pair

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> times;
    
    map<ll, ll, greater<ll>> order;
    
    for(ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        times.push_back(temp);
        
        
        if(i > 0) {
            ll diff = times[i] - times[i-1];
            if(order.find(diff) == order.end()) {
                order.insert(mp(diff, 1));
            } else {
                order.find(diff)->second++;
            }
        }
    }
    
    while(k) {
        ll sub = order.begin()->first / 2;
        ll sub2 = order.begin()->first - sub;
        
        if(order.find(sub) == order.end()) {
            order.insert(mp(sub, 1));
        } else {
            order.find(sub)->second++;
        }
        if(order.find(sub2) == order.end()) {
            order.insert(mp(sub2, 1));
        } else {
            order.find(sub2)->second++;
        }
        
        if(order.begin()->second > 1) {
            order.begin()->second--;
        } else {
            order.erase(order.begin());
        }
        k--;
    }
    
    cout << order.begin()->first <<endl;
    
}

int main() 
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cout <<"Case #" << i+1 << ": ";
        solve();
    }
}
