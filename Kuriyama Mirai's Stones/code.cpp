#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Prefix sum for original array
    vector<long long> prefex(n);
    prefex[0] = vec[0];
    for (int i = 1; i < n; i++) {
        prefex[i] = vec[i] + prefex[i - 1];
    }

    // Prefix sum for sorted array
    sort(vec.begin(), vec.end());
    vector<long long> sortedprefex(n);
    sortedprefex[0] = vec[0];
    for (int i = 1; i < n; i++) {
        sortedprefex[i] = vec[i] + sortedprefex[i - 1];
    }

    int qs, cmd, l, r;
    cin >> qs;
    while (qs--) {
        cin >> cmd >> l >> r;
        if (cmd == 1) {
            long long last = prefex[r - 1];
            long long first = (l > 1 ? prefex[l - 2] : 0);
            cout << last - first << "\n";
        } else {
            long long last = sortedprefex[r - 1];
            long long first = (l > 1 ? sortedprefex[l - 2] : 0);
            cout << last - first << "\n";
        }
    }

    return 0;
}