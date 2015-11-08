//
//  data_structures.h
//  onlab_num
//
//  Created by Berecz Dániel on 2015.11.07..
//  Copyright (c) 2015 Berecz Dániel. All rights reserved.
//

#pragma once

#ifndef __onlab_num__data_structures__
#define __onlab_num__data_structures__

class Point{
public:
    Point();
    
    Point(double x_, double y_, double z_);
    
    ~Point();
    
    void setx(double x_);
    void sety(double y_);
    void setz(double z_);
    
    double getx();
    double gety();
    double getz();
    
private:
    double xx;
    double yy;
    double zz;
};

#endif /* defined(__onlab_num__data_structures__) */
