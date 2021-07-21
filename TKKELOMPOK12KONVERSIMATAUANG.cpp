#include <stdafx.h>
#include <iostream>

using namespace std;

int main ()
{
	
	double rupiah, dollar, yen ;
	long int pilihan;
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
	getchar();
	cin >> pilihan;
	cin.ignore();
	if (pilihan == 1)
	{
		cout << "                   " << endl;
		cout << "RUPIAH KE DOLLAR" << endl;
		cout << "MASUKKAN NILAI RUPIAH = " ;
		getchar();
		cin >> rupiah;
		cin.ignore();
		dollar = rupiah / 14000;
		cout << "NILAI DALAM DOLLAR = " << dollar << endl;
		getchar();
		system ("pause");
		
	}
	if (pilihan == 2)
	{
		cout << "                   " << endl;
		cout << "DOLLAR KE RUPIAH" << endl;
		cout << "MASUKKAN NILAI DOLLAR = " ;
		getchar();
		cin >> dollar;
		cin.ignore();
		rupiah = dollar*14000;
		cout << "NILAI DALAM RUPIAH = " << rupiah << endl;
		getchar();
		system ("pause");
	}
	if (pilihan == 3)
	{
		cout << "                   " << endl;
		cout <<"RUPIAH KE YEN" << endl;
		cout << "MASUKKAN NILAI RUPIAH = " ;
		getchar();
		cin >> rupiah;
		cin.ignore();
		yen = rupiah*117;
		cout << "NILAI DALAM YEN = " << yen << endl;
		getchar();
		system ("pause");
	}
	if (pilihan == 4)
	{
		cout << "                   " << endl;
		cout << "YEN KE RUPIAH" << endl;
		cout << "MASUKKAN NILAI YEN = ";
		getchar();
		cin >> yen;
		cin.ignore();
		rupiah = yen / 117;
		cout << "NILAI DALAM RUPIAH = " << rupiah << endl;	
		getchar();
	}
	system ("pause");
	return 0;
}

	
	