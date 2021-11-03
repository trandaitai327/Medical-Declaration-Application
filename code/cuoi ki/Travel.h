#pragma once
#include<iostream>
#include<string>
using namespace std;
class Travel
{
private:
	string ngay;
	string diadiem;
public:
	void Nhap() {
		cout << "Ngay: ";
		getline(cin, ngay);
		cout << "Dia diem: ";
		fflush(stdin);
		getline(cin, diadiem);
	}
	void Xuat() {
		cout << "Ngay: " << ngay << endl;
		cout << "Dia diem: " << diadiem << endl;
	}
	string get_ngay() {
		return this->ngay;
	}
	string get_diadiem(){
		return this->diadiem;
	}

};



