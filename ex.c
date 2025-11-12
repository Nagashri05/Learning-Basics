#include <stdio.h>

int main() {
    int a[100], n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

   
    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("  %d", a[i]);
    }

    printf("\nFrequency of each element:\n");
    int visited[100] = {0};

    for (i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d time(s)\n", a[i], count);
    }

    return 0;
}

