#include<bits/stdc++.h>
using namespace std;
int solved(vector<int> &g, vector<int> &s){
  sort(g.rbegin(),g.rend());
  sort(s.rbegin(),s.rend());
  int i =0;
  int j =0;
int ans=0;

  while(i<g.size() && j<s.size()){
    if(g[i]>s[j])
      i++;
    else{
      ans++;
      i++;j++;
   }
 
  }
 return ans;
}
int main(){
   int m ;
  // greed 
  cin>>m;
  
  int n;// chocklates
  cin>>n;
  
  
  vector<int> g(m);
  vector<int> s(n);
  
  for(int i =0;i<m;i++){
    cin>>g[i];

  }
  for(int j=0;j<n;j++){
    cin>>s[j];

  }
  int ans= solved(g,s);
  cout<<ans<<endl;

  return 0;
}