#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	auto a = vvi(n, vi(m, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int x;
			cin >> x;

			a[i][j] += x;
		}
	}

	for (const auto& v : a) {
		for (const auto& x : v) {
			cout << x << ' ';
		}
		cout << '\n';
	}

	return 0;
}