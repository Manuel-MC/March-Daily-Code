#include <iostream>
using namespace std;
int num = 0;
int num2;
int main() {
	cout << "pick 3 numbers" << endl;


	for (int i = 0; i <= 2;i++) {
		cin >> num2;
		if (num2>num) {
			num = num2;


		}

	}
		

	cout <<"your biggest number is " <<num2<<endl;

}

