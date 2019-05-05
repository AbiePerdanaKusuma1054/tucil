#include <iostream>
using namespace std;
class identitas {
	public:
		char nama [20];
		char norek [20];
		char transaksi;
		int nominal;
	private:	
		int data;
};
void menu (){
	cout<<"\n\t\t ===========================";
    cout<<"\n\t\t ||  PROGRAM ANTRIAN BANK  ||";
    cout<<"\n\t\t ==========================="<<endl<<endl;
    cout<<"1. Masukan Antrian"<<endl;
    cout<<"2. Proses Antrian"<<endl;
    cout<<"3. Keluar"<<endl;
    cout<<endl;
    cout<<"Masukkan pilihan Anda (@ angka)\t= ";
}
int main(){
	identitas id[15];
	identitas ant[15];
	char pil;
	int x;
	do{
		system("cls");
		menu ();
		cin>>pil;
		if (pil==1){
			system("cls");
            cout<<"Nama Nasabah\t: ";
            cin>>id[x].nama;
            cout<<"Nomor Rekening\t: ";
            cin>>id[x].norek;
            cout<<"Jenis Transaksi\t: \n";
            cout<<"\t  A.Debet\n";
            cout<<"\t  B.Kredit\n"<<"Pilih\t: ";
            cin>>id[x].transaksi;
            if(id[x].transaksi!='A'||id[x].transaksi!='a'||
			   id[x].transaksi!='B'||id[x].transaksi!='b')
			{
				cout<<"Tidak ada transaksi pilihan anda\n";
			}
			else{
				cout<<"Jumlah Transaksi :";
				cin>>id[x].nominal;
			}
		}
	}while(pil!=3);
}
