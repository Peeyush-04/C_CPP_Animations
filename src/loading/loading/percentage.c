#include <stdio.h>
#include <unistd.h>

void print_per(int number)
{
    printf("%d%%\r", number);
    fflush(stdout); // required to print at the same position
    sleep(1); // delay from unistd.h of 1 sec
    // use usleep() - input values in micro-seconds
}

int main(void)
{
    printf("Loading...\n");

    int load = 0;

    // iterating percentage
    while(load < 101)
    {
        print_per(load);
        load++;
    }

    printf("DONE!     \n");
    return 0;
}
