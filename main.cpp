#include<iostream>
#include "Vector3D.h"

#include <iomanip>

using namespace std;

int main() {
    int x1,x2,y1,y2,z1,z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
   cout.precision(6);

    Vector3D vector1(x1,y1,z1);
        Vector3D vector2(x2,y2,z2);
        cout << vector1.plus(vector2).getX() << " " << vector1.plus(vector2).getY() << " " << vector1.plus(vector2).getZ() << endl;
        cout << vector1.minus(vector2).getX() << " " << vector1.minus(vector2).getY() << " " << vector1.minus(vector2).getZ() << endl;
        cout << vector1.getAngle(vector2) << endl;
        cout << vector1.getLength() << endl;
        cout << vector2.getLength() << endl;
        if (vector1.isEqual(vector2)) {
            cout << "Equal" << endl;
        } else {
                        cout << "Not equal" << endl;

        }
        cout << vector1.vectorPow(vector2).getLength() << endl;
        return 0;

}