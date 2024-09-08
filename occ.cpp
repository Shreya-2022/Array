#include<iostream>
#include<vector>
using namesapce std;
int main(){
    vector<int> v(6);
    for(int i=0;i,6;i++){
        cin>>v[i];

    }
    cout<<"enter x:";
    int x;
    cin>>;

    int occurence =-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;break;

        }
    }
    cout<<occurence<<endl;

}