#include <stdio.h>
#include <stdlib.h>

// Praktikum 1, No. 1
// Program untuk meminta input dari pengguna dan menampilkan bilangan yang dimasukkan ke dalam array
int main()
{
    // Menampilkan judul percobaan
    printf("Percobaan 1\n------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk jumlah bilangan yang ingin dimasukkan
    int n;

    // Meminta input jumlah bilangan yang ingin dimasukkan
    printf("Berapa kali anda ingin memasukkan lalu menampilkan bilangan? ");
    scanf("%d", &n);

    // Mendeklarasikan array dengan ukuran n yang diterima dari input pengguna
    int array[n];

    // Loop untuk meminta input bilangan sebanyak n kali
    for (int i = 0; i < n; i++) {
        int nilai;
        // Meminta input bilangan dan menyimpannya ke dalam array
        printf("Bilangan %d = ", i + 1);
        scanf("%d", &nilai);
        array[i] = nilai;  // Menyimpan nilai input ke dalam array
        fflush(stdin);  // Membersihkan input buffer
    }

    // Menampilkan garis pemisah
    printf("\n------------------------------------------\n\n");

    // Loop untuk menampilkan bilangan yang telah dimasukkan
    for (int i = 0; i < n; i++) {
        printf("Bilangan %d = %d\n", i + 1, array[i]);
    }

    return 0;
}
