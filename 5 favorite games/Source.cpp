#include <iostream>
#include <string>
using namespace std;
int main() {
	string games[4];
	for (int i = 0; i < 4; i++) {
		getline(cin, games[i]);
	}
	for (int i = 0; i < 4; i++) {
		if (games[i].compare("FIFA")) {
			cout << games[i] << "Thats Dumb" << endl;
		}
		else
			cout << games[i] << "Haha NiCe" << endl;
	}
}