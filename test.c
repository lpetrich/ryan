#include <stdio.h>
#include <string.h>

void printAllCharacters(const char *string)
{
	int i=0;
		while (string[i]!= '\0'){
			printf("Character: %i\n", string[i]);
			i++;
		}
}
int main(){
	char buffer[256];
	fgets(buffer,12,stdin);
	printAllCharacters(buffer);
	if (strcmp(buffer, "Laura\n")==0){
	puts("Hello");
	} else {
		puts("You suck!");
	}
}