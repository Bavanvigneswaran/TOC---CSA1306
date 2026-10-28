#include <stdio.h>
#include <string.h>
int main() {
    char t[100], c;
    int l = 0, r, ok = 1;
    scanf("%s", t);
    r = strlen(t) - 1;
    while (l < r) {
        c = t[l];
        t[l] = '_';
        l++;
        if (t[r] != c) { ok = 0; break; }
        t[r] = '_';
        r--;
    }
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}