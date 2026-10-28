#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    char *c;
    int n, k, ok;
    scanf("%s", s);
    n = strlen(s);
    c = strchr(s, 'c');
    ok = c && strchr(c + 1, 'c') == NULL;
    if (ok) {
        k = c - s;
        ok = (n == 2 * k + 1) && strncmp(s, c + 1, k) == 0;
    }
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}