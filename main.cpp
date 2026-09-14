#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::getline(std::cin, s);   // reads the WHOLE line, spaces included

    std::reverse(s.begin(), s.end());

    std::cout << s << '\n';      // prints s exactly as it stands right now;
                                 // reverse s above and this prints the answer
    return 0;
}
