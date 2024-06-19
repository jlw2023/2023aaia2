#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a(10);

    // Input 10 integers
    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // Sort in descending order
    sort(a.begin(), a.end(), greater<int>());

    // Output sorted array
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
}
