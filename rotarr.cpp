#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
   
   vector<vector<int>>arr(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>transp(n,vector<int>(m));
        //vector<vector<int>> transp(n, vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transp[i][j]=arr[j][i];
        }
    }
    //int reverse = ar[i][j];
    // reverse(transpose.begin(),transpose.end()){
        for(int i=0;i<n;i++){
            reverse(transp[i].begin(),transp[i].end());
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m ;j++){
                cout<<transp[i][j]<<" ";
                

            }
            cout<<endl;
        }

    }
