/*
 ID: wang yifeng
 PROG:milk2
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e5 + 7;
typedef long long ll;

struct rec {
    int l, r;
} a[maxn];

bool cmp(rec x, rec y) {
    return x.l < y.l;
}

int main() {

    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);

    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a[i].l, &a[i].r);
    }

    sort(a, a + n, cmp);

    int l = a[0].l;
    int r = a[0].r;
    int max1 = 0;
    int max2 = r - l;

    for (int i = 1; i < n; ++i) {
        if (a[i].l > r) {
            max1 = max(max1, a[i].l - r);
            l = a[i].l;
            r = a[i].r;
        } else if (r < a[i].r) {
            r = a[i].r;
            max2 = max(max2, r - l);
        }

    }

    printf("%d %d\n", max2, max1);

    return 0;
}