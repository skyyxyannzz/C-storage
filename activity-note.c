#include <stdio.h>

int main(void)
{
    int jumlah_sesi, sisa_menit, total_menit, jam_belajar = 0;
    int halaman, latihan_diselesaikan, target_diselesaikan;
    double rata_rata_per_sesi, persentase_penyelesaian;
    const int menit_per_jam = 60;
    const double persen = 100.0;

    printf("===========================================\n");
    printf("\tRINGKASAN AKTIVITAS BELAJAR\n");
    printf("===========================================\n");

    printf("Jumlah sesi: ");
    scanf("%d", &jumlah_sesi);

    printf("Total durasi belajar: ");
    scanf("%d", &total_menit);

    printf("Jumlah halaman yang dibaca: ");
    scanf("%d", &halaman);

    printf("Latihan diselesaikan: ");
    scanf("%d", &latihan_diselesaikan);

    printf("Target diselesaikan: ");
    scanf("%d", &target_diselesaikan);

    jam_belajar             += total_menit / menit_per_jam;
    sisa_menit              = total_menit % menit_per_jam;
    rata_rata_per_sesi      = (double) total_menit / jumlah_sesi;
    persentase_penyelesaian = (double) latihan_diselesaikan / target_diselesaikan *persen;

    printf("\nJumlah sesi: %d\n", jumlah_sesi);
    printf("Total waktu belajar: %d jam %d menit\n", jam_belajar, sisa_menit);
    printf("Halaman dibaca: %d\n", halaman);
    printf("Rata-rata per sesi: %.2f\n", rata_rata_per_sesi);
    printf("Latihan diselesaikan: %d dari %d\n", latihan_diselesaikan, target_diselesaikan);
    printf("Persentase penyelesaian: %.2f%%\n", persentase_penyelesaian);

    return 0;
}
