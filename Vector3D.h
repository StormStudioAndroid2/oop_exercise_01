#include <iostream>
#include <cmath>


class Vector3D
{
private:
    double x;
    double y;
    double z;

 public:
    Vector3D(double x,double y,double z);
    Vector3D();
    Vector3D plus(const Vector3D& vector);
    Vector3D minus(const Vector3D& vector);
    Vector3D crossProduct(const Vector3D& vector);
    void lambdaProduct(double lambda);
    double scalarProduct(const Vector3D& vector);
    bool isEqual(const Vector3D& vector);
    double getLength();
    double getAngle( Vector3D& vector);
    double getX();
    double getY();
    double getZ();

};