#include "Data.h"
void Data:: Menu() {
	int luachon;
	while (1) {
		cout << "\n\n\t\tUNG DUNG KHAI BAO Y TE" << endl;
		cout << "Ban la?" << endl;
		cout << "\t1.Nguoi dung" << endl;
		cout << "\t2.Admin" << endl;
		cout << "\t3.Danh gia va thoat" << endl;
		cout << "\nMoi nhap lua chon: ";
		cin >> luachon;
		if (luachon == 1) {
			User x;
			while (1) {
				system("cls");
				cout << "\n\n\t\tCHE DO NGUOI DUNG" << endl<<endl;
				cout << "\t1.Khai bao y te" << endl;
				cout << "\t2.Tra cuu tong so ca mac hien tai" << endl;
				cout << "\t3.Tra cuu khu vuc dang co dich" << endl;
				cout << "\t4.Bao cao ca nghi nhiem" << endl;
				cout << "\t5.Thoat che do nguoi dung" << endl;
				cout << "\nMoi nhap lua chon: ";
				cin >> luachon;
				if (luachon == 1) {
					x.Input();
					x.Output();
					x.Khaibao();
					x.LoTrinh();
					list_user.push_back(x);
					x.Save_info();
					
				}
				else if (luachon == 2) {
					x.Tra_cuu_so_ca_nhiem();
				}
				else if(luachon==3)
				{
					x.Output_area();
				}
				else if(luachon==4)
				{
					Report r;
					cout << "\nNHAP THONG TIN NGUOI KHAI BAO";
					//r.Input();
					//r.Output();
					r.Input_Report();
					r.Output_Report();
					r.Save_Report();
					list_report.push_back(r);
					system("pause");
				}
				else if (luachon == 5) {
					system("cls");
					break;
				}
				else {
					cout << "Ban nhap sai chuc nang. Vui long nhap lai!" << endl;
					
				}
			}
		}
		else if(luachon==2)
		{
			Admin y;
			bool check=0;
			cin.ignore();
			//y.Check_pass();
			do {
				 check=y.Check_pass();
			} while (!check);
			system("pause");
			while (1) {
				system("cls");
				cout << "\n\n\t\tCHE DO ADMIN" << endl<<endl;
				cout << "\t1.Thay doi mat khau" << endl;
				cout << "\t2.Tra cuu tong so ca mac hien tai" << endl;
				cout << "\t3.Tra cuu khu vuc bi dich" << endl;
				cout << "\t4.Xem thong tin tat ca nguoi dung da khai bao y te" << endl;
				cout << "\t5.Tim thong tin nguoi dung " << endl;
				cout << " \t6.Them thong tin nguoi mac covid" << endl;
				cout << "\t7.Them khu vuc bi nhiem covid" << endl;
				cout << "\t8.Cap nhat so ca nhiem hien tai" << endl;
				cout << "\t9.Thoat che do Admin" << endl;
				cout << "\nMoi nhap lua chon: ";
				cin >> luachon;
				if (luachon == 1) {
					cin.ignore();
					if (y.Change_pass()) cout << "Thay doi mat khau thanh cong" << endl;
					else cout << "Thay doi mat khau khong thanh cong";
				}
				else if (luachon == 2) {
					y.Tra_cuu_so_ca_nhiem();
				}
				else if (luachon == 3) {
					y.Output_area();
				}
				else if(luachon==4)
				{
					y.Output_declarations();
				}
				else if (luachon == 5) {
					string id;
					cout << "Moi nhap so CMND: ";
					cin.ignore();
					getline(cin, id);
					y.Find_id(id);
				}
				else if (luachon == 6) {
					User z;
					z.Input();
					z.Output();
					z.Khaibao();
					z.LoTrinh();
					list_user.push_back(z);
					z.Save_info();
				}
				else if(luachon==7)
				{
					cin.ignore();
					y.Input_area();
				}
				else if(luachon==8)
				{
					y.Update_infections();
				}
				else if(luachon==9)
				{
					system("cls");   
					break;
				}
				else {
					system("cls");
					cout << "Ban nhap sai chuc nang. Vui long nhap lai!" << endl;
				}

			}
		
	

		}
		else if (luachon == 3) {
		Evaluate();
		exit(0);
}
		else {
		system("cls");
		cout << "Ban nhap sai chuc nang. Vui long nhap lai!" << endl;

}
	}
}
void Data:: Evaluate() {
	int n;
	string s;
	fstream file;
	system("cls");
	cout << "\nDanh gia cua ban ve ung dung(1->10): ";
	cin >> n;
	cout << "\nBan co gop y gi de cai thien ung dung khong: ";
	cin.ignore();
	getline(cin, s);
	file.open("evaluate.txt", ios::app);
	file << n << " / " << s << endl;
	cout << "\n\tCAM ON BAN!!!!" << endl;
	system("pause");
}
Data::Data() {

}
Data:: ~Data() {

}
