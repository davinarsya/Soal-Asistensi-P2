#include <stdio.h>
#include <string.h>

char lawan(char p1, char p2) {
    if (p1 == p2) return 'D';
    if ((p1 == '<' && p2 == ']') ||
        (p1 == '.' && p2 == '<') ||
        (p1 == ']' && p2 == '.')) 
        return '2';
    return '1';
}
int main() {
    char p1[10], p2[10];
    int nyawa1 = 5, nyawa2 = 5;

    printf("Masukkan perintah Player 1 (5 simbol): ");
    scanf("%s", p1);
    printf("Masukkan perintah Player 2 (5 simbol): ");
    scanf("%s", p2);

    for (int i = 0; i < 5; i++) {
        char hasil = lawan(p1[i], p2[i]);
        if (hasil == '1') {
            nyawa2--;
        } else if (hasil == '2') {
            nyawa1--;
        }
    }

    printf("\nSisa nyawa Player 1: %d\n", nyawa1);
    printf("Sisa nyawa Player 2: %d\n", nyawa2);

    if (nyawa1 > nyawa2)
        printf("Pemenang: Player 1!\n");
    else if (nyawa2 > nyawa1)
        printf("Pemenang: Player 2!\n");
    else
        printf("Hasil: Seri!\n");

    return 0;
}
