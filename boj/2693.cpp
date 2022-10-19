#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int testCase;
	cin >> testCase;

	vector<int> arr;
	int input;
	for (int i = 0; i < testCase; i++) {
		for (int k = 0; k < 10; k++) {
			cin >> input;
			arr.push_back(input);
		}
		sort(arr.begin(), arr.end());
		cout << arr[7] << "\n";
		arr.clear();
	}

	return 0;

}
