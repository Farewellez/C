#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <Windows.h>
#include "../Lesson_Material/utils.h"

typedef struct tm tm;

int main()
{
    // DIGITAL CLOCK
    clearTerminal();

    time_t rawtime = 0; // Jan 1 1970 (Epoch)
    tm *pTime = NULL;
    bool isTrue = true;

    printf("--- DIGITAL CLOCK ---\n");

    while (isTrue)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);
        // printf("%ld\n", rawtime);
        printf("\r%02d:%02d:%02d", pTime -> tm_hour, pTime -> tm_min, pTime -> tm_sec);
        Sleep(1000);
    }   
}