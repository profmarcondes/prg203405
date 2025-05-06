#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>

using namespace std;

int main (int argc, char* argv[]) {

	vector<int> numbers;

	/*cout << "Quantos numeros deseja inserir? ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cout << "Digite o numero " << i + 1 << ": ";
		cin >> num;
		numbers.push_back(num);
	}*/

	cout << "Entre com a lista de numeros que deseja inserir: ";
	string line;
	getline(cin, line);
	stringstream ss(line);
	int value;
	do {
		ss >> value;
		if (!ss.fail()) {
			numbers.push_back(value);
		} else {
			ss.clear();
			ss >> line;
			cout << "invalid value -> " << line << endl;
		}
	} while(!ss.eof());

	cout << "Os numeros inseridos foram: ";
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;

	cout << "O menor numero da lista e: " << *min_element(numbers.begin(), numbers.end()) << endl;
	cout << "O maior numero da lista e: " << *max_element(numbers.begin(), numbers.end()) << endl;
	cout << "A soma dos numeros e: " << accumulate(numbers.begin(), numbers.end(), 0) << endl;

	auto var = 2.5;

	sort(numbers.begin(), numbers.end());
	cout << "A lista ordenada e: ";
	for(auto i : numbers) {
		cout << i << " ";
	}
	cout << endl;

	cout << "A lista ordenada em ordem decrescente e: ";
	//vector<int>::reverse_iterator rit;
	for(auto rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
		cout << *rit << " ";
	}
	cout << endl;

	cout << "arr = ";
	for(auto i : {2, 4, 6, 8, 10}) {
		cout << i << " ";
	}

	cout << endl;
	return 0;
}
