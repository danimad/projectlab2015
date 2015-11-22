//
//  test_function.h
//  onlab_num
//
//  Created by Berecz Dániel on 2015.11.07..
//  Copyright (c) 2015 Berecz Dániel. All rights reserved.
//

#pragma once

#ifndef __onlab_num__test_function__
#define __onlab_num__test_function__

#include "common.h"
//#include <vector>

// TODO: make into template
//template<class D, int DIM>
//class IntFunction {
//    std::vector<Real> dims[DIM];
//
//};
//
//template<typename F, typename DIM>
//auto IntFunction(A const& a, B const& b) -> decltype(a + b) { return a + b; }

class TestFunction1D {
    
public:
    Real operator() (Real &x);
    
};

class TestFunction2D {
    
public:
    Real operator() (Real &x, Real &y);
    
};

//class TrapezoidRule2D {
//    
//public:
//    double operator() (double &x, double &y, double &dx, double &dy, TestFunction2D &func);
//    
//};

//double SimpsonRule {
//    
//public:
//    double operator() (double &x, double &y);
//    
//};

#endif /* defined(__onlab_num__test_function__) */
