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

double TestFunction1D::operator() (double x) {
        
        return x*x;
        // return sin(3*x)/3 + sin(2*x)/2 + sin(x);
        // return -((x-1)*(x-1)) + 1;
        
};

double TestFunction2D::operator() (double x, double y) {
    
    return x*x + sin(y);

};
