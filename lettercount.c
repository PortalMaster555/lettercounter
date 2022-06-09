#include<stdio.h>
#include<string.h>

char word[32];
int sum;
int main(int argc, char **argv)
{
	printf("Please enter a word to obtain a letter count: ");
	fgets(word, sizeof(word), stdin);
	word[strlen(word) - 1] = '\0'; //hacky way to remove pesky newlines
	printf("The word you chose is %s, which has a letter sum of %d.\n", word, sum);
	printf("Press ENTER to continue");
	getchar();
	return 0;
}
