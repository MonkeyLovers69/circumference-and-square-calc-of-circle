#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string user_will;
    cout << "do you want to find circle square/circumference? type 'yes' if you want to continue: ";
    cin >> user_will;
    while (user_will == "yes")
    {
        double Pi = 3.14;
        int Radius;
        cout << "Enter circle radius: ";
        cin >> Radius;
        cout << "Circle square is:" << pow(Radius, 2) * Pi << endl;
        cout << "Circle circumference is: " << 2 * Pi * Radius << endl;
        cout << "type 'yes' if you want to continue: ";
        cin >> user_will;
        system("cls");
    }
}
