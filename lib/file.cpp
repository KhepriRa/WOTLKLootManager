#include "file.h"

//read file in path and return a char tab and its size in the size parameter
byte* readFile(const char* path, long* size){
	long l_size = 0;
	FILE* file = NULL;
	byte* res = NULL;

	//checking arguments
	if(!path){
		printf("File path is empty in readFile\n");
		return NULL;
	}
	if(!size){
		printf("size is null in readFile\n");
		return NULL;
	}

	//opening file
	file = fopen(path, "r");
	if(!file){
		printf("Error opening the file in readFIle\n");
		return NULL;
	}

	//seeking size of file
	fseek(file, 0, SEEK_END);
	l_size = ftell(file);
	rewind(file);

	//allocating buffer
	res = (unsigned char*) calloc(l_size, sizeof(unsigned char));
	if(!res){
		printf("Error creating end buffer in readFile\n");
		return NULL;
	}

	//reading file
	for(int i=0; i<l_size; i++){
		res[i] = fgetc(file);
	}

	*size = l_size;

	fclose(file);
	return res;
}

void writeFile(const char* path, byte* buff, long size){
	FILE* file = NULL;

	//checking arguments
	if(!path){
		printf("File path is empty in writeFile\n");
		return;
	}
	if(!buff){
		printf("Data is empty in writeFile\n");
		return;
	}

	file = fopen(path, "w");
	if(!file){
		printf("Error opening file in writeFile");
		return;
	}

	for(int i=0; i<size; i++){
		fputc((int) buff[i], file);
	}

	fclose(file);
	return;
}

Item* parseJson(byte* file){
	Item* res = NULL;
	int size = 4;
	int depth = 0;

	if(!file){
		printf("Data buffer is empty in parseJson");
		return NULL;
	}

	if(file[0] != '{'){
		printf("File didn't started with \'{\' in parseJson");
		return NULL;
	}

	depth = 1;

	while(depth > 0){
		
	}

	res = (Item*) calloc(size, sizeof(Item));
	if(!res){
		printf("Error creating end buffer in parseJson\n");
		return NULL;
	}

	for(int i=0; i<size; i++){
		res[i] = Item();
	}

	return res;
}