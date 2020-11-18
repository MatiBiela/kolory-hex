#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int red = 0xff0000;
	int green = 0x00ff00;
	int blue = 0x0000ff;
	
	int kolor = 0x123456;
	

	cout << hex << ((kolor & 0xff0000) >> 16) << " czerwonego"<< endl;
	cout << hex << ((kolor & 0x00ff00) >> 8) << " zielonego" << endl;
	cout << hex << (kolor & 0x0000ff) << " niebieskiego";

	


	
	return 0;
}
