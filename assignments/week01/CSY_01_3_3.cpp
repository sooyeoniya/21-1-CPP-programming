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
	//��ü������ ���α׷���
	printf("[��ü������ ���α׷���]\n");
	printf("[������ 2~9��]\n");
	GuguGame myGame;
		myGame.play(2);
	printf("\n");
		myGame.play(6);
}