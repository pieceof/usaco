#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get1(char a, int len) {
    char (*p)[10];
    p = a;
    for (int i = 0; i < len; i++) {
        scanf("%s", &(*p)[len]);
    }
    return;
}

void str2(char a[], int len) {
    len = strlen(a);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (*(a + j) > *(a + j + 1)) {
                char t = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = t;
            }
        }
    }
    return;
}

void put3(char a[], int len) {
    char *p;
    p = a;
    len = strlen(a);
    for (int i = 0; i < len; i++) {
        printf("%s ", *(p++));
        printf("\n");
    }
    for (int i = (len - 1); i >= 0; i++) {
        printf("%s ", *(--p));
        printf("\n");
    }
    return;
}

int main() {
    char a[10][10];
    get1(a, 10);
    str2(a, 10);
    put3(a, 10);
    return 0;
}