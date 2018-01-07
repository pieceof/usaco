/*
 ID: wang yifeng
 PROG:beads
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) (1e6 + 7);
typedef long long ll;

int n;
string str;

int left(int x) {
    char ch;
    int ans = 1;
    while (x >= 0 && str[x] == 'w') {
        x--;
        ans++;
    }
    if (x == -1) {
        ans--;
        x++;
        return ans;
    } else {
        ch = str[x];
    }
    while (x - 1 >= 0 && (str[x - 1] == ch || str[x - 1] == 'w')) {
        x--;
        ans++;
    }
    return ans;
}

int right(int x) {
    char ch;
    int ans = 1;
    while (x <= n && str[x] == 'w') {
        x++;
        ans++;
    }
    if (x == n) {
        ans--;
        x--;
        return ans;
    } else {
        ch = str[x];
    }
    while (x + 1 < n && (str[x + 1] == ch || str[x + 1] == 'w')) {
        x++;
        ans++;
    }
    return ans;
}

int main() {

    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);

    scanf("%d", &n);
    getchar();
    getline(cin, str);
    str += str;
    n *= 2;

    int ans = 0;
    int max1 = -inf;
    int l = 1, r = 1;
    for (int i = 0; i < n && r != 0; i += r) {
        l = left(i);
        r = right(i + 1);
        ans = l + r;
        max1 = max(ans, max1);


    }
    if (max1 < n / 2) {
        printf("%d\n", max1);
    } else {
        printf("%d\n", n / 2);
    }

    return 0;
}