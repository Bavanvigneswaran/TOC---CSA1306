#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int n, ok;
    scanf("%s", s);
    n = strlen(s);
    ok = (n % 2 == 0) && strncmp(s, s + n / 2, n / 2) == 0;
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}