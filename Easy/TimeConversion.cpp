#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
	int time = stoi(s.substr(0, 2));
	string result;
	if (s[s.size() - 2] == 'P' && time != 12) {
		result = to_string(time + 12) + s.substr(2, s.size() - 4);
	} else if (s[s.size() - 2] == 'A' && time == 12) {
		result = to_string(time) + s.substr(2, s.size() - 4);
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
