#include <iostream>


int main() {
    int n;
    std::cin >> n;

    if (n%15 == 0) {
        std::cout << "FizzBuzz";
    } else if (n%5 == 0) {
        std::cout << "Buzz";
    }else if (n%3 == 0) {
        std::cout << "Fizz";
    } else {
        std::cout << n;
    }

    return 0;
}
