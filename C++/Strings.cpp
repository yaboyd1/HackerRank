#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string s1, s2;
    cin >> s1 >> s2;

    printf("%d %d \n", s1.size(), s2.size());
    printf("%s \n", (s1 + s2).c_str());

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s \n", s1.c_str(), s2.c_str());
    return 0;
}