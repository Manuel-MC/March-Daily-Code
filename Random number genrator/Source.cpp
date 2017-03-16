#include <iostream>
#include <ctime> 
#include <cstdlib> 
	using namespace std;
	
	int main() {

		srand(time(NULL));

		float avg = 0;
		int max = 0;
		for (float i = 0;i <= 100;i++) {
			float num = rand() % 1000 + 1;
			cout << num << endl;
			avg = avg + num;
			if (num > max) {
				max = num;
			}
		}
		avg = avg / 100;
			cout << "average" << avg << endl;
		cout << " The max is" << max << endl;
	}