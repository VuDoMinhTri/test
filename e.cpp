#include <bits/stdc++.h>
using namespace std;

void palincheck(vector<int> arr, int n) {
    for(int j = 0; j < n/2; j++) {
        if(arr[j] != arr[n - j - 1]) {
            cout << "Your numbers suck";
            return;
        }
    }
    cout << "Your number is worthy";
}

int main() {
    string num; cin >> num;
    int n = num.size();
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++) {
        arr[i] == num.at(i) - '0';
    }
    palincheck(arr, n);
}