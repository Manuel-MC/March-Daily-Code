#include <iostream>
using namespace std;
int main() {
	int num;
	bool prime = true;
	cout << "give me a number" << endl;
	cin >> num;
	while (1) {
		prime = true;
		num++;
		for (int i = 2; i < num;i++)
			if (num % i == 0)
				prime = false;

		if (prime) {
			cout << num << " is you first prime number" << endl;
			return 0;
		}


	
	}
}