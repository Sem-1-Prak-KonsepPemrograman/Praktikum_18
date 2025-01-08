#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Mendefinisikan konstanta MAX untuk ukuran maksimum array

// Praktikum 3, No. 2
// Program untuk mencari bilangan terbesar dari deret bilangan yang dimasukkan pengguna
int main(){
    // Deklarasi variabel
    int n, array[MAX], nilai, big = 0;

    // Meminta input jumlah deret bilangan dari pengguna
    printf("Berapa banyak deret bilangan yang anda inginkan? ");
    scanf("%d", &n);

    // Input nilai untuk setiap elemen dalam array
    for (int i = 0; i < n; i++) {
        printf("Masukkan nilai untuk bilangan ke-%d: ", i + 1);
        scanf("%d", &nilai);
        array[i] = nilai;  // Menyimpan nilai ke dalam array
    }

    // Mencari bilangan terbesar dengan membandingkan setiap elemen array
    for (int i = 0; i < n; i++) {
        if (big < array[i]) {
            big = array[i];  // Menyimpan bilangan terbesar yang ditemukan
        }
    }

    // Menampilkan bilangan terbesar yang ditemukan
    printf("Bilangan terbesar dari deret bilangan yang anda inputkan adalah %d", big);

    return 0;
}
