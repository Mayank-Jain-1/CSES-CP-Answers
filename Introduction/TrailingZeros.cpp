// https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int divisor = 5;
  int ans = 0;
  while(n/divisor >= 1){
    ans += n/divisor;
    divisor *= 5;
  }
  cout<<ans;
  return 0;
}