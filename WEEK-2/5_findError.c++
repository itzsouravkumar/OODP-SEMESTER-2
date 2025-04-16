#include<iostream>
#include <cmath>

// int main() {
//     double pi = 3.14159;
//     int approx_pi = (int)pi + 0.5;
//     std::cout << approx_pi;
//     return 0;
// }

// Correct Rounding Approach
int main() {
    double pi = 3.14159;
    int approx_pi = round(pi);
    std::cout << approx_pi;
    return 0;
}