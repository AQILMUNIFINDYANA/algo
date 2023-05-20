#include <iostream>
#include "kalkulator.cc"
using namespace std;


int main (){
    kalkulator k;
    int pilih;
    char pil;

    menu:
        cout<<"0.Exit"<<endl;
        cout<<"1.Tambah"<<endl;
        cout<<"2.Kurang"<<endl;
        cout<<"3.Bagi"<<endl;
        cout<<"4.Kali"<<endl;
        cin>>pilih;
        switch(pilih) {
            case 0:
                goto keluar;
                break;
            case 1:
                k.inputan();
                cout<<"Hasil : "<<k.tambah()<<endl;
                break;
            case 2:
                k.inputan();
                cout<<"Hasil : "<<k.kurang()<<endl;
                break;
            case 3:
                k.inputan();
                cout<<"Hasil : "<<k.bagi()<<endl;
                break;
            case 4:
                k.inputan();
                cout<<"Hasil : "<<k.kali()<<endl;
                break;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
                
        }
        cout<<"Ingin Mengulangi? (y/t)";
        cin>>pil;
        if((pil== 'y')||(pil=='Y')){
            goto menu;
        }else if((pil== 't')||(pil=='T')){
            goto keluar;
        }
        keluar:
            cout<<"Thanks"<<endl;
            return 0;
            
        }