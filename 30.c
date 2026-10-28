#include <stdio.h>
int main() {
    char s[100];
    int set = 1, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++)
        set = ((set & 1) && s[i] == 'a') ? 1 : 0;
    printf((set & 1) ? "Accepted\n" : "Rejected\n");
    return 0;
}