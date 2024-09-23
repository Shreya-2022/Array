#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;  // Length mismatch, not anagrams
    }
// program to find valid anagram
vector<int>freq(26,0);
for(int i = 0 ; i < s1.length() ; i++){
freq[s1[i]-'a']++;// for s1 strimg we increment 
}

for(int i = 0 ; i < s1.length() ; i++){
freq[s2[i]-'a']--;// for s2 string we decremrnt 
}

for(int i=0;i<26;i++){
    if(freq[i]!=0){
        return false;
    }
  }

  return true;
}


int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    if(isAnagram(s1,s2)){
        cout<<"String are anagram: " << endl;
    }
    else{
        cout<<"String are  not anagram: "<<endl;
    }
   return 0;

   }
    
