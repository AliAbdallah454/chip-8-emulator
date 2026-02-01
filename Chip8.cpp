#include "Chip8.hpp"

#include <fstream>
#include <iostream>

const unsigned int START_ADDRESS = 0x200;

Chip8::Chip8() {
    this->pc = START_ADDRESS;
}

void Chip8::LoadROM(char const *filename) {

    std::ifstream file(filename, std::ios::binary | std::ios::ate);

    if (file.is_open()) {

        std::streampos size = file.tellg();
        char *buffer = new char[size];

        file.seekg(0, std::ios::beg);
        file.read(buffer, size);
        file.close();

        for (long i = 0; i < size; i++) {
            this->memory[START_ADDRESS + i] = buffer[i];
        }

        delete[] buffer;

    }

}