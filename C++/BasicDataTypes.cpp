#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	// Complete the code.
	int Integer;
	long int LongInteger;
	char Character;
	float Float;
	double Double;

	scanf("%d %ld %c %f %lf", &Integer, &LongInteger, &Character, &Float, &Double);
	printf("%d\n%ld\n%c\n%f\n%lf", Integer, LongInteger, Character, Float, Double);
	return 0;
}