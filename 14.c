#include <stdio.h>
int main() {
    char s[100], stack[200];
    int top = 0, i = 0, ok = 1;
    scanf("%s", s);
    while (s[i] == 'a') {
        stack[top++] = 'a';
        stack[top++] = 'a';
        i++;
    }
    while (s[i] == 'b') {
        if (top == 0) { ok = 0; break; }
        top--;
        i++;
    }
    if (s[i] != '\0' || top != 0) ok = 0;
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}