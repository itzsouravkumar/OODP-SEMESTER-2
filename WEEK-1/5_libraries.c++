#include <iostream>
#include <iomanip>  // Required library for formatting
using namespace std;

class Formatter {
public:
    void printFormattedNumbers() {
        double num1 = 45.6789;
        double num2 = 0.00034567;
        int num3 = 255;
        double num4 = 987.654321;
        double num5 = -123.456;

        // (a) Print number 45.6789 in a field of width 10, right-justified, with three decimal places
        cout << setw(10) << fixed << setprecision(3) << num1 << endl;

        // (b) Display 0.00034567 in scientific notation with six decimal places
        cout << scientific << setprecision(6) << num2 << endl;

        // (c) Print decimal 255 as a hexadecimal number in uppercase format
        cout << hex << uppercase << num3 << endl;

        // (d) Print 987.654321 as a fixed-point number rounded to four decimal places
        cout << fixed << setprecision(4) << num4 << endl;

        // (e) Display -123.456 as an exponential with four decimal spaces
        cout << scientific << setprecision(4) << num5 << endl;
    }
};

int main() {
    Formatter fmt;
    fmt.printFormattedNumbers();
    return 0;
}
