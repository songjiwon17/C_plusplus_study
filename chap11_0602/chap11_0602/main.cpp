#include <iostream>
using namespace std;

int main() {
	cout << "dec" << "\t" << "hexa" << "\t" << "char" << "\t";
	cout << "dec" << "\t" << "hexa" << "\t" << "char" << "\t";
	cout << "dec" << "\t" << "hexa" << "\t" << "char" << "\t";
	cout << "dec" << "\t" << "hexa" << "\t" << "char" << endl;

	cout << "---" << "\t" << "---" << "\t" << "---" << "\t";
	cout << "---" << "\t" << "---" << "\t" << "---" << "\t";
	cout << "---" << "\t" << "---" << "\t" << "---" << "\t";
	cout << "---" << "\t" << "---" << "\t" << "---" << endl;

	for (int i = 0; i< 255; i++) {
		cout.fill('.');
		cout << dec << i << "\t" << hex << i << "\t";
		cout << (isprint(i) ? (char)i : '.') << "\t";
		if (i % 4 == 3) {
			cout << endl;
		}
	}
}