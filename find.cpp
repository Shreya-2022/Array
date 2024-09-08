#include<iostream>
using namespace std;
int main(){
    int array[] = { 5,7,4,0,8,9};
    int key=11;
    int ans=-1;
    for(int i = 0 ; i<5;i++){
        if(array[i]==key){
            ans=1;
        }

    }
    cout<<ans<<endl;
}