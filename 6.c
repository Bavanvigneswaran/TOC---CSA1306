#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i = 0, n, ok = 1;
    scanf("%s", s);
    n = strlen(s);
    while (s[i] == '0') i++;
    if (i * 2 != n) ok = 0;
    for (; i < n; i++)
        if (s[i] != '1') ok = 0;
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}