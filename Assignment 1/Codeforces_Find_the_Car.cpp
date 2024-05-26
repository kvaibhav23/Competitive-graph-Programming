#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
 while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(k), b(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < k; ++i) {
            cin >> b[i];
        }
        vector<int> dist(k + 1, 0);
        for (int i = 1; i <= k; ++i) {
            dist[i] = dist[i - 1] + (b[i - 1] - b[i - 2]);
        }
        while (q--) {
            int d;
            cin >> d;
            int segment = 0;
            for (int i = 1; i <= k; ++i) {
                if (a[i - 1] <= d) {
                    segment = i;
                }
            }
            int time_taken;
            if (segment == 0) {
                time_taken = d;
            } else {
                time_taken = b[segment - 1] + (d - a[segment - 1]);
            }
            cout << time_taken << " ";
        }
        cout << endl;
    }
    return 0;
}