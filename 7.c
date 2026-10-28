#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, ok = 1;
    scanf("%s", s);
    for (i = 0; s[i]; i++)
        if (s[i] != '0' && s[i] != '1') ok = 0;
    if (!strstr(s, "101")) ok = 0;
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}