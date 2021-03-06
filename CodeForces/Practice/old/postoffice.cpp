#include <bits/stdc++.h>

using namespace std;

void swapVec(vector<int> &boxes, vector<int>::iterator &first, vector<int>::iterator &second)
{
    vector<int>::iterator temp = first;
    first = second;
    second = temp;
}

int main()
{
    int n, p, cost = 0;
    vector<int> boxes(n);

    cin >> n >> p;
    p--;

    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];
    }

    vector<int>::iterator max = max_element(boxes.begin(), boxes.end()), min = min_element(boxes.begin(), boxes.end());

    if (max - boxes.begin() != p)
    {
        //if boxes[p] is smallest, swap
        if (boxes[p] == *min)
        {
            swapVec(boxes, boxes.begin() + p, min);
        }
        else
        {
            //else find smallest

            //swap smallest with boxes[p]
            swapVec(boxes, min, boxes.begin() + p);
            //swap boxes[p] with max_element
            swapVec(boxes, boxes.begin() + p, max);
        }
    }
}