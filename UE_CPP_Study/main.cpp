#include <iostream>

using namespace std;

class Px {
public:
	int x;
	int y;
	int R;
	int G;
	int B;
	Px() {

	};
	Px(int x, int y, int R, int G, int B) {
		this->x = x;
		this->y = y;
		this->R = R;
		this->G = G;
		this->B = B;
	}
};

class Image {
public:

	void addCarPx(int x, int y, int R, int G, int B) {
		Px tmpPx = Px(x, y, R, G, B);
		CarPx[n] = tmpPx;
		n++;
	}
private:
	int n = 0;
	Px CarPx[];
};

int main() {
	Image CarImg;
	CarImg.addCarPx(0, 0, 123, 123, 132);
}