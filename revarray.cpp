#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &v) {
    int start = 0, end = v.size() - 1;
    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    reverseVector(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}