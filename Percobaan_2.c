#include <stdio.h>
#include <stdlib.h>

// Praktikum 2, No. 1
// Program untuk menampilkan deret Fibonacci berdasarkan jumlah input yang diberikan pengguna
int main()
{
    // Menampilkan judul percobaan
    printf("Percobaan 2\n------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk input jumlah elemen deret Fibonacci
    int n;

    // Meminta input dari pengguna untuk jumlah bilangan dalam deret Fibonacci
    printf("Input bilangan untuk menampilkan deret fibonaccinya: ");
    scanf("%d", &n);

    // Mendeklarasikan array untuk menyimpan deret Fibonacci
    int jumlah[n];

    // Menetapkan dua bilangan pertama dalam deret Fibonacci
    jumlah[0] = 0;  // Fibonacci pertama
    jumlah[1] = 1;  // Fibonacci kedua

    // Menampilkan dua bilangan pertama deret Fibonacci
    printf("0 1 ");

    // Loop untuk menghitung deret Fibonacci dari bilangan ketiga hingga bilangan ke-n
    for (int i = 2; i < n; i++) {
        // Variabel sementara untuk menyimpan dua elemen sebelumnya
        int x, y;
        x = jumlah[i - 1];  // Elemen sebelumnya (n-1)
        y = jumlah[i - 2];  // Elemen sebelum sebelumnya (n-2)

        // Menyimpan elemen Fibonacci berikutnya
        jumlah[i] = x + y;

        // Menampilkan elemen Fibonacci ke-i
        printf("%d ", jumlah[i]);
    }

    return 0;
}
