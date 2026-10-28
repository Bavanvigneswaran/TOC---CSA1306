#include <stdio.h>
#include <string.h>
int main() {
    char s[100], alph[] = "abc";
    int t[8][3] = {{7,1,2},{7,7,3},{7,7,7},{4,7,7},{5,7,7},{6,7,7},{7,7,7},{7,7,7}};
    int st = 0, i;
    char *p;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        p = strchr(alph, s[i]);
        if (!p) { st = 7; break; }
        st = t[st][p - alph];
    }
    printf(st == 2 || st == 3 || st == 6 ? "Accepted\n" : "Rejected\n");
    return 0;
}