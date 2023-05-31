#include <stdio.h>

void fn() {
    printf("fn\n");
}

int main(int argc, char** argv)
{
    int c;
    do {
        c = getchar();
    } while (c >= 0);

    fn();

    return 0;
}
