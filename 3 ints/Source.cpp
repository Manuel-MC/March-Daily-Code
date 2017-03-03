#include <iostream>
using namespace std;
void pancake(int pan1, int pan2, int pan3);
int main() {
int num1;
int num2;
int num3;
	cout << "Pick three numbers" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	pancake( num1, num2, num3);
	

}
void pancake(int pan1, int pan2, int pan3) {
	if ((pan1 > pan2) && (pan1 > pan3) && (pan2 > pan3))
		cout << pan1 << pan2 << pan3 << endl;
	else if ((pan2 > pan1) && (pan2 > pan3) && (pan1 > pan3))
		cout << pan2 << pan1 << pan3 << endl;
	else if ((pan3 > pan1) && (pan3 > pan2) && (pan2 > pan1))
		cout << pan3 << pan2 << pan1 << endl;

}

