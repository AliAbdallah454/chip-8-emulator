#include <iostream>

using namespace std;

// char* const l = ... -> means l is a constant pointer to a char (can't change l but can modify content)
// const char *x __or__ char const *x are the same, they mean pointer to a constant, -> pointer can change, content cannot

int main() {
    
    char s[] = "Hello fucker";

    const char *p = s;
    // p[0] = 'm'; // forbidden
    p = s + 2; // allowed

    cout << *p << endl;

    return 0;

}