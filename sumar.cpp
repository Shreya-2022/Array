#include<iostream>
using namespace std;
int main(){
    int array[]={2,4,6,8};
    //sizeof(array) gives total size
    //sizeof(array[0]) give size of first element
    int size= sizeof(array)/sizeof(array[0]);

    int sum =0;
    for(int i=0;i<size;i++){
        sum+=array[i];

    }
    cout<<sum<<endl;

    return 0;
}