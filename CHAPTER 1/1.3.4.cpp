/*
 ID: wang yifeng
 PROG:palsquare
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
typedef long long ll;

string str;
int len;

string change(int x, int b) {
    len = 0;
    string str;
    while (x) {
        int t = x % b;
        x /= b;
        if (t > 9)
            str = (char) (t + 55) + str;
        else
            str = (char) (t + 48) + str;
        len++;
    }
    return str;
}

bool check(string str) {
    int l = 0;
    int r = len - 1;
    while (l < r) {
        if (str[l] == str[r]) {
            l++;
            r--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {

    freopen("palsquare.in", "r", stdin);
    freopen("palsquare.out", "w", stdout);

    int b;

    scanf("%d", &b);

    for (int i = 1; i < 300; i++) {
        str = '\0';
        str = change(i * i, b);
        if (check(str)) {
            cout << change(i, b) << ' ' << str << endl;
        }
    }

    return 0;
}