#include <iostream>

using namespace std;

int main ()
{
    int j = 100;
    int i = 23;
    int g;
    g = j;
    j = i;
    i = g;
    cout << i;
    return 0;
}