#include <iostream>
#include "hp.h"
#include "garansi.h"
#include <fstream>

using namespace std;

class method{

  private :
    int menu,menu2;
    string searchmerek;
    string searchinternal;
    string beli;
    int result;
    int uang;
    bool data_input = false;
    string carihp;
    int atribut;
    
    int lenght = sizeof(ipdata)/sizeof(ipdata[0]);

  public :
  //===================================================================
// func pemilihan menu
    void tampilmenu()
    {   //kamus lokal :

        //deskripsi :
        cout << "\n======== TOKO HP Barokah ========" << endl;
        cout << " " << endl;
        cout << "Pilih menu : " << endl;
        cout << "1. Lihat daftar HP" << endl;
        cout << "2. Seacrhing HP" << endl;
        cout << "3. Beli HP" << endl;
        cout << "4. Cek Garansi & service" << endl;
        cout << "5. Lihat data garansi & service" << endl;
        cout << "99. Keluar" << endl;
        cout << " " << endl;
        cout << "Masukkan Pilihan : ";
        cin >> menu;

    };
  //=====================================================================
    //tampildata
    void tampildata(){
      ifstream myfile("hp.txt"); 
      string line;
        if(myfile.is_open()){
          while(getline (myfile, line)){
            cout << line << endl;
          }
          myfile.close();
        }else {
          cout << "File gagal dibuka";
        }
    }
   //=====================================================================
   // function cari data merek
    int searchmerekhp(hp arr[], int lenght, string searchkey)
    {
      //kamus lokal:
      int i;
      i = 0;
      //deskripsi :
      while(i < lenght){
        if(arr[i].merek == searchkey){
          cout << "Merek   : ";
          cout << arr[i].merek << endl;                          
          cout << "Internal : ";
          cout << arr[i].internal << endl;
          cout << "Garansi : "; 
          cout << arr[i].garansi << endl;
          cout << "Harga   : ";
          cout << arr[i].harga << endl;
          cout << "" << endl;
          return 1;
        }
        i++;
      };
      return -1; //jika data tidak ditemukan
    }
    //=====================================================================
     // function cari data internal
    int searchinternalhp(hp arr[], int lenght, string searchkey)
    {
      //kamus lokal:
      int i;
      i = 0;
      //deskripsi :
      while(i < lenght){
        if(arr[i].internal == searchkey){
          cout << "Merek   : ";
          cout << arr[i].merek << endl;                          
          cout << "Internal : ";
          cout << arr[i].internal << endl;
          cout << "Garansi : "; 
          cout << arr[i].garansi << endl;
          cout << "Harga   : ";
          cout << arr[i].harga << endl;
          cout << "" << endl;
          return 1;
        }
        i++;
      };
      return -1; //jika data tidak ditemukan
    }
    //=====================================================================
    //uang kembalian berdasar search merek
    int searchuang(hp arr[], int lenght, string searchkey)
    {
      //kamus lokal:
      int i;
      i = 0;
      //deskripsi :
      while(i < lenght){
        if(arr[i].merek == searchkey){
          cout << "Merek   : ";
          cout << arr[i].merek << endl;                         
          cout << "Internal : ";
          cout << arr[i].internal << endl;
          cout << "Garansi : "; 
          cout << arr[i].garansi << endl;
          cout << "Harga   : ";
          cout << arr[i].harga << endl;
          cout << "" << endl;
         //menghitung kembalian uang
          if(uang >= arr[i].harga) {
            cout << "===== Pembelian Sukses =====" <<endl;
            cout << "Harga Awal : " << arr[i].harga <<endl;
            cout << "Uang Anda : " << uang << endl;
            cout << "Kembalian Anda adalah : " << uang - arr[i].harga << endl;
            cout << "===== Terima Kasih ====" << endl;
          }else {
            cout << "===== Pembelian Gagal =====" <<endl;
            cout << "Uang Anda Kurang " << uang - arr[i].harga << endl;
          } 
        }
        i++;
      };
      return -1; //jika data tidak ditemukan
    }
    //=====================================================================
    //input merek
    void merek()
    { //kamus lokal :
    
      //deskripsi :
      cout << "\nMasukkan merek hp : ";
      cin.ignore();
      getline(cin,searchmerek);
      cout << "" << endl;
    }
   //=====================================================================
    //input internal
    void internal()
    { //kamus lokal :
    
      //deskripsi :
      cout << "\nKetik Internal HP : ";
      cin.ignore();
      getline(cin, searchinternal);
      cout << "" << endl;
    }
   //=====================================================================
    //input beli berdasar merek
    void belihp(){
      //kamus lokal :
        
      //des :
      cout << "Beli Sekarang (y/n) : ";
      cin >> beli;
      cout <<""<<endl;
      if(beli == "y" || beli == "Y"){
          cout << "Masukkan Uang Anda : ";
          cin >> uang;
          cout <<""<<endl;

          searchuang(ipdata, lenght, searchmerek); 

      }else if (beli == "n" || beli == "N"){
          cout << "===== Terima Kasih =====\n";
      }
    }
    //=====================================================================
    //prosedur switch menu and seri
    garansi datagar; //data baru 
    void outputMenu()
    {   
        if(menu <= 5){
        switch (menu)//switch menu
        {
        //tampilan data
        case 1:
                data();//array
                tampildata();//tampil array
                cout << "\n===== MENU 2 =====\n 1. Tidak menemukan hp yang dicari ? cari HP \n 2. Beli HP \n 3. Menu Awal \n" << endl;
                cout << "Pilih menu : ";
                cin >> menu2;
                switch (menu2) {
                  case 1 : 
                        merek();//input merek
                        data();//array
                        result = searchmerekhp(ipdata, lenght, searchmerek);//search merek
                         if(result == -1){
                            cout << "Merek HP tidak ditemukan" << endl;
                        }
                        belihp();
                        break;

                  case 2 :
                    merek();
                    data();
                     result = searchmerekhp(ipdata, lenght, searchmerek);//search merek
                         if(result == -1){
                            cout << "Merek HP tidak ditemukan" << endl;
                        }else {
                         belihp();
                        }
                    break;

                  case 3 : 
                     cout << "" << endl;
                     tampilmenu();
                     outputMenu();
                     break;

                 default :
                  cout << "Input salah" << endl;
                  break;
                }
          break;

        case 2 :
          cout << "\n===== CARI HP BERDASAR =====" << endl;
          cout <<"1. Merek\n2. Internal " << endl;
          cout << "Pilih Nomer : ";
          cin >> atribut;
          switch(atribut) {
              case 1 :
                 merek();//input merek
                        data();//array
                        result = searchmerekhp(ipdata, lenght, searchmerek);//search merek
                         if(result == -1){
                            cout << "Merek HP tidak ditemukan" << endl;
                        }else {
                          string casebeli;
                          cout << "Ingin beli HP (y/n) ? ";
                          cin >> casebeli;
                          if (casebeli == "y" || casebeli == "Y"){
                            merek();
                            data();
                            belihp();
                          }
                        }
                break;
              case 2  :
                   internal();//input internal
                        data();//array
                        result = searchinternalhp(ipdata, lenght, searchinternal);//search merek
                         if(result == -1){
                            cout << "Internal HP tidak ditemukan" << endl;
                        }else {
                          string casebeli;
                          cout << "Ingin beli HP (y/n) ? ";
                          cin >> casebeli;
                          if (casebeli == "y" || casebeli == "Y"){
                            merek();
                            data();
                            belihp();
                          }
                        }
                break;
              
              default :
              cout << "\ninput salah" << endl;
              break;
          }
        break;

        //beli
        case 3 :
             merek();//input merek
             data();//array
             result = searchmerekhp(ipdata, lenght, searchmerek);//search merek
             if(result == -1){
              cout << "Merek HP tidak ditemukan" << endl;
             }else {
               belihp();//prosedur beli hp
             }
          break;

        //cek garansi
        case 4 :
             cout << "Masukkan jumlah HP yang ingin dicek : ";
             datagar.jumlahdata = datagar.inputjumlahdata();//menginput banyaknya data
             cout << "\n";
             datagar.inputgar(datagar.jumlahdata);//menginput isi data
          break;
        
        case 5 :
             cout << "====== DAFTAR DAATA GARANSI ======\n" << endl;
             datagar.tampildata();
          break;
        
        default:
        cout << "\nInput salah" << endl;
            break;
        }
        }else {
           cout << "\n===== PROGRAM CLOSE ===== || ===== TERIMA KASIH =====" << endl;
          exit(0);
        }   
   };
};