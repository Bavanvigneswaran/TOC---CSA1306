#include <stdio.h>
int main() {
    int n, m, e[20][20] = {0}, i, j, k, a, b;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        e[a][b] = 1;
    }
    for (i = 0; i < n; i++) e[i][i] = 1;
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (e[i][k] && e[k][j]) e[i][j] = 1;
    for (i = 0; i < n; i++) {
        printf("e-closure(q%d) = { ", i);
        for (j = 0; j < n; j++)
            if (e[i][j]) printf("q%d ", j);
        printf("}\n");
    }
    return 0;
}