#include <iostream>

using namespace std;

struct String
{
    int n;
    char * str = new char[n + 1];
    String(const char* s)
    {
        int count = 0;
        while(*(s + count) != '\0') {
            *(str + count) = *(s + count);
            count++;
        }
    };
};
