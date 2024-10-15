#include <stdio.h>
#include <windows.h> // Include this for _sleep() function on Windows

int main(void) {
    
    int j;
    char beep = '\a';
    for (j = 0; j < 5; j++) {
        printf("%c", beep);
        fflush(stdout); // Ensures the beep is executed immediately
        Sleep(1000);   // Waits for 1000 milliseconds (1 second) on Windows
    }

    Sleep(2000);

    int i;
    for (i = 0; i < 5; i++) {
        printf("\a");
        fflush(stdout); // Ensures the beep is executed immediately
        Sleep(1000);   // Waits for 1000 milliseconds (1 second) on Windows
    }

    return 0;
}
