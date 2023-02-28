// https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll nc2(ll n)
{
  return n * (n - 1) / 2;
}

int main()
{
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; i++)
  {
      ll ans = 0;
      ans += nc2(i * i);
      ll blocked_pairs = 0;
      blocked_pairs += 4 * 2;           // 2 spaces took by the corners
      blocked_pairs += 8 * 3;           // 8 box just next to corners
      blocked_pairs += (i - 4) * 4 * 4; // boxes on the edges left out
      blocked_pairs += 4 * 4;           // 4 inner corners after removing 1 layer
      blocked_pairs += (i-4)*4*6; // inner layer left out;
      blocked_pairs += (i-4)*(i-4)*8;//all the inner square left out
      ans -= blocked_pairs/2;
      //after looking at the solution found out that blocked pairs shortcut = 4(x-1)(x-2)
      cout<<ans<<"\n";
  }
  return 0;
}