#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    
    // Initialize the random number generator
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;
    
    printf("=========================================\n");
    printf("       WELCOME TO THE NUMBER GUESSING GAME\n");
    printf("=========================================\n");
    printf("I have picked a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");
    
    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n\n");
            while(getchar() != '\n'); // Clear the input buffer
            continue;
        }
        
        attempts++;
        
        if (guess > secretNumber) {
            printf("Too high! Try a lower number.\n\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("\n🎉 Congratulations! You found the number %d in %d attempts!\n", secretNumber, attempts);
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
