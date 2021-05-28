#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream SS(str);
	vector<int> output;

	char delimiter;
	int i;
	SS >> i;
	for (output.push_back(i); SS >> delimiter >> i; output.push_back(i));
	return output;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i = 0; i < integers.size(); i++)
		cout << integers[i] << "\n";
	return 0;
}