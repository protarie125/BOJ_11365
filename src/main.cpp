#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string x;
	getline(cin, x);
	while ("END" != x) {
		reverse(x.begin(), x.end());

		cout << x << '\n';

		getline(cin, x);
	}

	return 0;
}