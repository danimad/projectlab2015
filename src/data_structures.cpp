//
//  data_structures.cpp
//  onlab_num
//
//  Created by Berecz Dániel on 2015.11.07..
//  Copyright (c) 2015 Berecz Dániel. All rights reserved.
//

#include "data_structures.h"

typedef double Real;

Point::Point() {xx = 0; yy = 0; zz = 0;};
    
Point::Point(double x_, double y_, double z_) {
        xx = x_;
        yy = y_;
        zz = z_;
};

Point::~Point() {};
    
void Point::setx(double x_) { xx = x_; };
void Point::sety(double y_) { yy = y_; };
void Point::setz(double z_) { zz = z_; };
    
double Point::getx() { return xx; };
double Point::gety() { return yy; };
double Point::getz() { return zz; };


// template<class POINT>
// class Triangle {
//     public:
//         Triangle(POINT& a_, POINT& b_, POINT& c_) {
//             a = a_;
//             b = b_;
//             c = c_;
//         };
//         ~Triangle();

//     private:
//         POINT& a;
//         POINT& b;
//         POINT& c;
// };