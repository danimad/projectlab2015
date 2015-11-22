//
//  test_function.cpp
//  onlab_num
//
//  Created by Berecz Dániel on 2015.11.07..
//  Copyright (c) 2015 Berecz Dániel. All rights reserved.
//

#include "test_function.h"
#include <math.h>

// TODO: variadic template for functions
// http://eli.thegreenplace.net/2014/variadic-templates-in-c/
// template<typename T>
// void Integrable(T)

Real TestFunction1D::operator() (Real &x) {
    
    return x * x;
    
};

Real TestFunction2D::operator() (Real &x, Real &y) {
    
    return x * x + sin(y*y);

};

//double TrapezoidRule2D::operator() (double &x, double &y, double &dx, double &dy, TestFunction2D &func) {
//    
//    return 0.5 * dx * dy * (func(x, y) + func(x+dx, y+dy));
//    
//};

//double SimpsonRule::operator() (double &x, double &y, int &dx, int &dy, TestFunction2D tf) {
//    
//    return (dx * dy) / 6 * (tf(x,y) + 4 * tf(0.5 * x + dx, 0.5 * x + dy) + tf(x+dx,y+dy));
//};
