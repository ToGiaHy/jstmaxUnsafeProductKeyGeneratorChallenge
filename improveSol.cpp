#include <iostream>
#include <string>
#include <random>

std::string generateRandomKey() {
    static const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> distr(0, CHARACTERS.length() - 1);

    std::string key;
    key.reserve(20); // Prevents unnecessary reallocations

    for (int i = 0; i < 20; i++) {
        key += CHARACTERS[distr(gen)];
    }

    return key;
}

int main() {
    std::string key = generateRandomKey();
    std::cout << "Generated Product Key: " << key << std::endl;
    return 0;
}

