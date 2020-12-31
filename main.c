#include <stdio.h>
#include <stdlib.h>


int main()
{
///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///No Absen : 18

    printf("Nama    : Tri Waluyo\n");
    printf("Nim     : A11.2017.10097\n");
    printf("No absen: 28\n\n");
    printf("====================================\n");
    printf("PROGRAM HITUNG GAJI KARYAWAN KONTRAK\n");
    printf("         PT.Maju Makmur\n");
    printf("====================================\n");
    puts("\n");

    char nama[30];
    char jenis_kel,status;
    int jum_anak,gol,pend;
    int jam_kerja,honor_ttp = 3000000;
    int honor_lmbr,honor_total;
    int tunj_jabt,tunj_pend,tunj_anak,tunj_lemb,tunj_kel;
    int sisa_jamlemb , hasil_lemb;

    printf("Nama Karyawan           : ");
    gets(&nama);
    printf("Jenis Kelamin[L/l/P/p]  : ");
    scanf("%c",&jenis_kel);
    fflush(stdin); /// digunakan untuk merefresh scanf
    printf("Status[M/m/S/s]         : ");
    scanf("%c",&status);
    if((jenis_kel=='L' || jenis_kel=='l')&&(status=='M' || status=='m'))
    {
        printf("Jumlah anak             : ");
        scanf("%d",&jum_anak);

        if(jum_anak>0 && jum_anak <4)
        {
        tunj_anak = jum_anak *100000;
        }
        else
        {
        tunj_anak = 300000;
        }

        tunj_kel = 0.1 * 3000000;
    }
    else
    {
        printf("Jumlah anak             : 0\n");
        tunj_anak = 0;
        tunj_kel = 0;
    }

    printf("Golongan[1,2,3]         : ");
    scanf("%d",&gol);

    if(gol==1)
    {
        tunj_jabt = 0.05*3000000;
    }
    else if(gol==2)
    {
        tunj_jabt = 0.1*3000000;
    }
    else if(gol==3)
    {
        tunj_jabt = 0.15*3000000;
    }

    printf("Pendidikan[SMA(1),D3(2),S1(3)] : ");
    scanf("%d",&pend);

    if(pend==1)
    {
        tunj_pend=0.025 * 3000000;
    }
    else if(pend==2)
    {
        tunj_pend=0.05 * 3000000;
    }
    else if(pend==3)
    {
        tunj_pend=0.075 * 3000000;
    }
    printf("Jumlah Jam Kerja        : ");
    scanf("%d",&jam_kerja);


    if(jam_kerja>200)
    {

        sisa_jamlemb=jam_kerja-200;
        tunj_lemb = sisa_jamlemb*75000;
    }
    else if(jam_kerja<200)
    {
        hasil_lemb = 0;
    }

    honor_total = honor_ttp+tunj_jabt+tunj_pend+tunj_kel+tunj_anak+tunj_lemb;
    puts("");
    printf("-------------------------------------\n");
    printf("Karyawan yang bernama : %s\n",nama);
    printf("Honor yang diterima\n\n");
    printf("Honor Tetap             Rp%d\n",honor_ttp);
    printf("Tunjangan Jabatan       Rp %d\n",tunj_jabt);
    printf("Tunjangan Pendidikan    Rp %d\n",tunj_pend);
    printf("Tunjangan Keluarga      Rp %d\n",tunj_kel);
    printf("Tunjangan Anak          Rp %d\n",tunj_anak);
    printf("Honor Lembur            Rp %d\n",tunj_lemb);
    printf("-------------------------------------+\n");
    printf("Honor yang diterima     Rp%d\n",honor_total);


    return 0;
}

