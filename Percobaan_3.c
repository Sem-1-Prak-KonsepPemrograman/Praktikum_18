#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Mendefinisikan konstanta MAX untuk ukuran maksimum matriks

// Praktikum 3, No. 1
// Program untuk menjumlahkan dua matriks dengan ukuran yang ditentukan oleh pengguna
int main()
{
    // Deklarasi variabel
    char jawab;
    int b, k, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], nilai;

    // Menampilkan judul percobaan
    printf("Percobaan 3\n");

    // Loop untuk mengulang operasi penjumlahan matriks
    do {
        // Meminta input dari pengguna untuk ukuran matriks (baris dan kolom)
        printf("Baris dan kolom matriks untuk penjumlahan dua matriks(pisahkan dengan spasi): ");
        scanf("%d %d", &b, &k);

        // Input nilai untuk matriks A
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                printf("Nilai matriks A[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &nilai);
                A[i][j] = nilai;  // Menyimpan nilai pada matriks A
            }
        }

        // Menampilkan garis pemisah
        printf("---------------------------------------------------\n");

        // Input nilai untuk matriks B
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                printf("Nilai matriks B[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &nilai);
                B[i][j] = nilai;  // Menyimpan nilai pada matriks B
            }
        }

        // Menjumlahkan matriks A dan B, hasilnya disimpan di matriks C
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                C[i][j] = A[i][j] + B[i][j];  // Menjumlahkan elemen matriks A dan B
            }
        }

        // Menampilkan hasil penjumlahan matriks
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                printf("%d ", C[i][j]);  // Menampilkan elemen matriks C
            }
            printf("\n");  // Baris baru setelah satu baris matriks
        }

        // Membersihkan input buffer
        fflush(stdin);

        // Meminta input untuk mengulang atau tidak
        printf("Apakah anda ingin mengulang lagi(y / t)? ");
        scanf("%c", &jawab);

        // Menampilkan garis pemisah
        printf("--------------------------------------------------------\n\n\n");

    } while (jawab == 'y');  // Program akan mengulang jika pengguna memilih 'y'
}
