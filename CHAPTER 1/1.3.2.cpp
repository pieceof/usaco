/*
 ID: wang yifeng
 PROG:transform
 LANG:C++11
*/
#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = (int) 1e5 + 7;
typedef long long ll;

char map1[100][100];
char map2[100][100];
int n;

void change() {

    char map3[100][100];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            map3[j][n - i - 1] = map1[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            map1[i][j] = map3[i][j];
}

void change2() {

    char map3[100][100];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            map3[i][n - j - 1] = map1[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            map1[i][j] = map3[i][j];
}

bool check() {

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (map1[i][j] != map2[i][j])
                return false;
    return true;
}

int main() {

    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);

    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%c", &map1[i][j]);
        }
        getchar();
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%c", &map2[i][j]);
        }
        getchar();
    }



    for (int i = 1; i <= 3; ++i) {
        change();
        if (check()) {
            printf("%d\n", i);
            return 0;
        }
    }


    change();
    change2();
    if (check()) {
        printf("4\n");
        return 0;
    }

    for (int i = 1; i <= 3; ++i) {
        change();
        if (check()) {
            printf("%d\n", 5);
            return 0;
        }
    }
    change();
    change2();
    if (check()) {
        printf("6\n");
        return 0;
    }

    printf("7\n");
    return 0;
}