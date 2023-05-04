#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char input;
	int count = 1;
	char *buffer = malloc(sizeof(char) * count);
	
	printf("Dynamic Buffer!\n");
	printf("Enter one character at a time, 0 to quit.\n");
	printf("==============================================\n");
	
	while(1) {
		printf("Enter a charcter: ");
		scanf(" %c", &input);		
		
		if(input == '0'){
			break;
		}

		buffer[count - 1] = input;
		
		for(int i = 0; i < count; i++){
			printf("[%i]:%c\n", i, buffer[i]);
		}

		count++;
		buffer = realloc(buffer, sizeof(char) * (count + 1));

		printf("\n");
	}

	buffer = realloc(buffer, sizeof(char) * (count + 1));
	buffer[count] = '\0';

	printf("Total String: %s\n", buffer);
	 
	return 0;
}
