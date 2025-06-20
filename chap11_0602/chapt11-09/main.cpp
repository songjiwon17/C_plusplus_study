#include <iostream>
#include <string>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator >> (istream& in, Phone& ob);
	friend ostream& operator << (ostream& out, Phone ob);
};

istream& operator >> (istream& in, Phone& ob) {
	cout << "이름: ";
	getline(in, ob.name);
	cout << "전화번호: ";
	getline(in, ob.telnum);
	cout << "주소: ";
	getline(in, ob.address);

	return in;
}

ostream& operator << (ostream& out, Phone ob) {
	out << "(" << ob.name << "," << ob.telnum << "," << ob.address << ")" << endl;
	return out;
}

int main() {
	Phone girl, boy;

	cin >> girl >> boy; // >>(cin, girl)
	cout << girl << boy; // >>(cout, girl)
}