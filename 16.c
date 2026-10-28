#include <stdio.h>
#include <string.h>
int main() {
    char t[100];
    int i, j, n, ok = 1;
    scanf("%s", t);
    n = strlen(t);
    while (ok) {
        i = 0;
        while (i < n && t[i] == 'X') i++;
        if (i < n && t[i] == 'a') {
            t[i] = 'X';
            j = i + 1;
            while (j < n && (t[j] == 'a' || t[j] == 'Y')) j++;
            if (j + 1 < n && t[j] == 'b' && t[j + 1] == 'b') {
                t[j] = 'Y';
                t[j + 1] = 'Y';
            } else ok = 0;
        } else {
            while (i < n && t[i] == 'Y') i++;
            if (i != n) ok = 0;
            break;
        }
    }
    printf(ok ? "Accepted\n" : "Rejected\n");
    return 0;
}