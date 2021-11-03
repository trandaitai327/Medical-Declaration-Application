#include "Report.h"
void Report::Input_Report() {
	cin.ignore();
	cout << "\n\nNhap ho va ten: ";
	getline(cin, hoten);
	cout << "Nhap so cmnd: ";
	getline(cin, cmnd);
	cout << "\n\tTRINH BAO THONG TIN" << endl;
	cout << "Ten doi tuong nghi nhiem(neu biet): ";
	getline(cin, ten_doituong);
	//cin.ignore();
	cout << "Dac diem nhan dang: ";
	getline(cin, dacdiem);
	//cin.ignore();
	cout << "Khu vuc nhin thay: ";
	getline(cin, khuvuvnhinthay);
	//cin.ignore();
	cout << "Dau hieu kha nghi: ";
	getline(cin, dauhieukhanghi);


}
void Report::Output_Report() {
	cout << "\n\tTHONG TIN NGUOI NGHI NHIEM" << endl;
	cout << "\nTen doi tuong nghi nhiem: " << ten_doituong << endl;
	cout << "Dac diem nhan dang: " << dacdiem << endl;
	cout << "Khu vuc nhin thay: " << khuvuvnhinthay << endl;;
	cout << "Dau hieu kha nghi: " << dauhieukhanghi << endl;
	cout << "\nTrinh bao thanh cong!!!" << endl;
}
void Report::Save_Report() {
	fstream file;
	file.open("report.txt", ios::app);
	file << cmnd << endl;
	file << hoten << ";" << endl;
	//file << sdt << endl;
	//file << diachi << ";" << endl;
	file << ten_doituong << ";" << endl;
	file << dacdiem << ";" << endl;
	file << dauhieukhanghi << ";" << endl;
	file << khuvuvnhinthay << ";" << endl;
	file << "---"<<endl;
}
Report::Report() {

}
Report::~Report() {

}