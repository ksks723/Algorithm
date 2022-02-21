#include <iostream>
using namespace std;
void fast_io(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int fun(int n, int r, int c){
	if(n==0)
		return 0;
	int half = 1 << (n - 1);
	cout << half << " half \n";
	if (r < half && c < half)
		return fun(n - 1, r, c);
	if (r < half && c >= half)
		return half*half + fun(n - 1, r, c-half);
	if (r >= half && c < half)
		return 2*half*half+fun(n - 1, r-half, c);
	return 3 * half * half + fun(n - 1, r - half, c - half);
}

int main(void)
{
	fast_io();
	int n, r, c;
	cin >> n >> r >> c;
	cout << fun(n, r, c);
}