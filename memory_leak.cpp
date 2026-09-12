// Intentional memory leak for analysis/profiling demonstration
#include <iostream>
using namespace std;
int main() {
    int* numbers = new int[1000];
    for (int i = 0; i < 1000; i++) {
        numbers[i] = i;
    }
    cout << "Dynamic memory allocated." << endl;
    // Intentionally omitted:
    // delete[] numbers;
    cout << "Program finished without freeing memory." << endl;
    return 0;
}
