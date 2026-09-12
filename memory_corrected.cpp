#include <iostream>
using namespace std;
int main() {
    int* numbers = new int[1000];
    for (int i = 0; i < 1000; i++) {
        numbers[i] = i;
    }
    cout << "Dynamic memory allocated." << endl;
    delete[] numbers;
    numbers = nullptr;
    cout << "Dynamic memory successfully released." << endl;
    return 0;
}
