// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, curr, prevMax;
  long ans = 0;
  cin >> n;
  cin >> prevMax;
  while (--n)
  {
    cin >> curr;
    ans += max(prevMax-curr,0);
    prevMax = max(curr,prevMax);

  }
  cout<<ans;
  return 0;
}

//2147483647
//1000000000