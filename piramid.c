//Piramid Biasa
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

//Piramid Terbalik
#include <stdio.h>

int main(void) {
    int tinggi_segitiga, i, j;
    
    printf("Input tinggi Piramid: ");
    scanf("%d", &tinggi_segitiga);
    printf("\n");
    
    for(i = tinggi_segitiga; i >= 1; i--) {
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

// Piramid Kanan
#include <stdio.h>

int main(void) {
    int tinggi_segitiga, i, j;
    
    printf("Input tinggi Piramid: ");
    scanf("%d", &tinggi_segitiga);
    printf("\n");
    
    // Membuat segitiga siku-siku kanan
    for(i = 1; i <= tinggi_segitiga; i++) {
        // Mencetak spasi
        for(j = 1; j <= tinggi_segitiga-i; j++) {
            printf(" ");
        }
        // Mencetak pagar
        for(j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}

// Piramid Kiri
#include <stdio.h>

int main(void) {
    int tinggi_segitiga, i, j;
    
    printf("Input tinggi Segitiga : ");
    scanf("%d", &tinggi_segitiga);
    printf("\n");
    
    // Membuat segitiga siku-siku kiri
    for(i = 1; i <= tinggi_segitiga; i++) {
        for(j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}