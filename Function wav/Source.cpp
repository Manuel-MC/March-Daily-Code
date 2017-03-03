#include <iostream>
#include <Windows.h>
using namespace std;
void song(int sound);
int main() {
	int sound;
	cout << "Which sound do you want to play" << endl;
	cin >> sound;
	 song (sound);
}
void song(int sound) {
	switch (sound) {
	case 1:
		PlaySound("FART.wav", NULL, SND_FILENAME);
		break;
	case 2:
		PlaySound("FART.wav", NULL, SND_FILENAME);
		break;
	}
	}

}


