#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float volume, sisi, tinggi, Lp, Ka, rumus;
	
	cout << "Menghitung Volume dan Luas Permukaan Hexagonal" << endl;
	cout << "Masukkan sisi :";
	cin >> sisi;
	cout << "Masukkan tinggi : ";
	cin >> tinggi;
	cout << "\n";

	Ka = 6 * sisi;
	rumus = (2.598 * sisi * sisi);
	volume = rumus * tinggi;
	Lp = (2 * rumus) + (Ka * tinggi);
	
	cout << "Hasil Perhitungan" << "\n" << "Volume Hexagonal adalah = " << volume << "\n" << "Luas Permukaan Hexagonal adalah = " << Lp << endl;
	
	return 0;
}
