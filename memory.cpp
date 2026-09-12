#include <iostream>
using namespace std;
int main() {
    int* number = new int;
    *number = 100;
    cout << "Stored value: " << *number << endl;
    delete number;
    number = nullptr;
    cout << "Memory successfully released." << endl;
    return 0;
}
