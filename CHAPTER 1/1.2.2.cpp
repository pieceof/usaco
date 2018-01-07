/*
 ID: wang yifeng
 PROG:gift1
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 7;
typedef long long ll;

struct rec {
    string name;
    int x;
} a[maxn];
int n;

int check(string str) {
    for (int i = 0; i < n; ++i) {
        if (a[i].name == str) {
            return i;
        }
    }
}

int main() {

    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);

    int num, q;
    string name;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i].name;
    }

    for (int i = 0; i < n; i++) {
        cin >> name;
        int id = check(name);
        scanf("%d%d", &num, &q);
        int ave = (int) floor(1.0 * num / q);
        a[id].x -= ave * q;
        for (int j = 0; j < q; ++j) {
            string name1;
            cin >> name1;
            int id1 = check(name1);
            a[id1].x += ave;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i].name << ' ' << a[i].x << endl;
    }

    return 0;
}
