#include <iostream>

#include "Chip8.hpp"

using namespace std;

int main() {

    Chip8 chip8;
    chip8.LoadROM("Makefile");

    cout << chip8.memory[0x201] << endl;

    return 0;

}