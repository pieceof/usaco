/*
 ID: wangyif8
 PROG:ride
 LANG:C++11
 */
#include<bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;
const int mod = 47;
typedef long long ll;

int main() {

    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    int len1 = str1.length();
    int len2 = str2.length();

    int ans1 = 1;
    for (int i = 0; i < len1; i++) {
        ans1 = (str1[i] - 'A' + 1) * ans1 % mod;
    }
    int ans2 = 1;
    for (int i = 0; i < len2; i++) {
        ans2 = (str2[i] - 'A' + 1) * ans2 % mod;
    }

    //printf("%d\n%d\n",ans1,ans2);

    ans1 == ans2 ? printf("GO\n") : printf("STAY\n");

    return 0;
}

