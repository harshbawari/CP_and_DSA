#include <bits/stdc++.h>

using namespace std;

int h[100000];

int solve()
{
    int n, b;

    cin >> n >> b;

    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    sort(h, h+n);

    int count = 0;

    for(int i = 0; i < n && b >= 0; i++){
        b -= h[i];

        if(b >= 0)
            count++;
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, i=0;
    cin >> t;

    while(t--){

        cout << "Case #" << i+1 << ": " << solve() << endl;
        
        i++;
    }

}