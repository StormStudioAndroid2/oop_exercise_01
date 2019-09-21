#include "Vector3D.h"

#include <iostream>
#include <cmath>



    Vector3D::Vector3D(double x,double y,double z)
: x(x), y(y),z(z) {}
      Vector3D::Vector3D()
: x(0), y(0),z(z) {}
Vector3D Vector3D::plus(const Vector3D& vector) {
        Vector3D result;
        result.x = vector.x+this->x;
        result.y = vector.y+this->y;
        result.z = vector.z+this->z;

        return result;
    }
    Vector3D Vector3D::minus(const Vector3D& vector) {
        Vector3D result;
        result.x = this->x-vector.x;
        result.y = this->y-vector.y;
        result.z = this->z-vector.z;
        return result;
    }
     Vector3D Vector3D::vectorPow(const Vector3D& vector) {
        Vector3D result;
        result.x = this->y*vector.z-this->z*vector.y;
        result.y = this->z*vector.x-this->x*vector.z;
        result.z = this->x*vector.y-this->y*vector.x;

        return result;
    }
    void Vector3D::lambdaPow(double lambda) {
        this->x*=lambda;
        this->y*=lambda;
        this->z*=lambda;

    }
    double Vector3D::scalarPow(const Vector3D& vector) {
        return this->x*vector.x+this->y*vector.y+this->z*vector.z;
    }
    bool Vector3D::isEqual(const Vector3D& vector) {
        return (this->x==vector.x && this->y==vector.y && this->z==vector.z);
    }
    double Vector3D::getLength() {
        return sqrt(this->x*this->x+this->y*this->y+this->z*this->z);
    }
     
    double Vector3D::getAngle(const Vector3D& vector) {
        if ((vector.getLength()==0) || (this->getLength())==0) {
            return 0;
        }
            const double halfC = 180/M_PI;

           double cos1 = (this->scalarPow(vector)/(this->getLength()*vector.getLength())) ;
           if (cos1<-1) {
               return 180;
           }
           if (cos1>1) {
               return 0;
           }
           return halfC*acos(cos1);
      
    }

    double  Vector3D::getX() {
        return x;
    }
    double  Vector3D::getY() {
        return y;
    }
    double  Vector3D::getZ() {
        return z;
    }

