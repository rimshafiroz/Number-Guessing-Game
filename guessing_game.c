#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random , guess ;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Lets's play Guessing Game\n");
    random = rand() % 100 + 1;  // %100 helps in generating no.ranging between 0-100


    do {
         printf("Please enter your Guess between 1 to 100: ");
         scanf("%d", &guess);
            no_of_guess++;

         if (guess < random) {
            printf("Too low! Try a higher number.\n");
         } else if (guess > random) {
            printf("Too high! Try a lower number.\n");
         }
         else {
            printf("Congratulations! You have successfully guessed the number in %d attempts.", no_of_guess);
         }

    } while (guess != random);

    printf("\n Thank you for playing the game!!");
    printf("\n Developed by : Rimsha Firoz");

}