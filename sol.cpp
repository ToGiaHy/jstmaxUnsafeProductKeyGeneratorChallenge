


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generateRandomKey() {
    std::string key;
    std::string local_58("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    
    for (int i = 0; i < 20; i++) {
        key += local_58[rand() % local_58.length()];
    }
    
    return key;
}

int main() {
    srand(time(NULL)); // Seed the random number generator
    std::string key = generateRandomKey();
    std::cout << "Generated Product Key: " << key << std::endl;
    return 0;
}
