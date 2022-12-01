#include <iostream>
#include <string>

int main()
{
	std::string twenty_seven = "0123456789ABCDEFGHIJKLMNOPQ";
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz ";

	std::string enter;
	std::cin >> enter;

	int n = 2;

	for (int i = 0; i < enter.length(); i++) {
		int ind = twenty_seven.find(enter[i]) - n;
		while (ind < 0) {
			ind += 27;
		}
		std::cout << alphabet[ind];
		n++;
	}
	return 0;
}