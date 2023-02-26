// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
  ll t, x, y;
  cin >> t;
  while (t--)
  {
    cin >> x >> y;
    if (x >= y)
    {
      if (x % 2 == 0)
      {
        ll base = x * x;
        cout << base - y + 1 << endl;
      }
      else
      {
        ll base = (x - 1) * (x - 1) + 1;
        cout << base + y - 1 << endl;
      }
    }
    else
    {
      if (y % 2 != 0)
      {
        ll base = y * y;
        cout << base - x + 1 << endl;
      }
      else
      {
        ll base = (y - 1) * (y - 1) + 1;
        cout << base + x - 1 << endl;
      }
    }
  }
  return 0;
}