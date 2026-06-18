#include <stdio.h>

#include "directory.h"

int main()
{
    Directory *root = createDirectory("/");

    printf("Diretorio raiz: %s\n", root->name);

    return 0;
}
