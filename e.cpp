#include <bits/stdc++.h>
using namespace std;

void palincheck(vector<int> arr, int n) {
    for(int j = 0; j < n; j++) {
        if(arr[j] != arr[n - j - 1]) {
            cout << "Your numbers suck";
            return;
        }
    }
    cout << "Your number is worthy";
}

void knockoffPalincheck(string num) {
    string reverseNum = num; reverse(reverseNum.begin(), reverseNum.end());
    cout << reverseNum << endl;
    if(num == reverseNum) {
        cout << "Your number is worthy";
    }
    else {
        cout << "Your numbers suck";
    }
}

int main() {
    int notstr; cin >> notstr;
    string num = to_string(notstr);
    int n = num.size();
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++) {
        arr[i] == num.at(i) - '0';
    }

    knockoffPalincheck(num);
}