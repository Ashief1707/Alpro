//Nama : Muhammad Ashief
//NIM : A11.2022.14168
//Kelompok : A11.4205
//Blog : https://muhammadashief.blogspot.com/
//Dosen : Rizqa Novic
// PROGRAM TOKO HP

//===================================================]
//===== SPESIFIKASI PROGRAM =====   
// Ada 5 menu pilihan awal yaitu :
// 1. Lihat daftar hp
// 2. Searching hp
// 3. Beli hp
// 4. Cek garansi hp
// 5. Lihat data garansi
// 99. Keluar atau close program

// ===== Penjelasan tiap menu ===== 
// Menu 1. Lihat daftar hp
//     pembeli akan ditampilkan daftar hp yang ada lalu pembeli akan diberi pilihan lagi yaitu
//      1. cari hp
//         --> pembeli bisa mencari hp yang diinginkan saat melihat daftar hp jadi pembeli tidak perlu menscroll kembali daftar hp atau
//             pembeli tidak menemukan hp yang diinginkan didaftar hp pembeli bisa mencari hp dengan cara memasukkan merek hp
//         --> setelah mencari hp pembeli akan ditawarkan ingin beli atau tidak
//      2. beli hp
//      3. menu awal

// Menu 2. searching hp
//     --> ada 2 menu lagi yaitu serching berdasarkan :
//              1. merek
//                 --> input merek hp output data hp
//                 --> ditawarkan beli pilih ya atau tidak
//              2. internal
//                 --> input interl hp lalu output data hp
//                 --> ditawarkan beli pilih ya atau tidak

// Menu 3. Beli hp
//    --> input merek hp
//    --> konfirmasi beli dengan input (y/n), jika y : input uang, uang cukup payment sukses, uang tidak cukup payment gagal
//                                            jika n : ada konfirmasi kembali ke menu awal(y/n) jika n program selesai

// Menu 4. Cek garansi hp
//    --> input merek, (tgl,bulan,tahun) beli, (tgl,bulan,tahun)sekarang
//    --> jika sudah lebih dari 1 tahun garansi hangus
//    --> output cek garansi 

// Menu 5. Lihat daftar garansi hp
//    --> data akan muncul apabila pembeli telah melakukan cek garansi hp

#include <iostream>
#include "method.h"

using namespace std;

int main(){
  char ulangmenu;
  method data; 
  do {
  //prosedur menampilkan menu
  data.tampilmenu();
  cout << "" << endl;
  data.outputMenu();
  cout << "\nIngin kembali ke pilih menu (y/n) : "; //inputan ingin mengulahi pemilihan menu jika inputan y user
  cin >> ulangmenu;                               //akan di tampilkan pilih menu jika tidak program selesai
  cout << "" << endl;
  }while(ulangmenu == 'Y' || ulangmenu == 'y');

  cout << "===== TERIMA KASIH =====" << endl;
   return 0;
}