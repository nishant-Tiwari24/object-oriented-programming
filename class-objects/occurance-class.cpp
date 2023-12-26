#include <iostream>
#include <string>

class Occurrence {
private:
    std::string str;
    char ch;

public:
    void init(const std::string& s, char c) {
        str = s;
        ch = c;
    }
    void countOccurrence() {
        int count = 0;
        for (char character : str) {
            if (character == ch) {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
};

int main() {
    Occurrence occurrence;
    std::string s;
    char c;

    std::cin >> s;
    std::cin >> c;

    occurrence.init(s, c);
    occurrence.countOccurrence();

    return 0;
}