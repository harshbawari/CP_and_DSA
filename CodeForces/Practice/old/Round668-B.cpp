#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{

    ll n;
    cin>>n;

    vector<ll> arr;

    for(int i=0; i<n; i++){
        ll temp;
        cin>>temp;
        arr.push_back(temp);
    }

    ll sum = 0;
    bool firstNegFound = false;

    for(vector<ll>::iterator itr = arr.begin(); itr != arr.end(); itr++){
        if(!firstNegFound){
            if(*itr < 0){
                firstNegFound = true;
                if(sum > 0)
                    sum += *itr;
                continue;
            }
            else{
                sum += *itr;
                continue;
            }
        }

        sum += *itr;
        if(sum < 0)
            sum = 0;
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}