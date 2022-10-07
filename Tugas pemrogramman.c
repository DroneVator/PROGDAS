print main()
{
    int jumlah;
    float pd,k, pti, o;
    float rata;
    char nama[50];
    int nim[15];


    //Input Nama dan NIM
    printf("Program Menghitung Rata-rata 4 Mata Kuliah\n");
    printf("\nMasukkan Nama Mahasiswa : ");
    scanf("%[^\n]s",&nama);
    prinftf("\nMasukkan NIM : ");
    scanf("%d" ,&nim);

    //Input Nilai
    printf("\nMasukkan Nilai Pemrogramman Dasar : ",pd);
    scanf("%f",&pd);
    printf("\nMasukkan Nilai Kalkulus : ",k);
    scanf("%f",&k);
    printf("\nMasukkan Nilai PTI : ",pti);
    scanf("%f",&pti);
    printf("\nMasukkan Nilai Orkom : ",o);
    scanf("%f",&o);
    
    printf("\nNama Mahasiswa : %s",nama);
    printf("\nNim Mahasiswa :%d",nim);
    jumlah = pd+k+pti+o;
    printf("\nJumlah 4 Mata Kuliah Kamu adalah : %i",jumlah);
    rata = (pd+k+pti+o)/4;
    printf("nRata rata Kamu adalah : %.2f",rata);

}