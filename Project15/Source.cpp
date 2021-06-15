#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	string s;
	int k = 0;
	ifstream file("24-j5 (1).txt");
	file >> s;
	file.close();
	for (int i = 0; i < size(s); i++) {
		if (s[i] == 'O' && s[i + 1] == 'C' && s[i + 2] == 'K') {
			if (s[i - 1] == 'T' && s[i - 2] == 'S') {

			}
			else {
				k++;
			}
		}
	}
	cout << k;

	return 0;
}