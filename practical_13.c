#include <stdio.h>

int main() {
    int i;

    printf("Demonstrating break: ");
    for (i = 1; i <= 10; i++) {
        if (i == 6)
            break;  
        printf("%d ", i);
    }

    printf("\nDemonstrating continue: ");
    for (i = 1; i <= 10; i++) {
        if (i == 6)
            continue;   
        printf("%d ", i);
    }

    return 0;
}
