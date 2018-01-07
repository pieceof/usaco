/*
 ID: wang yifeng
 PROG:milk
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e6 + 7;
typedef long long ll;

struct rec {
    int x, y;
} a[maxn];

bool cmp(rec x,rec y){
    return x.x < y.x;
}

int main() {


    int n, m;

    freopen("milk.in", "r", stdin);
    freopen("milk.out", "w", stdout);

    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a[i].x, &a[i].y);
    }

    sort(a,a+m,cmp);

    int sum = 0;
    int i = 0;
    int ans = 0;
    while(sum < n){
        if(sum + a[i].y <= n){
            ans += a[i].y * a[i].x;
        }else{
            ans += a[i].x * (n - sum);
        }
        sum += a[i].y;
        i++;
    }

    printf("%d\n",ans);

    return 0;
}