#include <iostream>
#include<conio.h>
using namespace std;

struct data{
char nim[20],nama[20],kelas[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{cout<<"Masukan jumlah data : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"Inputkan Nama\t: ";cin>>batas[a].nama;
   cout<<"Inputkan NIM\t: ";cin>>batas[a].nim;
   cout<<"Inputkan Kelas\t: ";cin>>batas[a].kelas;
   a++;}
   }

void lihatdata()
{int i,j;
 cout<<"\nTampilan Data\n";
 cout<<"_________________________________________________________________________";cout<<endl;
 cout<<"|\tNO\t|\tNama\t|\tNIM\t\t|\tKelas\t|\n";
 cout<<"_________________________________________________________________________";cout<<endl;
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;

  cout<<"|\t"<<j<<"\t|";
  cout<<batas[i].nama<<"\t\t|";
  cout<<batas[i].nim<<"\t\t\t|";
  cout<<batas[i].kelas<<"\t\t|";cout<<endl;
  }
  cout<<"_________________________________________________________________________\n\n";
  }

void hapusdata()
{int x,y;
 cout<<"Hapus data ke :";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 ;
 cout<<"\n===== Data ke "<<x<<" Terhapus =====";cout<<endl;
 ;
}

void editdata(){
int k,l;
cout<<"Masukan data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"Nama\t: ";cin>>batas[l].nama;
cout<<"NIM\t: ";cin>>batas[l].nim;
cout<<"Kelas\t: ";cin>>batas[l].kelas;
lihatdata();
}

int main()
{char pilih;
 char w;
 cout<<"\n**__________PROGRAM DATA__________**";
 awal:
  cout<<"\n**______ BERIKUT PILIHAN MENU ________**";
  cout<<"\na. Input Data ";
  cout<<"\nb. Hapus Data ";
  cout<<"\nc. Lihat Data ";
  cout<<"\nd. Edit Data ";
  cout<<"\ne. Keluar";
  cout<<"\n\nMasukkan Pilihan Anda : ";
  cin>>pilih;
  if(pilih=='a')
   {//clrscr()
       ;inputdata();goto awal;}
  if(pilih=='b')
   {//clrscr()
       ;hapusdata();goto awal;}
  if(pilih=='c')
   {//clrscr()
       ;lihatdata();goto awal;}
  if(pilih=='d')
   {//clrscr()
       ;editdata();goto awal;}
  if(pilih=='e')
   {//clrscr()
       ;
    cout<<"\n\n Apakah Anda Yakin Keluar Dari Program ?";cin>>w;
    if(w=='y'||w=='Y')
    {//clrscr()
        ;
     cout<<"\n__________ PROGRAM SELESAI __________";}
    if(w=='n'||w=='N')
           {//clrscr()
               ;goto awal;}}
  else
   {//clrscr()
       ;cout<<"Pilihan 1-5";getch();//clrscr()
   ;goto awal;}
return 0;
}
