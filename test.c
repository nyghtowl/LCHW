/*
Reverse 

Input: string, sentence or link

Out: reverse of what is submitted

*/

#include <string.h>

int main(char *word)
{
	char result[] = {};

	for(i=strlen(word); i>0; i--){
		strcat(result, word[i]);
	}

	return result;
}

main("Hello");
