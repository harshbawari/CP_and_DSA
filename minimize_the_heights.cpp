#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool comparefn(vector<int> a, vector<int> b)
{
  return a[1] < b[1];
}

bool check_visited(vector<vector<int>> visited)
{
  bool all = true;

  for (auto &itr : visited)
  {
    if (itr[1] > 0)
    {
      all = false;
      break;
    }
  }

  return all;
}

int getMinDiff(int arr[], int n, int k)
{
  vector<vector<int>> heights;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] - k >= 0)
    {
      heights.push_back({i, arr[i] - k});
    }
    heights.push_back({i, arr[i] + k});
  }

  int size = heights.size();

  sort(heights.begin(), heights.end(), comparefn);

  vector<vector<int>> visited(n);
  for (int i = 0; i < n; i++)
  {
    visited.push_back({i, 0});
  }

  int minDiff = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    int j = 0;
    while (!check_visited(visited))
    {
      visited[j][1]++;
    }
    int diff = heights[j][1] - heights[i][1];
    if (diff < minDiff)
    {
      minDiff = diff;
    }
  }

  return minDiff;
}

int main()
{
  cout << "here " << endl;
  int k, n, arr[INT_MAX];

  cin >> k >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int minDiff = getMinDiff(arr, n, k);

  cout << minDiff << endl;
}