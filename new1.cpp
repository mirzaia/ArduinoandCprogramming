#include <stdafx.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main ()
{
	
	long rupiah, dollar, yen ;
	int pilihan;
	char kembali ;
	system ("color 17");
	cout << "PROGRAM KONVERSI NILAI MATA UANG" << endl;
	cout << "                      " << endl;
	cout << "Kelompok 12" << endl;
	cout << "Mirza Ichwanul Aziz " << endl;
	cout << "Raihan Dwi Safreza " << endl;
	cout << "Rizkiananda Suryandriyo " << endl;
	cout << "Chiara Arandani" << endl;
	cout << "Krisna Cipta Rasa" << endl;
	cout << "Aryeshah Akbar" << endl;
	cout << "                    " << endl;
	cout << "SILAHKAN DIPILIH" << endl;
	cout << "1. RUPIAH KE DOLLAR" << endl;
	cout << "2. DOLLAR KE RUPIAH" << endl;
	cout << "3. RUPIAH KE YEN" << endl;
	cout << "4. YEN KE RUPIAH" << endl;
	cout << "Masukkan Pilihan Anda = " ;

	cin >> pilihan;
	
	if (pilihan == 1)
	{
		cout << "                   " << endl;
		cout << "RUPIAH KE DOLLAR" << endl;
		cout << "MASUKKAN NILAI RUPIAH = " ;
		
		cin >> rupiah;
		
		dollar = rupiah / 14000;
		cout << "NILAI DALAM DOLLAR = " << dollar << endl;
		
		system ("pause");
		
	}
	if (pilihan == 2)
	{
		cout << "                   " << endl;
		cout << "DOLLAR KE RUPIAH" << endl;
		cout << "MASUKKAN NILAI DOLLAR = " ;
		
		cin >> dollar;
		
		rupiah = dollar*14000;
		cout << "NILAI DALAM RUPIAH = " << rupiah << endl;
		
		system ("pause");
	}
	if (pilihan == 3)
	{
		cout << "                   " << endl;
		cout <<"RUPIAH KE YEN" << endl;
		cout << "MASUKKAN NILAI RUPIAH = " ;
		
		cin >> rupiah;
		
		yen = rupiah*117;
		cout << "NILAI DALAM YEN = " << yen << endl;
		
		
	}
	if (pilihan == 4)
	{
		cout << "                   " << endl;
		cout << "YEN KE RUPIAH" << endl;
		cout << "MASUKKAN NILAI YEN = ";
		
		cin >> yen;
		
		rupiah = yen / 117;
		cout << "NILAI DALAM RUPIAH = " << rupiah << endl;	
		

		cout << "Ingin coba lagi ?" << endl;
		cout << "Ketik Y untuk yes, N untuk NO" ;
		cin >> kembali ;
	}
	while ((kembali == 'y') || (kembali == 'Y')) ;
	cout << "OKE TERIMAKASIH" << endl;
	system ("pause");
	return 0;
}

	
	