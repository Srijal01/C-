// Illustration of function template
#include <iostream>
#include <cstring> // Use cstring for string operations

using namespace std;

template <class T>
T max(T a, T b) {
    return (a > b ? a : b);
}

// For string data types
char *max(char *a, char *b) {
    if (strcmp(a, b) > 0)
        return a;
    else
        return b;
}

int main() {
    int i1 = 15, i2 = 20;
    cout << "Greater is " << max(i1, i2) << endl;

    long l1 = 40000, l2 = 38000;
    cout << "Greater is " << max(l1, l2) << endl;

    float f1 = 55.05, f2 = 67.777;
    cout << "Greater is " << max(f1, f2) << endl;

    char c1 = 'a', c2 = 'A';
    cout << "Greater is " << max(c1, c2) << endl;

    char str1[] = "apple", str2[] = "zebra";
    cout << "Greater is " << max(str1, str2) << endl;

    return 0;
}

