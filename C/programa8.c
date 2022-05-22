#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    struct tm* ptr;
    time_t ola = time(NULL);
    ptr = localtime(&ola);

    printf("%s", asctime(ptr));

    return 0;
}