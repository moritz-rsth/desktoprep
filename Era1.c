#include <stdio.h>

int main(void) {
	int c=0;
	for(int i=0; i<10; i++){
		c=c+i;
		printf("Der aktuelle Wert von c ist: %i\n", c);
	}
	printf("\nDer endgültige Wert von c ist: %i\n", c);
}
