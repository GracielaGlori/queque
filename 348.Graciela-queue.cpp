#include <iostream>
#define MAX 20 //maksimum data queue
using namespace std;

//Deklarasi struct antrian
typedef struct {
	int head, tail;
	string nama[MAX], posisi[MAX];
int no[MAX];
}q;
q Q;
//cek apakah antrian penuh
bool isFull() {
	if (Q.tail == MAX-1){
		return true;
	}
	else{
	
	return false;
	}
}

//cek apakah antrian kosong
bool isEmpty() {
	return Q.tail == 0;
}

//Menampilkan Queue
void printQueue() {
	if (isEmpty()) {
    cout << "Pemain kosong"<<endl;
	}
	else {
		cout<<"Data Pemain Bola"<<endl;
	cout<<"-----------------------------------"<<endl;
		cout << "Queue Pemain: \n";
		for (int i = Q.head; i < Q.tail; i++)
		//menambahkan koma jika data tidak terdapat di antrian pertama
		
			cout<< Q.nama[i]<<"->"<< Q.posisi[i]<<"->"<<Q.no[i]<<"	"<<((Q.tail-1 == i) ? "" : ",")<<endl;
  }
}

//manambahkan data ke antrian
enqueue() {
	if (isFull())
	{
		cout << "Pemain penuh!"<<endl;
	}
	else {
		int pos,nom;
		char nm;
		//menambahkan data ke antrian
		cout << "\nMasukkan Nama : ";cin >>Q.nama[Q.tail]; 
		cout << "Masukkan Posisi : ";cin >> Q.posisi[Q.tail]; 
		cout << "Masukkan No. Punggung : ";cin >> Q.no[Q.tail];
		
		
		//menempatkan tail pada elemen data terakhir yang ditambahkan
		Q.tail++;
		cout << "Data ditambahkan\n";
	}
}

// mengambil data dari antrian
dequeue() {
	if (isEmpty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		for (int i = Q.head; i < Q.tail; i++){
		
			Q.nama[i] = Q.nama[i + 1];
			Q.posisi[i] = Q.posisi[i + 1];
			Q.no[i] = Q.no[i + 1];
		//menempatkan tail pada data terakhir yang digeser
		Q.tail--;
	}
}
}

int main(){
	int choose;
	do{
		//Tampilan menu
		cout<<"\n----------------------------------------------------------------------------\n";
		cout<<"\n\t\t\tSTACK MENGGUNAKAN LINKED LIST\n"
			<< " [1] Enqueue \n"
			<< " [2] Dequeue\n"
			<< " [3] Tampil\n"
			<< " [4] Keluar \n\n"
			<< "-------------------\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			printQueue();
			break;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (choose !=4);
	return 0;
}
