#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int size;
	scanf("%d", &size);

	int array[size];

	int x;
	for (int i = 0; i < size && cin >> x; ++i) 
		array[i] = x;
	for (int i = size - 1; i >= 0; --i)
		printf("%d ", array[i]);
	return 0;
}
