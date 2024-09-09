#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int assignCookies(vector<int>& g, vector<int>& s){
     // sort cookies and greed
    sort(s.begin(),s.end());
    sort(g.begin(),g.end());
    // take two pointer
// for children
int i = 0;
// for cookies
int j = 0;
// try to satisfy each child with each cookies
while (i < g.size() && j < s.size()) {
    // if one cookies can satisfy current child
if (s[j] >= g[i]) {
    i++;
  }
  // move to the next cookies
    j++;
  }
  //number of satifed
    cout<<i<<endl;
}
int main() {
    // Test case 1
    vector<int> g1 = {1, 2, 3}; // Greed factors of children
    vector<int> s1 = {1, 1};    // Sizes of cookies
    cout << "Number of content children (Test 1): " << assignCookies(g1, s1) << endl;

    return 0;
}
