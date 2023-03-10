#ifndef _FILE_H_
 #define _FILE_H_

#include <stdio.h>
#include <stdlib.h>

#include "item.h"

typedef unsigned char byte;

byte* readFile(const char* path, long* size);
void writeFile(const char* path, byte* buff, long size);
Item* parseJson(byte* file);

#endif