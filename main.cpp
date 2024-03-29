#include<iostream>
#include "Vector3D.h"
#include <iomanip>

int main() {
    int x1,x2,y1,y2,z1,z2;
    std::cin >> x1 >> y1 >> z1;
    std::cin >> x2 >> y2 >> z2;
    std::cout.precision(6);
    Vector3D vector1(x1,y1,z1);
    Vector3D vector2(x2,y2,z2);
    std::cout << vector1.plus(vector2).getX() << " " << vector1.plus(vector2).getY() << " " << vector1.plus(vector2).getZ() << std::endl;
    std::cout << vector1.minus(vector2).getX() << " " << vector1.minus(vector2).getY() << " " << vector1.minus(vector2).getZ() <<  std::endl;
    std::cout << vector1.getAngle(vector2) <<  std::endl;
    std::cout << vector1.getLength() <<  std::endl;
    std::cout << vector2.getLength() <<  std::endl;
        if (vector1.isEqual(vector2)) {
        std::cout << "Equal" <<  std::endl;
        } else {
            std::cout << "Not equal" <<  std::endl;
        }
         std::cout << vector1.crossProduct(vector2).getLength() <<  std::endl;
        return 0;
}