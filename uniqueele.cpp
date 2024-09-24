// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     sort(arr.begin(),arr.end());
//     int j=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]!=arr[i+1]){
//             arr[j]=arr[i];
//             j++;


//         }
//         else{
//             arr[j]=arr[n-1];
//             j++;
//         }
//     }
//        for (int i = 0; i < j; i++) {
//         cout << arr[i] << " "; 
//     }
//     cout << endl;

//     return 0;
// }










#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i];  
            j++;
        }
    }


    arr[j] = arr[n - 1];
    j++;

    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
