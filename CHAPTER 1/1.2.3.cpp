/*
 ID: wang yifeng
 PROG:friday
 LANG:C++11
*/

#include <bits/stdc++.h>

using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 1e6 + 7;

typedef long long ll;

int n;
int bin[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool check(int x){
    if(x % 4 == 0){
        if(x % 100 != 0){
            return true;
        }else{
            if(x % 400 == 0){
                return true;
            }
        }
    }
    return false;
}

int main() {

    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);

    scanf("%d",&n);

    int num = 0;
    int a[10];
    memset(a,0,sizeof(a));
    a[0] = 1;
    for(int i = 0;i < n;i++){
        bool flag = false;
        if(check(1900+i)){
            bin[2]++;
            flag = true;
        }

        for (int j = 1; j <= 12 ; ++j) {
            num += bin[j];
            num %= 7;
            a[num]++;
        }

        if(flag){
            bin[2]--;
        }
    }
    a[num]--;
    for (int i = 0; i < 7; ++i) {
        printf("%d",a[i]);
        i == 6? cout << endl:cout << ' ';
    }

    return 0;
}
