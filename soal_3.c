#include <stdio.h>

int main() {
    int baris, kolom;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);

    int A[baris][kolom], B[baris][kolom], hasil[baris][kolom];

    printf("\nMasukkan elemen matriks A:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMasukkan elemen matriks B:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int pilihan;
    printf("\nPilih operasi:\n1. Penjumlahan\n2. Pengurangan\nPilihan: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("\nHasil Penjumlahan:\n");
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                hasil[i][j] = A[i][j] + B[i][j];
                printf("%d ", hasil[i][j]);
            }
            printf("\n");
        }
    } else if (pilihan == 2) {
        printf("\nHasil Pengurangan:\n");
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                hasil[i][j] = A[i][j] - B[i][j];
                printf("%d ", hasil[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Pilihan tidak valid!\n");
    }

    return 0;
}
