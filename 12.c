#include <stdio.h>
#include <string.h>
int main() {
    char s[100], alph[] = "abc";
    int t[6][3] = {{1,3,5},{5,5,2},{5,5,5},{4,5,5},{5,5,2},{5,5,5}};
    int st = 0, i;
    char *p;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        p = strchr(alph, s[i]);
        if (!p) { st = 5; break; }
        st = t[st][p - alph];
    }
    printf(st == 1 || st == 2 ? "Accepted\n" : "Rejected\n");
    return 0;
}