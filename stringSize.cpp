#include <iostream>

using namespace std;

int get_lenOfstring(const char *str) {
    if (*str == '\0')
        return 0;
    return 1 + get_lenOfstring(str + 1);
}

int main() {
    char *str="hello";
    cout << get_lenOfstring(str) << endl;
    return 0;
}

