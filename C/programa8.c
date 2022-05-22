#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    struct tm* ptr;
    time_t ola = time(NULL);
    clock_t tempo = clock();
    time_t ola2 = time(NULL);
    ptr = localtime(&ola);

    printf("%s", asctime(ptr));
    printf("%s", ctime(&ola));
    printf("%s", ctime(&ola2));
    printf("%d\n", difftime(&ola, &ptr));
    printf("%d", difftime(&ola, &ola2));

    return 0;
}