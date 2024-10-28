#include <stdio.h>

int main() {
    int n, m, i, j, k;
    printf("Enter number of processes and resources: ");
    scanf("%d %d", &n, &m);

    int alloc[n][m], max[n][m], avail[m], need[n][m], finish[n], safeSeq[n], work[m];

    printf("Enter allocation matrix:\n");
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            scanf("%d", &alloc[i][j]);

    printf("Enter maximum matrix:\n");
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            scanf("%d", &max[i][j]);

    printf("Enter available resources:\n");
    for (i = 0; i < m; i++) 
        scanf("%d", &avail[i]);

    for (i = 0; i < n; i++) 
        finish[i] = 0;

    for (i = 0; i < m; i++) 
        work[i] = avail[i];

    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            need[i][j] = max[i][j] - alloc[i][j];

    int count = 0;
    while (count < n) {
        int found = 0;
        for (i = 0; i < n; i++) {
            if (!finish[i]) {
                int flag = 1;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    for (k = 0; k < m; k++) 
                        work[k] += alloc[i][k];
                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (!found) {
            printf("System is not in a safe state.\n");
            return 0;
        }
    }

    printf("System is in a safe state.\nSafe sequence: ");
    for (i = 0; i < n; i++) 
        printf("P%d ", safeSeq[i]);
    printf("\n");

    return 0;
}
