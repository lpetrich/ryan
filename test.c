#include <stdio.h>
#include <string.h>

void printAllCharacters(const char *buffer)
{
	int i=0;
		while (buffer[i]!= '\0'){
			printf("Character: %i\n", buffer[i]);
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