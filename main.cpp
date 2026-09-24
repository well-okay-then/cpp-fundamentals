#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::map<std::string, int> seen;
    std::istringstream iss(line);
    std::string word;
    while (iss >> word) seen[word]++;

    std::cout << seen.size()<< "\n";

    //for(const auto& entry : seen){
    //    std::cout << entry.first << " " << entry.second << "\n";
    //}
    // Print seen.size().
    return 0;
}
