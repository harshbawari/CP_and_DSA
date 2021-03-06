#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define li long int

class Street
{
public:
  int start, end, weighted;
  string name;

public:
} streets[10000];

class Car
{

public:
} cars[1000];

class Intersection
{

public:
} intersections[10000];

void input()
{
  int no_of_intersections, no_of_streets, no_of_cars, time;

  cin >> time >> no_of_intersections >> no_of_streets >> no_of_cars;

  //Input street info
  for (int i = 0; i < no_of_streets; i++)
  {
    cin >> streets[i].start >> streets[i].end >> streets[i].name;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  input();

  return 0;
}