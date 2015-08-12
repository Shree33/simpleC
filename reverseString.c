/*
reverseStringInC
By Shreenath Bhanderi
*/


#include <stdio.h>
#include <string.h>

int main() {
	char *input;
	char buffer[256];
	int stringLength;


	printf("Please type in a string \n");

	input = fgets(buffer, 256, stdin);
	if ( input != NULL){
		stringLength = strlen(input);
		printf("You typed: %s\nbackwards that's: ",input);

		for(int i = stringLength; i > -1; --i){
			printf ("%c", input[i]);
		}
		printf("\n");
	}
}
