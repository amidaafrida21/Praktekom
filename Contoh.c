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

#include <stdio.h>

int main(void) {
    int tinggi_segitiga, i, j;
    
    printf("Input tinggi Piramid: ");
    scanf("%d", &tinggi_segitiga);
    printf("\n");
    
    for(i = 1; i <= tinggi_segitiga; i++) {
        // Mencetak spasi
        for(j = 1; j <= tinggi_segitiga-i; j++) {
            printf(" ");
        }
        
        // Mencetak pagar (#)
        for(j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 bukan bilangan prima.\n");
    } else {
        if (flag == 0)
          printf("%d adalah bilangan prima.\n", n);
        else
          printf("%d bukan bilangan prima.\n", n);
    }
    return 0;
}

#include <stdio.h>

int digit_kanan(int n) {
    return n % 10;
}

void cek_digit_kanan(int a, int b, int c) {
    if (digit_kanan(a) == digit_kanan(b) || digit_kanan(a) == digit_kanan(c) || digit_kanan(b) == digit_kanan(c)) {
        printf("SAMA");
    } else {
        printf("TIDAK SAMA");
    }
}

int main() {
    int a, b, c;
    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", &a, &b, &c);
    cek_digit_kanan(a, b, c);
    return 0;
}

#include <stdio.h>


int main ()
{
    int a,b;
    b=11;

    printf("Masukan bilangan bulat possitif: ");
    scanf ("%d", &a);
        if (a%b == 0)
            {
                printf ("SPECIAL");
            }
            
            else
            {
                printf ("BIASA");
            }       
            
            return 0;
    
    
}

#include <stdio.h>

int main (void){
    float harga, diskon, pembayaran;

    //Memasukan Harga Barang
    printf("Masukan Harga: ");
    scanf("%f", &harga);

    //Memasukan Diskon Dalam Bentuk Persen
    printf("Masukan Diskon: ");
    scanf("%f", &diskon);

    //Menghitung jumlah diskon dan harga setelah diskon
    float JumlahDiskon = (diskon / 100) * harga;
    float HargaSetelahDiskon = harga - JumlahDiskon;

    //Menghitung Jumlah Pembayaran
    printf("Harga Sebelum Diskon: %.2f\n", harga);
    printf("Jumlah Diskon: %.2f\n", JumlahDiskon);
    printf("Jumlah Pembayaran: %.2f\n", HargaSetelahDiskon);

    return 0;
}