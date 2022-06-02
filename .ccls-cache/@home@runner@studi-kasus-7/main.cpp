#include <iostream>
using namespace std;

class buah{
public:
int total, pilih;
string buah[50];
string pilihan;
char karakter;

void masukan(){
 
  cout<<"          STUDI KASUS 7        "<<endl;

  cout<<"Masukkan Jumlah buah :";
  cin>>total;
  for (int i=0; i<total; i++){
    cout<<"Input buah ke - "<<i+1<<"=";
    cin>>buah[i];
    }
  cout<<endl;
  cout<<" Sebelum urut"<<endl;
  cout<<"----------- HASIL ---------------"<<endl;
  for (int i=0; i<total; i++){
    cout<<"buah ke -"<<i+1<<"="<<buah[i]<<endl;
  }
  cout<<"--------------------------------"<<endl;
}

void sorting(){
  int i, j;
  string tmp;
  for (i = 0; i < total; i++){
    for (j = 0; j <total- i - 1; j++){
      if ( buah[j] > buah[j + 1]){
        tmp = buah[j];
        buah[j] = buah[j + 1];
       buah[j + 1]= tmp;    
    }
  }
}
  cout<<endl;
  cout<<"setelah diurutkan "<<endl;
  cout<<"-------------- OUTPUT --------------"<<endl;
  for (int i=0; i<total; i++) {
    cout<<"Hewan Ke-"<<i+1<<" : "<<buah[i]<<"|"<<endl;
  }
  cout<<"===================================="<<endl<<endl;
  }

void output(){
  cout<<"Pilih Buah = "<<endl;
  for(int i=0; i<total; i++){
    cout<<"Hewan ke-"<<i+1<<" : "<<buah[i]<<"     "<<endl;
  }
  cout<<"------------------------------------"<<endl<<endl;
  cout<<"PILIHAN : ";cin>>pilih;
  cout<<"Buah yang dipilih : "<<buah[pilih-1]<<endl;
 pilihan=buah[pilih -1];
  cout<<"Mencari Karakter apa : ";
  cin>>karakter;
  for(int i = 0 ;i < pilihan.size(); i++){
    if(pilihan[i] == karakter){
      cout<<"karakter ditemukan pada indeks ke -"<<i<<endl;
    }
    else{
      cout<<"Karakter tidak ditemukan pada indeks ke -"<<i<<endl;
    }
  }
 }
};
int main(){
  buah xzy;
 xzy.masukan();
 xzy.sorting();
 xzy.output();
  return 0;
}#include <iostream>
using namespace std;

class buah{
public:
int total, pilih;
string buah[50];
string pilihan;
char karakter;

void masukan(){
 
  cout<<"          STUDI KASUS 7        "<<endl;

  cout<<"Masukkan Jumlah buah :";
  cin>>total;
  for (int i=0; i<total; i++){
    cout<<"Input buah ke - "<<i+1<<"=";
    cin>>buah[i];
    }
  cout<<endl;
  cout<<" Sebelum urut"<<endl;
  cout<<"----------- HASIL ---------------"<<endl;
  for (int i=0; i<total; i++){
    cout<<"buah ke -"<<i+1<<"="<<buah[i]<<endl;
  }
  cout<<"--------------------------------"<<endl;
}

void sorting(){
  int i, j;
  string tmp;
  for (i = 0; i < total; i++){
    for (j = 0; j <total- i - 1; j++){
      if ( buah[j] > buah[j + 1]){
        tmp = buah[j];
        buah[j] = buah[j + 1];
       buah[j + 1]= tmp;    
    }
  }
}
  cout<<endl;
  cout<<"setelah diurutkan "<<endl;
  cout<<"-------------- OUTPUT --------------"<<endl;
  for (int i=0; i<total; i++) {
    cout<<"Hewan Ke-"<<i+1<<" : "<<buah[i]<<"|"<<endl;
  }
  cout<<"===================================="<<endl<<endl;
  }

void output(){
  cout<<"Pilih Buah = "<<endl;
  for(int i=0; i<total; i++){
    cout<<"Hewan ke-"<<i+1<<" : "<<buah[i]<<"     "<<endl;
  }
  cout<<"------------------------------------"<<endl<<endl;
  cout<<"PILIHAN : ";cin>>pilih;
  cout<<"Buah yang dipilih : "<<buah[pilih-1]<<endl;
 pilihan=buah[pilih -1];
  cout<<"Mencari Karakter apa : ";
  cin>>karakter;
  for(int i = 0 ;i < pilihan.size(); i++){
    if(pilihan[i] == karakter){
      cout<<"karakter ditemukan pada indeks ke -"<<i<<endl;
    }
    else{
      cout<<"Karakter tidak ditemukan pada indeks ke -"<<i<<endl;
    }
  }
 }
};
int main(){
  buah xzy;
 xzy.masukan();
 xzy.sorting();
 xzy.output();
  return 0;
}