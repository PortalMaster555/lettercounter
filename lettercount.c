#include<stdio.h>
#include<string.h>
#include <ctype.h>

char word[32];
int sum = 0;

int main(int argc, char **argv)
{
	printf("Please enter a word to obtain a letter count: ");
	
	fgets(word, sizeof(word), stdin);
	
	for(int i = 0; i < strlen(word) - 1; i++)
	{
		printf("%c->", toupper(word[i])); 
		word[i] = tolower(word[i]);
		printf("%d ", word[i] - 96); //Offsetting ASCII value to A1Z26 
		sum += word[i] - 96; //more magic numbers
	}

	word[strlen(word) - 1] = '\0'; //hacky way to remove pesky newlines
	printf("%c", '\n');
	printf("The word you chose is %s, which has a letter sum of %d.%c", word, sum, '\n');
	
	printf("Press ENTER to continue. ");
	getchar();
	return 0;
}
