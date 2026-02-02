#include <stdio.h>

int main() {
    int secret = 7;          
    int guess;
    int attempts = 5;        
    printf("Welcome to Number Guessing Game!\n");
    printf("You have %d attempts to guess the number.\n", attempts);

    for(int i = 1; i <= attempts; i++) {
        printf("\nAttempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if(guess == secret) {
            printf("Congratulations! You guessed the correct number.\n");
            return 0;
        } 
    
        else if(guess > secret) {
            printf("Hint: Try smaller number.\n");
        } 
        else {
            printf("Hint: Try larger number.\n");
        }
    }

    printf("\n Out of attempts! The correct number was %d.\n", secret);
    return 0;
}
