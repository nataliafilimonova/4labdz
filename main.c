#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int A, B, C;
    int calibration_success;

    printf("=== СИСТЕМА КАЛИБРОВКИ СТАНКА ===\n");
    printf("Введите три параметра станка (A, B, C): ");

    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    calibration_success = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    if (calibration_success) {
        printf("Калибровка успешна (1)\n");
    }
    else {
        printf("Калибровка не пройдена (0)\n");
    }
    return 0;
}
