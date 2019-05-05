#include <iostream>
#define MAX 10 /* substitusikan suatu teks dengan batasan 10 */
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

typedef struct{
int data[MAX], head, tail, pil;
}

Queue;
Queue antrian;

void create(){
antrian.head=antrian.tail=-1;
}

int IsEmpty(){
if(antrian.tail==-1)
return 1;
else
return 0;
}

int IsFull(){
if (antrian.tail==MAX-1) return 1;
else return 0;
}

void clear(){
antrian.head=antrian.tail=-1;
cout << "Data Clear" ;
}

void tampil(){ 
int jum;
jum=0;
}

/*Fungsi masukkan data
void Enqueue*/

void menu (){
	cout<<"\n\t\t ===========================";
   	cout<<"\n\t\t ||  PROGRAM ANTRIAN BANK  ||";
   	cout<<"\n\t\t ==========================="<<endl<<endl;
    	cout<<"1. Masukan Antrian"<<endl;
    	cout<<"2. Melihat Antrian"<<endl;
    	cout<<"3. Keluar"<<endl;
    	cout<<endl;
    	cout<<"Masukkan pilihan Anda = ";
}

int main(){
	identitas id[15];
	identitas ant[15];
	int pil;
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
		if (pil==2){
			tampil();
		}
	}while(pil!=3);
}
