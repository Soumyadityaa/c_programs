#include <stdio.h>

#define MAX_JOBS 100

struct Job {
    char id;
    int deadline;
    int profit;
};

void jobSequence(struct Job jobs[], int n) {
    int maxDeadline = 0, totalProfit = 0;
    char sequence[MAX_JOBS] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (sequence[j] == 0) {
                sequence[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    printf("Sequence of jobs: ");
    for (int i = 0; i < n; i++) {
        if (sequence[i] != 0) {
            printf("%c ", sequence[i]);
        }
    }
    printf("\nTotal profit: %d\n", totalProfit);
}

int main() {
    int n;
    struct Job jobs[MAX_JOBS];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }

    jobSequence(jobs, n);

    return 0;
}
