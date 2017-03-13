#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void BadGuy();
int main() {
	srand((unsigned)time(NULL));
	while (1) {
		BadGuy();

		system("pause");
	} 
}
void BadGuy() {
	int num = rand() % 100;
	if (num <= 50)
		cout << "Goomba!" << endl;
	else if(num > 50 && num<80)
		cout << "Koopa!" << endl;
	else if (num >80 && num<100)
		cout << "Shy guy!" << endl;
}