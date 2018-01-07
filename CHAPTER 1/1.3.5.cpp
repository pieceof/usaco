/*
 ID: wang yifeng
 PROG:dualpal
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;

int n, s;

string change(int s, int b) {
    int l = 0;
    string str;
    while (s) {
        str = (char) (s % b + '0') + str;
        l++;
        s /= b;
    }
    return str;
}

bool check(int s) {
    string str;
    int num = 0;
    for (int i = 2; i <= 10; i++) {
        str = change(s, i);
        int l = 0;
        int r = str.length() - 1;
        bool flag = true;
        while (l <= r) {
            if (str[l] == str[r]) {
                l++;
                r--;
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            num++;
            if (num == 2) {
                return true;
            }
        }
    }
    return false;
}

int main() {

    freopen("dualpal.in", "r", stdin);
    freopen("dualpal.out", "w", stdout);

    scanf("%d%d", &n, &s);
    for (int i = 0; i < n; i++) {
        s++;
        while (!check(s)) {
            s++;
        }
        printf("%d\n", s);

    }

    return 0;
}