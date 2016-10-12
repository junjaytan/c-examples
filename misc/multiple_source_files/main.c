#include <stdio.h>
#include "myheader.h"

int main(int argc, char *argv[]) {
    char name1[] = "John";
    printf("Hello, %s!\n", name1);
    printgreeting("John");

    return 0;
}
