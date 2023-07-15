// Nama Kelompok : 
//     1. Bagas Alim Adhitama
//     2. Muhammad Ashief
//     3. Ikfina Kamaliya Rizqi
//     4. Dive Oktabid Fikhri

// Project Bioskop 

//   Menu awal ada  :
//     1. Manajemen data
//     2. Menu Bioskop  //
    
//   Ada 3 menu  manajemen data
//     1. tambah data
//     2. hapus data

//   Ada 5 menu bioskop yang tersedia :
//     1. Manajemen Bioskop  
//        -> Ada 2 menu lagi yaitu tambah data film dan hapus data film
//     2. Lihat daftar film 
//        -> Melihat daftar film yang tersedia di film.txt, juga dapat membeli tiket apabila menemukan film yang diinginkan
//     3. Beli tiket 
//        -> input nama Film
//        -> Apabila nama film ditemukan input uang jika uang cukup ditampilkan struk pembelian sukses dan data disimpan ke riwayat.txt 
//                                                  jika uang tidak cukup pembelian gagal  
//     4. Beli cemilan 
//        -> ditampilkan daftar cemilan \
//        -> konfirmasi ingin beli cemilan y/n 
//        -> jika y input nama cemilan input uang jika uang cukup ditampilkan struk pembelian sukses dan data disimpan ke riwayat.txt 
//                                                jika uang tidak cukup pembelian gagal  
//     5. Menampilkan riwayat pembelian di riwayat.txt

#include <iostream>
#include "menu.h"

using namespace std;

int main()
{
  mainn data;
  char ulangmenu;
  
  data.inputmenu(); //pemanggilan method input pilihan menu
  data.switchcase(); //pemnaggilan output menu 
  
}
