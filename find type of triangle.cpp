
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;// for get lenght of sides in a triangle criate integer variables
    cout << "enter the side lengths of a triangle:";
    cin >> a >> b >> c;// get lenght of sides in a triangle as input
    if (a > 0 && b > 0 && c > 0) {
        if (a == b || a == c || b == c) {
            if (a == b && a == c && b == c) {
                cout << "this is a eqilateral triangle";
            }
            else {
                cout << "this is a isoscels triangle";
            }

        }
        else {
            cout << "this is a scalene triangle";
        }
    
    }
    else {
        cout << "this data not valid for triangle";
    }


    system("pause>0");
}

