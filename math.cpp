#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
/*double convert(double g)
{
    g = 5.0/9.0 * (g - 32);
    return g;
}

int main()
{
    double i;
    cout << "what is your temperature in celsius : ";
    cin >> i;
    cout << "the temperature in celsius is: " << convert(i)<< endl;
}
int main()
{
    double i;
    int j;
    cout << "what is your number and the power it is goint to: ";
    cin >> i >> j;
    i = pow(i, j);
    cout << "the number is: " << i << endl;
}

int main()
{
    double i;
    const double j = 3.14159;
    cout << "what is the radius of the circle: ";
    cin >> i;
    i = j * pow(i, 2);
    cout << "the are of the circle is: " << i << endl;
}*/
int main()
{
    srand(time(0));
    int j = rand() % 7;
    int i = rand() % 7;
    cout <<"the dice number is: " << j << " and " << i;
    return 0;
}