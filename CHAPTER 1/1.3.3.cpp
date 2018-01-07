/*
 ID: wang yifeng
 PROG:namenum
 LANG:C++11
*/

#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e5 + 7;
typedef long long ll;

char validname[5000][15];
int validnum;

void getname() {
    validnum = 0;
    FILE *dict = fopen("dict.txt", "r");
    while (!feof(dict)) {
        fscanf(dict, "%s", validname[validnum++]);
    }
}

char strr[12][5] = {"000", "000", "ABC", "DEF", "GHI", "JKL", "MNO",
                    "PRS", "TUV", "WXY"};

int check(char str[]) {
    int res = -1;
    int l = 0, r = validnum - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        int tp = strcmp(validname[mid], str);
        if (tp == 0) {
            res = mid;
            break;
        } else if (tp > 0) r = mid - 1;
        else l = mid + 1;
    }
    if (res == -1) return 0;
    else return 1;
}

char input[15];
int len;
bool flog;

void dfs(int dept, char str[]) {
    //printf("%d\n", dept);
    if (dept == len) {
        str[dept] = '\0';
        //    printf("%s\n", str);
        if (check(str)) {
            printf("%s\n", str);
            flog = true;
        }
        return;
    }
    for (int i = 0; i < 3; i++) {
        str[dept] = strr[input[dept] - '0'][i];
        dfs(dept + 1, str);
    }
}

int main() {
    freopen("namenum.in", "r", stdin);
    freopen("namenum.out", "w", stdout);
    getname();
    while (scanf("%s", input) != EOF) {
        char str[20];
        flog = false;
        len = strlen(input);
        dfs(0, str);
        if (!flog) printf("NONE\n");
    }
    return 0;
}