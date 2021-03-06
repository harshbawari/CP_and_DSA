#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a[50];;

    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = 0;
    map<int, int> sums;

    for(int i = 0; i < n; i++){

        cout << endl << "i: " << i << endl;
        for(map<int, int>::iterator itn = sums.begin(); itn != sums.end(); itn++)
            itn->second = 0;

        for(int j = i + 1, temp = i, goBack = i; j < n; j++, temp--, goBack--){
            if(temp < i || goBack < 0){
                temp = j;
                j = temp + 1;
                if(j >= n)
                    continue;
            }

            cout << "sums[a[" << temp << "](" << a[temp] << ") + a[" << j << "](" << a[j] << ") = " << sums[a[temp] + a[j]]+1 << " ";
            sums[a[temp] + a[j]]++;
        }

        for(map<int, int>::iterator it = sums.begin(); it != sums.end(); it++){
            //cout << it->first << " " << it->second << endl;
            if(it->second > max)
                max = it->second;
        }
    }
    
    cout << "Answer: " << max << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}