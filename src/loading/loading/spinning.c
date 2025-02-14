#include <stdio.h>
#include <unistd.h>

void printch(char c)
{
    printf("\rLoading: %c", c); 
    fflush(stdout);          // Flush output to ensure it appears immediately
    usleep(200000);          // Wait for 200ms (200,000 microseconds)
}

int main(void)
{

    char array[] = {'|', '/', '-', '\\', '|', '/', '-', '\\'};
    int index = 0, size = sizeof(array) / sizeof(array[0]);

    printf("Loading: ");

    while (index < 200)
    {
        printch(array[index % size]);
        index++;
    }

    printf("DONE!     \n");
    return 0;
}

