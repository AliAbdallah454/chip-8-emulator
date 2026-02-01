#include <iostream>
#include <chrono>
#include <random>
#include <cstdint>

using namespace std;

int main() {

    using clock = chrono::system_clock;

    auto time = chrono::duration_cast<chrono::seconds>(
        chrono::system_clock::now().time_since_epoch()
    ).count();

    default_random_engine randGen(clock::now().time_since_epoch().count());
    uniform_int_distribution<int> randByte(0, 255);

    auto byte = static_cast<uint8_t>(randByte(randGen));

    cout << static_cast<int>(byte) << endl;

    return 0;

}