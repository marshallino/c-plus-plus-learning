 #include <iostream>
 #include <string>

using namespace std;

 int main ()
 {
    string na;
    cout << "what is your name: ";
    getline(cin, na);
    cout << "hello," << na << "!" << endl;
    return 0;
 }  