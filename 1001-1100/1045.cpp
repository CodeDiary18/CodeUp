#include<iostream>
#include<iomanip>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << "\n";
    std::cout << a - b << "\n";
    std::cout << a * b << "\n";
    std::cout << a / b << "\n";
    std::cout << a % b << "\n";
    std::cout << std::fixed<<std::setprecision(2) << (double)a / b;
    return 0;
}
