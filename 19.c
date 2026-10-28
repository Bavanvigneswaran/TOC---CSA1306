#include <stdio.h>
#include <string.h>
int main() {
    char t[100];
    char *p;
    scanf("%s", t);
    p = strchr(t, '+');
    if (!p) {
        printf("Invalid\n");
        return 0;
    }
    *p = 'a';
    t[strlen(t) - 1] = '\0';
    printf("%s\n", t);
    return 0;
}