#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, counter_error = 0, number_string = 0, minimumHammingString = 0,
		arrCount = 0, counter = 3;
	string accepted_string, possible_string;
	ifstream input("input.txt");
	input >> accepted_string;
	input >> n;
	int minimumHamming = accepted_string.size(); vector<int> stringMinHam(n + 1);
	for (int i = 1; i <= n; i++) {
		number_string++; counter_error = 0;
		while (input >> possible_string)
		{
			if (counter < counter++) {
				input >> possible_string;
			}
		} counter++;
		for (int j = 0; j < accepted_string.size(); j++) {
			if (accepted_string[j] != possible_string[j]) {
				counter_error++;
			}
		}
		if (counter_error < minimumHamming) {
			stringMinHam[0] = i;
			minimumHamming = counter_error;
		}
		else if (counter_error == minimumHamming) {
			arrCount++;
			stringMinHam[arrCount] = i; minimumHamming = counter_error;
		}
	}
	ofstream output("output.txt");
		if (n > 0) {
			for (int k = 0; k <= n; k++) {
				if (stringMinHam[k] != 0) {
					minimumHammingString++;
				}
			}
			output << minimumHammingString; for (int k = 0; k <= n; k++) {
				if (stringMinHam[k] != 0) {
					output << stringMinHam[k]; output << " ";
				}
			}
		}
	return 0;
}