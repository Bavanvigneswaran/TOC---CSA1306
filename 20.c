#include <stdio.h>
#include <string.h>
int main() {
    char t[100];
    char *p;
    int m, n, i;
    scanf("%s", t);
    p = strchr(t, '-');
    if (!p) {
        printf("Invalid\n");
        return 0;
    }
    m = p - t;
    n = strlen(p + 1);
    if (m < n) {
        printf("Not possible\n");
        return 0;
    }
    for (i = 0; i < m - n; i++) putchar('a');
    putchar('\n');
    return 0;
}