#include <bits/stdc++.h>
using namespace std;
void mapExample();

int main()
{
  mapExample();
  return 0;
}

void mapExample()
{
  map<int,int> mpp;
  // map <int , pair<int,int>> mpp;
  // map <pair<int,int> mpp;
  mpp[1] = 2;
  // mpp.emplace({3,4});
  mpp.insert({2,4});
  mpp.find(2);
  for(auto it : mpp){
    cout<<it.first << it.second<<endl;
  }
}