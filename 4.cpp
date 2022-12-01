#include <iostream>
#include <fstream>
using namespace std;
unsigned SummDigits(unsigned k) {
	unsigned r = 0; while (k) {
		r += k % 10;
		k /= 10;
	}
	return r;
}
int main()
{
	ifstream file("input.txt"); ofstream out("output.txt");
	int n, d = 1, t = 1; file >> n;
	while (d <= n / d) {
		if (!(n % d)) {
			if (SummDigits(t) < SummDigits(d))
				t = d; else
				if (SummDigits(t) == SummDigits(d)) t = t < d ? t : d;
			if (SummDigits(t) < SummDigits((n / d))) t = (n / d);
			else
				if (SummDigits(t) == SummDigits((n / d))) t = t < d ? t : (n / d);
		}
		++d;
	}
	out << t;
}
