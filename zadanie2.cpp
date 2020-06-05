#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int str(const char* text, const char* pattern){
    size_t tsize{}, psize{};

    for (size_t i = 0; text[i] != '\0'; ++i)
        ++tsize;

    for (size_t i = 0; pattern[i] != '\0'; ++i)
        ++psize;

    if (psize <= tsize) {
        int a{};
        for (size_t i = 0; i < tsize; ++i) {
            if (text[i] != pattern[i - a])
                a = i + 1;
            if (i - a + 1 == psize)
                return a;
        }
        return -1;
    }
    else
        return -1;
}

int main()
{
    char c[] = "120367265", f[] = "2036726";
    cout << str(c, f);
}
