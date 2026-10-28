#include <stdio.h>
int main() {
    char s[100];
    int t[3][2] = {{1,1},{1,1},{2,2}};
    int st = 0, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        if (s[i] != 'a' && s[i] != 'b') { st = 2; break; }
        st = t[st][s[i] - 'a'];
    }
    printf(st == 1 ? "Accepted\n" : "Rejected\n");
    return 0;
}