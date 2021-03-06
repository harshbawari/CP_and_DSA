#include <bits/stdc++.h>

#define ll long long

using namespace std;

map<ll, ll, greater<ll>> planks, temp;

bool makerectangle()
{
    bool oneSideDone = false;

    for(map<ll, ll>::iterator it = temp.begin(); it != temp.end(); it++){
        if(it->second >= 2){
            
            if(oneSideDone){
                it->second = it->second - 2;
                return true;
            }

            it->second = it->second - 2;
            oneSideDone = true;
            it--;

            /*for(map<ll, ll>::iterator itNew = temp.begin(); itNew != temp.end(); itNew++){
                if(itNew->second >= 2){
                    itNew->second = itNew->second - 2;
                    return true;
                }
            }*/
        }
    }

    return false;
}

bool makesquare()
{

    for(map<ll, ll>::iterator it = temp.begin(); it != temp.end(); it++){
        if(it->second >= 4){
            it->second = it->second - 4;
            return true;
        }
    }

    return false;
}

void solve()
{
    char op;
    ll ele;
    cin >> op >> ele;

    op == '+' ? planks[ele]++ : planks[ele]-- ;

    temp = planks;
    
    if(makesquare() && makerectangle())
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    //for(auto i: planks)
        //cout << i.first << " " << i.second << endl;
}

int main()
{
    ll n, q;
    
    cin >> n;

    for(ll i = 1; i <= 100000; i++){
        planks.insert({i, 0});
    }
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        planks[temp]++;
    }

    cin >> q;
    
    while(q--){
        solve();
    }
}