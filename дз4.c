#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, ".UTF8");
    int x, y;
        scanf_s("%d%d", &x, &y);
        if ((x % 2 == 0) != (y % 2 == 0)) {
            if (x % 2 == 0)
                printf("Ход команды А\n");
            else
                printf("Ход команды Б\n");
            
    }
        system("pause");
    return 0;
}