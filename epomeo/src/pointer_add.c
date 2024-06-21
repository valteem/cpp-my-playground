#include "stdio.h"

int main() {
    char *s = "some_string";
    char *p = s + 1;
    printf("%s\n", p);

    int v[] = {1, 2, 3, 4};
    int *u = v + 1;
    printf("%d\n", *u);

    int x = 1;
    int *px = &x;
    printf("offset 1 pointing to %d\n", *(px+1)); // pointing who knows where ))
}