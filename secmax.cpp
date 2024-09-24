#include <iostream>
#include <vector>
using namespace std;

int seclargest(vector<int> &arr) {
    int max = INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] < max) {
            second_max = arr[i];
        }
    }
    return second_max;

}

int main() {
    //Enter the number of element
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = seclargest(arr);
    if(result==INT_MIN){
    cout<<"No secondsmallestele<<endl";
  }
    else{
    cout<<"secsmallestele"<<endl;
}


    return 0;
}
