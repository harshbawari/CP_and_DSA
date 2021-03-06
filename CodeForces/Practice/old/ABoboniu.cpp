#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){

        ll color[4], total = 0;

        int oddCount = 0;
        bool allEven = true;

        for(int i = 0; i < 4; i++){
            cin >> color[i];

            total += color[i];

            if(color[i] % 2 != 0){
                oddCount++;
            }
        }

        
        if(color[3] % 2 == 0 && total % 2 == 0){
            cout << "Yes" << endl;
        }
        else if((oddCount == 2 || oddCount == 3) && total % 2 == 0){
            cout << "Yes" << endl;
        }
        else if(total % 2 != 0 && color[3] % 2 != 0 && oddCount % 2 == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}