#include <stdio.h>

int main() 
{
    char operator;
    int x;
    int y;
    float h;
    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");
    printf("Pilih Operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Bilangan pertama = ");
    scanf("%i", &x);
    printf("Bilangan kedua = ");
    scanf("%i", &y);

    switch (operator) {
        case '+':
        h = x + y;
        printf("Hasilnya : %f", h);
    
            break;
        case '-':
        h = x - y;
        printf("Hasilnya : %f", h);
            break;
        case '*':
        h = x * y;
        printf("Hasilnya : %f", h);
            break;
        case '/':
        h = x / y;
        printf("Hasilnya : %f", h);
            break;
        default:
            printf("Operator Salah.\n");
            return 1; 
        }
}