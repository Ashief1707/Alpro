#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;

class garansi {

  public :
    string merek;
    string noseri;
    int tanggalbeli;
    int bulanbeli;
    int tahunbeli;
    int tanggalsekarang;
    int bulansekarang;
    int tahunsekarang;
    string kerusakan;
    string status;

    vector<string>merek2;
    vector<string> noseri2;
    vector<int> tanggalbeli2;
    vector<int> bulanbeli2;
    vector<int> tahunbeli2;
    vector<int> tanggalsekarang2;
    vector<int> bulansekarang2;
    vector<int> tahunsekarang2;
    vector<string> kerusakan2;
    vector<string> status2;


    int jumlahdata;
    

  int inputjumlahdata(){
    int x;
    cin >> x;
    return x;
  }

  void inputgar(int lenght){

    cout << "====== INPUT DATA HP =====\n" << endl;

    for (int i = 0; i < lenght; i++){
      cout << i + 1 << "." << endl;
      cout << "Masukkan Merek : ";
      cin.ignore();
      getline(cin, merek);
      cout << "Masukkan Nomer Seri : ";
      cin >> noseri;
      cout << "Masukkan tanggal pembelian (dd mm yyyy): ";
      cin >> tanggalbeli >> bulanbeli >> tahunbeli;
      cout << "Masukkan tanggal sekarang (dd mm yyyy): ";
      cin >> tanggalsekarang >> bulansekarang >> tahunsekarang;
      cout << "Kerusakan : ";
      cin.ignore();
      getline(cin, kerusakan);
      cout << "Status (ganti / service) : ";
      // cin.ignore();
      //getline(cin, status);
      cin >> status;
      cout << "" << endl;

      merek2.push_back(merek);
      noseri2.push_back(noseri);
      tanggalbeli2.push_back(tanggalbeli);
      bulanbeli2.push_back(bulanbeli);
      tahunbeli2.push_back(tahunbeli);
      tanggalsekarang2.push_back(tanggalsekarang);
      bulansekarang2.push_back(bulansekarang);
      tahunsekarang2.push_back(tahunsekarang);
      kerusakan2.push_back(kerusakan);
      status2.push_back(status);

      int days_diff = (tanggalsekarang - tanggalbeli) + (bulansekarang - bulanbeli) * 30 + (tahunsekarang - tahunbeli) * 365;

      // Hitung jumlah tahun dalam selisih hari
        int years_diff = floor(days_diff / 365);

     // Cek apakah garansi sudah berakhir
      if (years_diff >= 1)
      {   
        cout << "===== Garansi HP sudah berakhir ===== || ===== Data tidak disimpan =====\n " << endl;
      }
      else
      {   
        cout << "===== Garansi HP masih berlaku ===== || ===== Data disimpan =====\n" << endl;
      }

      simpandata();
    }
  }

  void simpandata(){
    ofstream simpan("garansi.txt", ios::app);
    if (simpan.is_open())
    {
      
       int days_diff = (tanggalsekarang - tanggalbeli) + (bulansekarang - bulanbeli) * 30 + (tahunsekarang - tahunbeli) * 365;

      // Hitung jumlah tahun dalam selisih hari
        int years_diff = floor(days_diff / 365);

     // Cek data yang disimpan adalah hp yang masih ada garansi
      if (years_diff >= 1)
      {   
        //data tidak disimpan
      }else {
        simpan << "Merek : " << merek << endl;
      //simpan << "Nomer Seri : " << noseri << endl;
      //simpan << "Tanggal Beli : " << tanggalbeli << " " << bulanbeli << " " << tahunbeli << endl;
        simpan << "Tanggal Sekarang : "<< tanggalsekarang << " " << bulansekarang << " " << tahunsekarang << endl;
        simpan << "Kerusakan : " << kerusakan << endl;
        simpan << "Status : " << status << "\n" << endl;
      }
    }
      simpan.close();
    }
  

     //tampildata
    void tampildata(){
      ifstream myfile("garansi.txt"); 
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

};




