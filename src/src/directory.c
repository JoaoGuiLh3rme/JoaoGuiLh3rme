#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "directory.h"

Directory *createDirectory(char *name)
{
    Directory *dir = malloc(sizeof(Directory));

    strcpy(dir->name, name);

    dir->parent = NULL;
    dir->firstChild = NULL;
    dir->nextSibling = NULL;

    return dir;
}
