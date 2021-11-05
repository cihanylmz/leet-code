#include <iostream>

int main() {
    std::string s = "hello";
    std::string rev = "";
    for (char c : s)
    {
        rev += s.back();
        s.pop_back();
    }
    s = rev;
    std::cout << s;

    return 0;
}
