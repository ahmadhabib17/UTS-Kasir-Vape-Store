#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, angka_pod, angka_mod, angka_aio,
        oxva,caliburn, vaporesso, dovpo, hexohm, lost_vape, druga, voopoo, zootech, pulse, smoke, dot_aio,
        harga_1, harga_2, harga_3, harga_4, harga_5, harga_6, harga_7, harga_8, harga_9, harga_10, harga_11, harga_12,
        total_1, total_2, total_3, total_4, total_5, total_6, total_7, total_8, total_9, total_10, total_11, total_12;
    printf ("          -SELAMAT DATANG DI BIPOD STORE-         \n\n");
    printf ("||================================================||\n");
    printf ("||>>>>>>>>>>>Barang Apa Yang Anda Cari?<<<<<<<<<<<||\n");
    printf ("||================================================||\n");
    printf ("||                  1. Pod                        ||\n");
    printf ("||                  2. Mod                        ||\n");
    printf ("||                  3. Aio                        ||\n");
    printf ("||================================================||\n");
    printf("\nMasukkan Pilihan Anda: ");
    scanf("%d",&angka);

    switch(angka) {

        case 1:
            printf("\n||================================================||\n");
            printf("||>>>>>>>>>>>>>>>>>-Pilihan Pod-<<<<<<<<<<<<<<<<<<||\n");
            printf("||================================================||\n");
            printf("||            1. Oxva      = 200000               ||\n");
            printf("||            2. Caliburn  = 300000               ||\n");
            printf("||            3. Lost Vape = 250000               ||\n");
            printf("||            4. Voopoo    = 270000               ||\n");
            printf("||================================================||\n");
            printf("\nMasukkan Pilihan Anda:");
            scanf("%d",&angka_pod);

                if (angka_pod == 1 ){
                    printf("\n||================================================||\n");
                    printf("||              Barang = Oxva                     ||\n");
                    printf("||              Harga  = 200000                   ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah pembelian =");
                    scanf("%d",&oxva);
                    harga_1=200000;
                    total_1=harga_1 * oxva;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_1);
                    printf("||================================================||\n");

                }else if(angka_pod == 2 ){
                    printf("\n||================================================||\n");
                    printf("||                 Barang = Caliburn              ||\n");
                    printf("||                 Harga  = 300000                ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&caliburn);
                    harga_2=300000;
                    total_2=harga_2 * caliburn;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_2);
                    printf("||================================================||\n");

                }else if(angka_pod == 3){
                    printf("\n||================================================||\n");
                    printf("||               Barang = Lost Vape               ||\n");
                    printf("||               Harga  = 250000                  ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&lost_vape);
                    harga_3=250000;
                    total_3=harga_3 * lost_vape;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_3);
                    printf("||================================================||\n");

                }else if (angka_pod == 4){
                    printf("\n||================================================||\n");
                    printf("||               Barang = Voopoo                  ||\n");
                    printf("||               Harga  = 270000                  ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&voopoo);
                    harga_4=270000;
                    total_4=harga_4 * voopoo;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_4);
                    printf("||================================================||\n");

                }else {
                    printf("Maaf Pilihan Anda Tidak Tersedia");
                }
                break;
        case 2:
            printf("\n||================================================||\n");
            printf("||>>>>>>>>>>>>>>>>>-Pilihan Mod-<<<<<<<<<<<<<<<<<<||\n");
            printf("||================================================||\n");
            printf("||             1. Vaporesso = 600000              ||\n");
            printf("||             2. Dovpo     = 550000              ||\n");
            printf("||             3. Druga     = 450000              ||\n");
            printf("||             4. Hexohm    = 2500000             ||\n");
            printf("||================================================||\n");
            printf("\nMasukkan Pilihan Anda: ");
            scanf("%d",&angka_mod);

                if (angka_mod == 1 ){
                    printf("\n||================================================||\n");
                    printf("||                Barang = Vaporesso              ||\n");
                    printf("||                Harga  = 600000                 ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&vaporesso);
                    harga_5=600000;
                    total_5=harga_5 * vaporesso;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_5);
                    printf("||================================================||\n");

                }else if(angka_mod == 2 ){
                    printf("\n||================================================||\n");
                    printf("||              Barang = Dovpo                    ||\n");
                    printf("||              Harga  = 550000                   ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&dovpo);
                    harga_6=550000;
                    total_6=harga_6 * dovpo;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                   ||\n",total_6);
                    printf("||================================================||\n");

                }else if(angka_mod == 3){
                    printf("\n||================================================||\n");
                    printf("||                Barang = Druga                  ||\n");
                    printf("||                Harga  = 450000                 ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&druga);
                    harga_7=450000;
                    total_7=harga_7 * druga;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_7);
                    printf("||================================================||\n");

                }else if (angka_mod == 4){
                    printf("\n||================================================||\n");
                    printf("||               Barang = Hexohm                  ||\n");
                    printf("||               Harga  = 2500000                 ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&hexohm);
                    harga_8=2500000;
                    total_8=harga_8 * hexohm;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                   ||\n",total_8);
                    printf("||================================================||\n");

                }else {
                    printf("Maaf Pilihan Anda Tidak Tersedia");
                }
                break;
        case 3:
            printf("\n||================================================||\n");
            printf("||>>>>>>>>>>>>>>>>>-Pilihan Aio-<<<<<<<<<<<<<<<<<<||\n");
            printf("||================================================||\n");
            printf("||            1. Zootech    = 500000              ||\n");
            printf("||            2. Smoke      = 350000              ||\n");
            printf("||            3. Pulse      = 950000              ||\n");
            printf("||            4. Dot Aio    = 1500000             ||\n");
            printf("||================================================||\n");
            printf("\nMasukkan Pilihan Anda: ");
            scanf("%d",&angka_aio);

                if (angka_aio == 1 ){
                    printf("\n||================================================||\n");
                    printf("||                 Barang = Zootech               ||\n");
                    printf("||                 Harga  = 500000                ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&zootech);
                    harga_9=500000;
                    total_9=harga_9 * zootech;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_9);
                    printf("||================================================||\n");

                }else if(angka_aio == 2 ){
                    printf("\n||================================================||\n");
                    printf("||                Barang = Smoke                  ||\n");
                    printf("||                Harga  = 350000                 ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&smoke);
                    harga_10=350000;
                    total_10=harga_10 * smoke;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                    ||\n",total_10);
                    printf("||================================================||\n");

                }else if(angka_aio == 3){
                    printf("\n||================================================||\n");
                    printf("||                Barang = Pulse                  ||\n");
                    printf("||                Harga  = 950000                 ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&pulse);
                    harga_11=950000;
                    total_11=harga_11 * pulse;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                   ||\n",total_11);
                    printf("||================================================||\n");

                }else if (angka_aio == 4){
                    printf("\n||================================================||\n");
                    printf("||               Barang = Dot Aio                 ||\n");
                    printf("||               Harga  = 1500000                 ||\n");
                    printf("||================================================||\n");
                    printf("\nJumlah Pembelian:");
                    scanf("%d",&dot_aio);
                    harga_12=1500000;
                    total_12=harga_12 * dot_aio;
                    printf("\n||================================================||\n");
                    printf("||Total Belanja adalah :%d                   ||\n",total_12);
                    printf("||================================================||\n");

                }else {
                    printf("Maaf Pilihan Anda Tidak Tersedia");
                }
                break;
    }

    return 0;
}
