#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int intVar;
    long longVar;
    char charVar;
    float floatVar;
    double doubleVar;
    
    cin >> intVar;
    cin >> longVar;
    cin >> charVar;
    cin >> floatVar;
    cin >> doubleVar;
    
    cout << intVar << '\n';
    cout << longVar << '\n';
    cout << charVar << '\n';
    cout << fixed << setprecision(3) << floatVar << '\n';
    cout << fixed << setprecision(9) << doubleVar;

    return 0;
}
