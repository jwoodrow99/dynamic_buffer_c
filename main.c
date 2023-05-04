#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	printf("Dynamic Buffer!\n");
	
	char input;
	int count = 1;
	char *buffer = malloc(sizeof(char) * count);
	
	printf("Starting size of buffer: %lu\n", (sizeof(char) * (count + 1)));
	printf("==============================================\n");
	
	while(1) {
		printf("Enter a charcter: ");
		scanf(" %c", &input);		
		
		if(input == 'q'){
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
