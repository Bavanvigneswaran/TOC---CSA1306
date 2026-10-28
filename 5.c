#include <stdio.h>
#include <string.h>
int check(char *s, int l, int r) {
    if (l > r) return 1;
    if (l < r && s[l] == '0' && s[r] == '0') return check(s, l + 1, r - 1);
    for (; l <= r; l++)
        if (s[l] != '1') return 0;
    return 1;
}
int main() {
    char s[100];
    scanf("%s", s);
    printf(check(s, 0, strlen(s) - 1) ? "Accepted\n" : "Rejected\n");
    return 0;
}