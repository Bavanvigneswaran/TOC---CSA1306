#include <stdio.h>
int main() {
    char s[100];
    int st = 0, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        if (st == 0) st = (s[i] == 'a') ? 1 : 3;
        else if (st != 3) st = (s[i] == 'a') ? 1 : 2;
    }
    printf(st == 1 ? "Accepted\n" : "Rejected\n");
    return 0;
}