#include "Admin.h"
void Admin::set_pass(string pass) {

	password = pass;

}
string Admin::get_pass() {
	return this->password;
}
bool Admin::Change_pass() {
	fstream file;
	file.open("pass.txt", ios::out);
	string c, b;
	cout << "Nhap lai mat khau: ";
	getline(cin, c);
	if (c == get_pass()) {
		cout << "Mat khau moi: ";
		getline(cin, b);
		password = b;
		file << password;
		file.close();
		cout << "Thay doi mat khau thanh cong!!!" << endl;
		system("pause");
		return 1;
	}
	else return 0;
}
void Admin::Input_pass() {
	fstream file;
	string c;
	file.open("pass.txt");
	file >> c;
	password = c;
}
bool Admin::Check_pass() {
	Input_pass();
	string c, b;
	cout << "Nhap mat khau: ";
	getline(cin, c);
	if (c == password) {
		cout << "Hello Admin!!! " << endl;
		return 1;
	}
	else {
		cout << "Nhap sai mat khau =)) " << endl;
		return 0;
	}


}
void Admin::Update_infections() {
	fstream file;
	int n;
	file.open("total_infections.txt",ios::out);
	cout << "Cap nhat so ca nhiem hien tai: ";
	cin >> n;
	file << n;
	file.close();
	cout << "Cap nhat thanh cong!!!" << endl;
	system("pause");
}
void Admin::Output_declarations(){
	fstream file;
	file.open("total_declarations.txt");
	string a, temp1, temp2;
	int b;
	int i = 1;
	char* c = new char;
	while (!file.eof())
	{
		file >> a;
		if (file.eof()) break;
			cout << "\n\tTHONG TIN NGUOI THU " <<i<< endl;
			cout << "CMND: " << a << endl;
			//file >> a;
			temp1.erase(0, 100);
			getline(file, temp1, ';');
			temp1.erase(0, 1);
			temp1 = ' ' + temp1;
			cout << "Ho va ten:" << temp1 << endl;
			file >> b;
			cout << "Nam sinh: " << b << endl;
			//file >> a;
			temp1.erase(0, 100);
			getline(file, temp1, ';');
			temp1.erase(0, 1);
			temp1 = ' ' + temp1;
			cout << "Dia chi: " << temp1 << endl;
			file >> a;
			cout << "SDT: " << a << endl;
			file >> b;
			cout << "Tong cac trieu chung: " << b << endl;
			file >> b;
			cout << "Lo trinh di chuyen trong "<<b<< " ngay" << endl;
			temp1.erase(0, 100);
			for (int i = 0; i < b; i++) {
				temp1.erase(0, 1);
				getline(file, temp1, ';');
				//cout << "ha" << endl;
				//temp1.erase(0, 1);
				cout <<temp1 << endl;
				temp1.erase(0, 100);
			}
			file >> a;
			i++;
			
		
	}
	system("pause");
}
void Admin::Find_id(string id) {
	fstream file;
	file.open("total_declarations.txt");
	string a, temp1, temp2;
	int b;
	char* c = new char;
	while (!file.eof())
	{
		file >> a;
		if (a == id) {
			cout << "\n\t TRA CUU THONG TIN " << endl;
			cout << "CMND: " << a << endl;
			//file >> a;
			temp1.erase(0, 100);
			getline(file, temp1, ';');
			temp1.erase(0, 1);
			temp1 = ' ' + temp1;
			cout << "Ho va tem:" << temp1 << endl;
			file >> b;
			cout << "Nam sinh: " << b << endl;
			/*getline(file, temp1, ' ');
			getline(file, temp2, '\n');
			temp1.append(1, ' ');
			temp1 += temp2;
			temp1.erase(0, 1);*/
			//file >> a;
			temp1.erase(0, 100);
			getline(file, temp1, ';');
			temp1.erase(0, 1);
			temp1 = ' ' + temp1;
			cout << "Dia chi: " << temp1 << endl;
			file >> a;
			cout << "SDT: " << a << endl;
			file >> b;
			cout << "Tong cac trieu chung: " << b << endl;
			file >> b;
			cout << "Lo trinh di chuyen trong " << b << " ngay" << endl;
			temp1.erase(0, 100);
			for (int i = 0; i < b; i++) {
				getline(file, temp1, ';');
				//cout << "ha" << endl;
				//temp1.erase(0, 1);
				cout << temp1 << endl;
				temp1.erase(0, 100);
				
			}
			system("pause");
			return;

		}
	}
	cout << "Khong tim thay thong tin" << endl;
	system("pause");
}

void Admin::Input_area() {
	fstream file;
	file.open("epidemic_area.txt", fstream::app);
	string area, area_file;
	//bool flag=0;
	cout << "Nhap ten vung dich:";
	getline(cin, area);
	file << area << endl;
	cout << "Thanh cong!!!" << endl;
	system("pause");
}
Admin::Admin() {
	fstream file;
	int c;
	file.open("pass.txt");
	file >> c;
	password = c;

}
Admin::~Admin() {

}
