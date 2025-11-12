#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cout << "Введіть кількість елементів у масиві: ";
	cin >> n;

	vector<int> arr(n);

	cout << "Введіть " << n << " цілих чисел: ";
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	cout << "Відсортований масив: ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
