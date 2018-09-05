#include <stdlib.h>
#include <stdio.h>
//#include <uninstd.h>

int main(int argc, char ** argv) {
	printf("hello world!\n");

	int x = 1;
	int y = 2;

	// sprintf()

	char astring[] = "hello\n";

	char numstring[12];

	sprintf(numstring, "%d\n", x + y);

	printf(numstring);

	// printf(x + y);
}
