/*
 ID: wang yifeng
 PROG:barn1
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e4 + 7;
typedef long long ll;

struct rec {
    int x, id;
} b[maxn];

bool cmp(rec x, rec y) {
    return x.x > y.x;
}

int a[maxn], c[maxn];

int main() {

    freopen("barn1.in", "r", stdin);
    freopen("barn1.out", "w", stdout);
    int m, s, n;
    scanf("%d%d%d", &m, &s, &n);
    m--;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a+1,a+1+n);
    for (int i = 1; i <= n ; ++i) {
        b[i].x = a[i] - a[i - 1];
        b[i].id = i;
    }

    sort(b + 2, b + 1 + n, cmp);

    if(m >= n){
        printf("%d\n",n);
        return 0;
    }

    c[0] = 1;
    c[m + 1] = n + 1;
    for (int i = 2; i < m + 2; ++i) {
        c[i - 1] = b[i].id;
    }

    sort(c + 1, c + m + 1);

    int ans = 0;
    for (int i = 1; i <= m + 1; ++i) {
        ans += a[c[i] - 1] - a[c[i - 1]] + 1;
    }

    printf("%d\n", ans);

    return 0;
}