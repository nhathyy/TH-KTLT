#include <stdio.h>
#include <windows.h>

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void printLine() {
    for (int i = 0; i < 100; i++) printf("-");
    printf("\n");
}

int main() {
    int i, j;

    int colors[] = {10, 11, 12, 13, 14, 15, 9, 3, 6};

    printLine(); 
    for (i = 1; i <= 10; i++) {
        for (j = 2; j <= 10; j++) {
            setColor(colors[j - 2]); 
            printf("|  %dx%d=%-4d", j, i, j * i); 
        }
        printf("|\n"); 
        printLine(); 
    }
    setColor(7);
    return 0;
}
