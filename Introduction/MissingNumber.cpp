// https://cses.fi/problemset/submit/1083/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long n, curr;
  cin >> n;
  long sum = n*(n+1)/2;
  long givenSum = 0;
  while(--n){
    cin>>curr;
    givenSum += curr;
  }
  cout<<sum - givenSum;
  return 0;
}