#pragma once
#include "User.h"
#include "Symptom.h"
void User::Input() {
	cout << "\n\n\t\tNHAP THONG TIN" << endl;
	cin.ignore();
	cout << "Nhap ho va ten: ";
	getline(cin, hoten);
	do {
		cout << "Nhap nam sinh: ";
		cin >> namsinh;
	} while (namsinh < 1900 || namsinh>2022);
	cin.ignore();
	cout << "Nhap CMND: ";
	getline(cin, cmnd);
	fflush(stdin);
	cout << "Nhap dia chi hien tai: ";
	getline(cin, diachi);
	fflush(stdin);
	cout << "Nhap so dien thoai: ";
	getline(cin, sdt);
}
void User::Output() {
	cout << "\n\n\t\tXUAT THONG TIN" << endl;
	cout << "Ho va ten: " << hoten << endl;
	cout << "Nam sinh: " << namsinh << endl;
	cout << "CMND: " << cmnd << endl;;
	cout << "Dia chi hien tai: " << diachi << endl;
	cout << "So dien thoai: " << sdt << endl;
}
void User::Khaibao() {
	string c;
	cout << "\nBan co bi ho khong(y/n): ";
	//cin.ignore();
	getline(cin, c);
	if (trieuchung.Answer(c)) trieuchung.set_Ho(1);
	else  trieuchung.set_Ho(0);
	cout << "Ban co bi sot khong(y/n): ";
	//cin.ignore();
	getline(cin, c);
	if (trieuchung.Answer(c)) trieuchung.set_Sot(1);
	else  trieuchung.set_Sot(0);
	cout << "Ban co bi met khong(y/n): ";
	//cin.ignore();
	getline(cin, c);
	if (trieuchung.Answer(c)) trieuchung.set_Metmoi(1);
	else  trieuchung.set_Metmoi(0);
	cout << "Ban co bi kho tho khong(y/n): ";
	//cin.ignore();
	getline(cin, c);
	if (trieuchung.Answer(c)) trieuchung.set_Khotho(1);
	else  trieuchung.set_Khotho(0);
	cout << "Ban co bi tuc nguc khong(y/n): ";
	//cin.ignore();
	getline(cin, c);
	if (trieuchung.Answer(c)) trieuchung.set_Tucnguc(1);
	else  trieuchung.set_Tucnguc(0);
	cout << "May ngay gan day ban co di toi vung dich hay khong(y/n): ";
	//cin.ignore();
	getline(cin, c);
	if (trieuchung.Answer(c)) trieuchung.set_Vungdich(1);
	else  trieuchung.set_Vungdich(0);
	sum_trieuchung = trieuchung.get_Ho() + trieuchung.get_Sot() + trieuchung.get_Metmoi() + trieuchung.get_Khotho() + trieuchung.get_Tucnguc() + trieuchung.get_Vungdich();
	if (sum_trieuchung > 2) {
		cout << "\nBan nen di xet nghiem covid 19" << endl;
	}
	cout << "\nBan phai tiep tuc khai bao lo trinh di chuyen may ngay gan day";


}
void User::LoTrinh() {
	//int n;
	cout << "\n\n\t\tKHAI BAO LO TRINH DI CHUYEN" << endl;
	cout << "Nhap so ngay: ";
	cin >> songay;
	cin.ignore();
	for (int i = 1; i <= songay; i++) {
		hanhtrinh[i].Nhap();

	}
	cout << endl;
	/*for (int i = 1; i <= songay; i++) {
		hanhtrinh[i].Xuat();
	}*/
	cout << "Khai bao hoan tat" << endl;
	system("pause");
}
void User::Readsum() {
	fstream file;
	int n, sum;
	file.open("total_declarations.txt", ios::out | ios::in);
	file >> n;
	file.close();
	sum = n + 1;
	cout << sum << endl;
	file.open("total_declarations.txt", ios::out);
	file << sum << endl;
	file.seekg(0, ios::end);
	file.close();
}
void User::Save_info() {
	//User::Readsum();
	fstream file;
	file.open("total_declarations.txt", fstream::app);
	file << cmnd << endl;
	file << hoten <<";"<< endl;
	file << namsinh << endl;
	//file << cmnd << endl;
	file << diachi << ";"<<endl;
	file << sdt << endl;
	file << sum_trieuchung << endl;
	int n = songay;
	file <<songay << endl;
	while (n>0)
	{
		file << hanhtrinh[n].get_ngay() << ":" << hanhtrinh[n].get_diadiem() << ";";
		n--;
	}
	file << "\n---" << endl;


}

