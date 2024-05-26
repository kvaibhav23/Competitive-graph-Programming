#include <bits/stdc++.h>
using namespace std;
int smallmax(int n, int k) {
    int sum =((n +k- 1) / k) * k; 
    if (sum %n != 0)
        return (sum / n) + 1; 
    else
        return sum/ n; 
}
int main() {
    int t;
    cin>> t;

    while (t--) {
        int n, k;
        cin >>n>> k;
        cout <<smallmax(n, k) << endl;
    }

    return 0;
}