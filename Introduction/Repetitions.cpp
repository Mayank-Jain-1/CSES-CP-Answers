// https://cses.fi/problemset/task/1069/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int series = 0;
  int best = 0;
  char prev = '-';
  for (unsigned int i = 0; i < s.size(); i++)
  {
    if (prev == s[i])
    {
      series++;
    }
    else
    {
      series = 1;
      prev = s[i];
    }
    best = max(series, best);
  }
  cout << best;
  return 0;
}