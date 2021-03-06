#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, count = 0;

    cin >> n >> k;

    vector<int> arr;

   for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
   }

    for(auto i: arr) {
        if(i >= arr[k-1] && i > 0)
            count++;
    }

    cout << count;
}