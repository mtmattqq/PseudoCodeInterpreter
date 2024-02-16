#include <iostream>
#include <iomanip>
#include "src/pseudo.h"
#include "src/color.h"

void RunShell(std::string file_name) {
    while(true) {
        std::cout << Color(0x34, 0xD3, 0xDE) << "Pseudo >> " RESET;
        std::string input;
        std::getline(std::cin, input);
        Run(file_name, input);
    }
}

int main(int argc, char *args[]) {
    if(argc == 1) {
        RunShell("stdin");
    } else {
        RunShell(args[1]);
    }
    return 0;
}