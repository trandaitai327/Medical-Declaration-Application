#include "Person.h"

void Person::Output_area() {
	fstream file;
	int i = 0;
	string a, temp1, temp2;
	file.open("epidemic_area.txt");
	cout << "Cac khu vuc dang co dich:" << endl;
	while (!file.eof()) {
		temp1.erase(0, 100);
		temp2.erase(0, 100);
		getline(file, temp1, ' ');
		getline(file, temp2, '\n');
		temp1.append(1, ' ');
		temp1 += temp2;
		cout << temp1 << endl;
		i++;
	}
	system("pause");

}
void Person::Tra_cuu_so_ca_nhiem() {
	fstream file;
	int n;
	file.open("total_infections.txt");
	file >> n;
	cout << "Tong so ca nhiem hien tai: " << n << endl;
	file.close();
	system("pause");
}
Person::Person() {
}
Person::~Person() {

}

