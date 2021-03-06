#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    string s, t;
    int moves = 0;

    cin >> s >> t;

    int maxSize = max(s.length(), t.length()), sLen = s.length(), tLen  = t.length(), i = 0;

    for(i; s[sLen - i - 1] == t[tLen - i - 1] &&  i != min(sLen, tLen); i++);


    moves = (sLen - i) + (tLen - i);
    
    cout << moves;
}