#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void horario()
{
    struct tm *info;
    time_t seconds;
    seconds = time(NULL);
    info = localtime(&seconds);

    printf("%d", asctime(info));
}

int main()
{
    horario();
}