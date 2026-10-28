#include <stdio.h>
int main() {
    char s[100];
    int set = 1, nxt, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        nxt = 0;
        if ((set & 1) && s[i] == '0') nxt |= 2;
        if (set & 2) {
            nxt |= 2;
            if (s[i] == '1') nxt |= 4;
        }
        set = nxt;
    }
    printf((set & 4) ? "Accepted\n" : "Rejected\n");
    return 0;
}