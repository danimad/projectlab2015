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

class TestFunction1D {
    
public:
    double operator() (double x);
    
};

class TestFunction2D {
    
public:
    double operator() (double x, double y);
    
};

#endif /* defined(__onlab_num__test_function__) */
