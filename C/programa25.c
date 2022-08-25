#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rep = 1;

    for(; rep < 101; rep++)
    {
        printf("%d\n", rep);
    }
    
    rep = 1;
    puts("");
    while(rep < 101)
    {
        printf("%d\n", rep);
        rep++;
    }

    rep = 1;
    puts("");
    do
    {
        printf("%d\n", rep);
        rep++;
    }
    while(rep < 101);
}