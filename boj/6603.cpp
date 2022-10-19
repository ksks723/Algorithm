#include <iostream>
#include <vector>
using namespace std;

int S[13];
int lotto[6];
int k;

void fun(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			cout << lotto[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = start; i < k; i++) {
		lotto[depth] = S[i];
		fun(i+1, depth+1);
	}
}
int main(void) {
	while (1) {
		cin >> k;
		if (k == 0) break;
		for (int i = 0; i < k; i++) {
			cin >> S[i];
		}
		fun(0, 0);
		cout << endl;
	}
}
