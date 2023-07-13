#include <iostream>
#include <string>


using namespace std;

class hp
{

public:
    // atribut
    string merek;
    string kondisi;
    string internal;
    string baterai;
    string garansi;
    int harga;
};

hp ipdata[5];

//prosedur menyimpan data hp baru
void data(){
    ipdata[0].merek = "IP 11";
    ipdata[0].internal = "64 GB";
    ipdata[0].garansi = "1 tahun";
    ipdata[0].harga = 7000000;

    ipdata[1].merek = "IP 12";
    ipdata[1].internal = "128 GB";
    ipdata[1].garansi = "1 tahun";
    ipdata[1].harga = 10500000;

    ipdata[2].merek = "IP 13";
    ipdata[2].internal = "128 GB";
    ipdata[2].garansi = "1 tahun";
    ipdata[2].harga = 12500000;
    
    ipdata[3].merek = "IP 14";
    ipdata[3].internal = "64 GB";
    ipdata[3].garansi = "1 tahun";
    ipdata[3].harga = 19000000;

    ipdata[4].merek = "IP 15";
    ipdata[4].internal = "64 GB";
    ipdata[4].garansi = "1 tahun";
    ipdata[4].harga = 20000000;
    
};


