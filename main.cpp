#include <iostream>
using namespace std;

// クラステンプレート定義とMin()
template <typename T1, typename T2>
class Minimum {
private:
	T1 a;
	T2 b;

public:
	Minimum(T1 value1, T2 value2) : a(value1), b(value2) {}

	auto Min() -> decltype((a < b) ? a : b) {
		return (a < b) ? a : b;
	}
};

int main() {
	// int, float, double のすべての組み合わせ (3+3c2=6のパターン)
	Minimum<int, float> numbers1(3, 4.5f);
	Minimum<int, double> numbers2(3, 4.5);
	Minimum<float, int> numbers3(4.5f, 3);
	Minimum<float, double> numbers4(4.5f, 4.4);
	Minimum<double, int> numbers5(4.5, 5);
	Minimum<double, float> numbers6(4.4, 4.5f);

	// output 
	cout << "Min(int, float): " << numbers1.Min() << endl;
	cout << "Min(int, double): " << numbers2.Min() << endl;
	cout << "Min(float, int): " << numbers3.Min() << endl;
	cout << "Min(float, double): " << numbers4.Min() << endl;
	cout << "Min(double, int): " << numbers5.Min() << endl;
	cout << "Min(double, float): " << numbers6.Min() << endl;

	return 0;
}
