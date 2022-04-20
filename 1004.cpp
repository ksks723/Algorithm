#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	for (; t--;) {
		int sx, sy, dx, dy;
		int n;
		int ans = 0;
		cin >> sx >> sy >> dx >> dy >> n;
		
		for (int i = 0; i < n; i++) {
			int x, y, r;
			cin >> x >> y >> r;
			int cnt = 0;
			int dist = (sx - x) * (sx - x) + (sy - y) * (sy - y);
			if (dist <= r * r) {
				cnt += 1;
			}
			dist = (dx - x) * (dx - x) + (dy - y) * (dy - y);
			if (dist <= r * r) {
				cnt += 1;
			}
			if (cnt == 1) { // 출발 또는 도착 지점 중 한점만 원에 속함
				ans += 1;
			}

		}
		cout << ans << "\n";
	}
}
