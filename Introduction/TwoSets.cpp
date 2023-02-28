// https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n%4 == 1 || n%4 == 2){
    cout<<"NO";
    return 0;
  }
  vector<int> v1;
  vector<int> v2;
  
  if(n%4 == 0){
    for(int i = 1; i <= n ; i++){
      if(i%4 == 0 || i%4 == 1) v1.push_back(i);
      else v2.push_back(i);
    }
    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(auto x : v1) cout<<x<<" ";
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto x : v2) cout<<x<<" ";
  }
  else{
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    for(int i = 4; i <= n ; i++){
      if(i%4 == 0 || (i)%4 == 3) v1.push_back(i);
      else v2.push_back(i);
    }
    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    for(auto x : v1) cout<<x<<" ";
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto x : v2) cout<<x<<" ";
  }
}