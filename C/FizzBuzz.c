#include <stdio.h>

int main(void)
{
    int i = 1;
    for (; i <= 100; ++i)
    {
        printf("Number: %d %s%s\n", i, i % 3 ? "" : "Fizz", i % 5 ? "" : "Buzz");
    }
    return 0;
}