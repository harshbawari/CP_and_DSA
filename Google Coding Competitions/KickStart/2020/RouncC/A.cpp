#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr;
    
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    bool goingContig = false;
    int contigCount = 0;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1] - 1) {
          if(!goingContig) {
            if(arr[i-1] == k) {
              goingContig = true;
            }
          }
        } else {
            goingContig = false;
        }
        if(arr[i] == 1 && goingContig) {
            contigCount++;
            goingContig = false;
        }
    }
    
    cout << contigCount << endl;
}

int main()
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cout << "Case #" << i+1 << ": ";
        solve();
    }
}