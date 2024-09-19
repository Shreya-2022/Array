#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            
            cin>>A[r1][c1];
        }
    }
    int r2,c2;
    cin>>r2>>r2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    if(c1!=r2){
        cout<<"Matrix multipliaction is not possible";

    }
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int val=0;
            for(int k=0;k<r1;k++){
                val=val+A[i][k]+B[i][j];

            }
            C[i][j]=val;
        }
    }
}