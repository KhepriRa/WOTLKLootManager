#include <stdio.h>
#include <stdlib.h>

#include "lib/file.h"

int main(int argc, char** argv){
	long size = 0;
	byte* val = readFile("./test.txt", &size);
	if(!val)
		return EXIT_FAILURE;
		
	writeFile("./copy.txt", val, size);
	free(val);
	printf("OK\n");
	return EXIT_SUCCESS;
}