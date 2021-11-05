#include <vector>

void reverseString(std::vector<char>& s) {

    int i = 0, j = s.size() - 1; //Using two pointers!
    while(i < j)
        std::swap(s[i++], s[j--]);
}
