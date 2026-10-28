#include <stdio.h>
int main() {
    char s[100];
    int t[4][2] = {{1,0},{1,2},{2,2},{3,3}};
    int st = 0, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        if (s[i] != 'a' && s[i] != 'b') { st = 3; break; }
        st = t[st][s[i] - 'a'];
    }
    printf(st == 2 ? "Accepted\n" : "Rejected\n");
    return 0;
}