#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Hello from my_tool!" << std::endl;
    
    // Parse command line arguments
    for (int i = 1; i < argc; ++i) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
    
    return 0;
}