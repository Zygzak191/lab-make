#include <stdlib.h>
#include "display.h"
#include "myClass.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
	int e = EXIT_SUCCESS;
	struct Complex c=Complex.new(2,7);
    if (displayMessage(HELLO_WORLD) != EXIT_SUCCESS) {
    	e = EXIT_FAILURE;
    }
    printf("\n%d\n",funkcja(PREDEFINIOWANA_ZMIENNA));
	
	printf("Czesc rzeczywista: %d\nCzesc urojona: %d\n",c.re,c.im);
	
    	return e;		
}
