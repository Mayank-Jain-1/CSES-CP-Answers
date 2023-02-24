// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int ao, bo;
    cin >> ao >> bo;
    int a = min(ao, bo);
    int b = max(ao, bo);

    if ((a + b) % 3 == 0 && b <= 2*a)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
