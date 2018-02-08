#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *ptr;
    char buffer[80];

    memset(buffer, 0, sizeof(buffer));

    printf("FGETS: ");

    ptr = fgets(buffer, sizeof(buffer) - 1, stdin);

    printf("\nBUFFER: %s\n", buffer);

    exit(0);
}

