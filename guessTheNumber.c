/*
guessThe Number.c

In this program, the computer generates a number between 1 and 100.
The user is then allowed to guess which number it is. 
If the user is right, the program ends,
else the computer states whether the guess was too high or too low
and the user can guess again.

By: Shreenath Bhanderi
*/


#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <stdbool.h>

int generateNumber(int max);
void playGame(int randomNumber);



int main () {
 	int randomNumber, max;

	printf("Choose a maximum number: ");
	scanf("%d", &max);

	randomNumber = generateNumber(max);
 	printf("Guess the number between 1 and %d!\n", max);

 	playGame(randomNumber);

 	printf("Congratulations! %d was the right answer\n", randomNumber);


 }

 /* generates a number between 1 and max*/
 int generateNumber(int max) {
 	srand(time(NULL));
 	return rand() % max;
 }

/* While loop that continues running until user wins*/
/* Takes in the right answer */
 void playGame(int randomNumber) {
 	int userInput;
 	bool guess = false;

 	while (!guess){
 		scanf("%d", &userInput);

 		if(userInput == randomNumber){
 			guess = true;
 		}
 		if(userInput > randomNumber) {
 			printf("Too High!\n");
 		}

 		if(userInput < randomNumber) {
 			printf("Too Low!\n");
 		}


 	}

 }
