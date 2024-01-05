#include <stdio.h>

class GuguGame {
private:
	int from;
	int to;
public:
	GuguGame() { set(1, 9); }
	~GuguGame() {}
	void set(int f, int t) { from = f; to = t; }
	void play(int dan) {
		for (int i = from; i <= to; i++) {
			for (int j = dan; j <= dan + 3; j++) {
				printf("%2d x %2d = %2d\t", j, i, j * i);
			}
			printf("\n");
		}
	}
};
void main() {
	//객체지향적 프로그래밍
	printf("[객체지향적 프로그래밍]\n");
	printf("[구구단 2~9단]\n");
	GuguGame myGame;
		myGame.play(2);
	printf("\n");
		myGame.play(6);
}