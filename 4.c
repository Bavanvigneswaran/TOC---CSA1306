#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, n, ok = 1;
    scanf("%s", s);
    n = strlen(s);
    for (i = 0; i < n; i++)
        if ((s[i] != '0' && s[i] != '1') || s[i] != s[n-1-i]) ok = 0;
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}