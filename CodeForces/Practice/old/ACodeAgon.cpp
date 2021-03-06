#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define li long int

int main()
{
    vector<int> A = {10, 2, 4, 15, 30};
    vector<vector<int>> B = {
        {1, 2, 3},
        {3, 4, 5},
        {4, 5, 4}};
    struct City
    {
        int ConcertCost;
        struct City *next = NULL;
        int nextCost;
        struct City *prev = NULL;
        int prevCost;
    };

    struct City city[A.size()];

    vector<int> costs;

    for (int i = 1; i <= A.size(); i++)
        city[i].ConcertCost = A[i - 1];

    //traverse the 2d array and set relations
    for (int i = 0; i < B.size(); i++)
    {
        int c1 = B[i][0], c2 = B[i][1];

        if (city[c1].next == NULL)
        {
            city[c1].next = &city[c2];
            city[c1].nextCost = B[i][2];
        }
        else
        {
            city[c1].prev = &city[c2];
            city[c1].prevCost = B[i][2];
        }

        if (city[c2].next == NULL)
        {
            city[c2].next = &city[c1];
            city[c2].nextCost = B[i][2];
        }
        else
        {
            city[c2].prev = &city[c1];
            city[c2].prevCost = B[i][2];
        }
    }

    //cout << "here";

    //traverse cities and find minimum cost
    for (int i = 1; i <= A.size(); i++)
    {
        int costCount[3];
        costCount[0] = INT_MAX;
        costCount[1] = INT_MAX;
        costCount[2] = city[i].ConcertCost;

        //Current city = city[i]

        //if next != null, check cost and update cost1;
        if (city[i].next != NULL)
        {
            costCount[0] = (2 * city[i].nextCost) + city[i].next->ConcertCost;
            //cout << i << " costCount[0]: " << costCount[0] << endl;
        }
        //if prev != null, check cost and update cost2;
        if (city[i].prev != NULL)
        {
            costCount[1] = (2 * city[i].prevCost) + city[i].prev->ConcertCost;
            //cout << i << " costCount[1]: " << costCount[1] << endl;
        }

        int mini = costCount[2];
        //cout << "City" << i << ": cost " << city[i].ConcertCost;
        for (int j = 0; j < 3; j++)
        {
            if (costCount[j] < mini)
                mini = costCount[j];
        }

        //cout << "mini: " << mini << endl;

        costs.push_back(mini);
    }

    //cout << "Cost size: " << costs.size() << endl;
    for (int i = 0; i < costs.size(); i++)
        cout << costs[i] << " ";
}
