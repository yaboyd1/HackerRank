#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int num_rows, num_questions;
	scanf("%d %d", &num_rows, &num_questions);

	vector<vector<int>> V(num_rows);

	int num_columns;
	for (int i = 0; i < num_rows; ++i) {
		scanf("%d", &num_columns);
		V[i].reserve(num_columns);
		for (int j = 0; j < num_columns; ++j)
			cin >> V[i][j];
	}

	int row, column;
	for (int i = 0; i < num_questions; ++i) {
		scanf("%d %d", &row, &column);
		printf("%d \n", V[row][column]);
	}
	return 0;
}