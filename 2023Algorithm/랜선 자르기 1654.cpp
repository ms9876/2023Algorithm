#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int k, n;
long long num_n, low, high, mid, res;
long long imax, result;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> num_n;
		v.push_back(num_n);

		if (imax < v[i])
			imax = v[i];
	}
	low = 1;
	// 1. 정렬에서 가장 뒤에 있는 것.
	// 2. 입력받으면서 가장 높은 값을 저장.
	high = imax;
	while (low <= high) {
		mid = (low + high) / 2; // 랜선을 분환할 단위
		res = 0;
		for (int i = 0; i < k; i++) {
			res += v[i] / mid;
		}

		if (res >= n) { // 더 많이 잘랐을 때
			low = mid + 1; 
			if (result < mid) {
				result = mid;
			}
		}
		else { // 적게 잘랐을 때
			high = mid - 1;
		}
		/*if (cnt == n) {
			break;
		}*/
	}
	cout << result << "\n";
	//cout << mid;
}