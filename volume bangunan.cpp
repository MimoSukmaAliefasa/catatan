#include <iostream>

using namespace std;

int main(){
    float rumus,VolumeKubus,VolumeBalok,VolumeLimasSegiEmpat,VolumeSetengahLingkaran,s;
    int pilihan,bangunruang,sisi,p,l,a,t,r;
    awal:
rumus = 0;

cout<<"***********Menghitung Volume*********** ";
cout<<endl;
    if(pilihan = 1){
        cout<<"1.Volume Kubus"<<endl;
        cout<<"2.Volume Balok"<<endl;
        cout<<"3.Volume Limas Segi Empat"<<endl;
        cout<<"4.Volume Setengah lingkaran"<<endl;
        cout<<"Masukkan Pilihan = ";
        cin>>bangunruang;
        cout<<endl;
        if(bangunruang == 1){
            cout<<" Volume Kubus \n";
            cout<<" masukkan sisi : ";
            cin>>sisi;
            rumus=sisi*sisi*sisi;
            cout<<" Hasil Volumenya = "<<rumus;
        }else if(bangunruang == 2){
            cout<<" Volume Balok \n";
            cout<<" masukkan Panjang : ";
            cin>>p;
            cout<<" masukkan Lebar : ";
            cin>>l;
            cout<<" masukkan Tinggi : ";
            cin>>t;
            rumus=p*l*t;
            cout<<" Hasil Volumenya = "<<rumus;
        }else if(bangunruang == 3){
            cout<<" Volume Limas Segi Empat \n";
            cout<<" masukkan Panjang : ";
            cin>>p;
            cout<<" masukkan alas : ";
            cin>>a;
            cout<<" masukkan Tinggi : ";
            cin>>t;
            rumus=p*1/3*t;
            cout<<" Hasil Volumenya = "<<rumus;
        }else if(bangunruang == 4){
            cout<<" Volume Setengah Lingkaran";
            cout<<" masukkan jari-jari : ";
            cin>>r;
            rumus=4*3.14*r*r*r;
            cout<<" Hasil Volumenya = "<<rumus;
        }
    }
}
