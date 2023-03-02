// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  long long answer  = 1;
  while(n--){
    answer *= 2;
    answer %= 1000000007;
  }
  cout<<answer;
}