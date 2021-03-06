#include <bits/stdc++.h>

using namespace std;

int arr[100][100];

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int findNextPrime(int sum)
{
    int n = sum + 1;
    while (!isPrime(n))
    {
        n++;
    }

    return n;
}

void solve()
{
    int n;
    cin >> n;

    //create array of size n and assign all elements as 1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 1;

    bool final = false;
    //while final = false
    while (!final)
    {
        final = true;

        //loop to check sum of rows
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += arr[i][j];
            }

            if (!isPrime(sum))
                final = false;
            while (!isPrime(sum))
            {
                //add sum-(nextprime) to last element and update sum
                int nextPrime = findNextPrime(sum);
                arr[i][n - 1] += sum - nextPrime;
                sum += sum - nextPrime;
            }
        }

        //loop to check sum of columns
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i][j];
            }

            if (!isPrime(sum))
                final = false;
            while (!isPrime(sum))
            {
                int nextPrime = findNextPrime(sum);
                arr[n - 1][j] += sum - nextPrime;
                sum += sum - nextPrime;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}