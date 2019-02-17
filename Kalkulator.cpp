#include <iostream>
using namespace std;

int tambah (float a, float b){
	return ( a + b );
	}

int kurang (float a, float b ){
	return ( a - b );
	}

int kali (float a, float b ){
	return ( a * b );
	}

int bagi (float a, float b ){
	return (a / b );
	}

int main(){
int bil1, bil2;
string lk,nm;
int opt; char why;
system("clear");
veve:
system("toilet -f pagga KALSEL[E]xploit  | lolcat");
cout << "                 KALKULATOR   " << endl;
cout << endl;
cout << "\033[97mCoded By : \033[92m®Muhammad Rafli \033[97m" << endl;
cout << "Team     : \033[92mKALSEL[E]xploit\033[97m" << endl;
cout << "Telegram : \033[92mhttps://t.me/RabbitCL4Y\033[97m" << endl;
cout << endl;
char pilihan;

cout<<" ========================================"<<endl;
cout<<" |	Program Kalkulator Sederhana	|"<<endl;
cout<<" ========================================"<<endl;
cout<<endl;
cout<<" ========================================"<<endl;
cout<<" |	     Masukan Pilihan		|"<<endl;
cout<<" ========================================"<<endl;
cout<<" |					|"<<endl;
cout<<" |	(A) Tambah	(B) Kurang	|"<<endl;
cout<<" |	(C) Kali	(D) Bagi	|"<<endl;
cout<<" |					|"<<endl;
cout<<" ========================================"<<endl;
cout<<" Masukan Pilihan		: ";cin>>pilihan;
cout<<endl;

if ( pilihan == 'A' || pilihan == 'a' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<tambah(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilihan == 'B' || pilihan == 'b' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kurang(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilihan == 'c' || pilihan == 'C' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kali(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilihan == 'D' || pilihan == 'd' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<bagi(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
	cout<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Learn more @ KALSEL[E]xploit 	       |"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" ";
}
