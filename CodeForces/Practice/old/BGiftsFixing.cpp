#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        vector<ll> c, o;
        
        int n, m=0;
        cin >> n;

        //Input
        for(int i = 0; i < 2*n; i++){
            ll temp;
            cin >> temp;
            if(i < n)
                c.push_back(temp);
            else
                o.push_back(temp);
        }

        ll cMin = *min_element(c.begin(), c.end()), oMin = *min_element(o.begin(), o.end()), moves = 0;

        for(int i = 0; i < n; i++){
            if(c[i] > cMin && o[i] > oMin){
                c[i]-cMin > o[i]-oMin ? moves += (o[i]-oMin)+((c[i]-cMin)-(o[i]-oMin)) : moves += (c[i]-cMin) + ((o[i]-oMin)-(c[i]-cMin));
            }
            else if(c[i] > cMin)
                moves += c[i] - cMin;
            else if(o[i] > oMin)
                moves += o[i] -oMin;
        }

        cout << moves << endl;
    }
}