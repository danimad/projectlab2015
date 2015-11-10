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
    
    Point(const Point &p);
    Point &operator =(const Point &p);
    
    void set_id(unsigned int id_);
    
//    int& id();
    
    double x();
    double y();
    double z();
    
private:
//    static int point_id;
    
    double m_x;
    double m_y;
    double m_z;
};


class HalfEdge{
public:
    HalfEdge();
    
    ~HalfEdge();
    
    const HalfEdge* getInvEdge();
    const HalfEdge* getNextEdge();
    const Point* getSrcPoint();
    
    void setInvEdge(HalfEdge* invEdge);
    void setNextEdge(HalfEdge* nextEdge_);
    void srcPoint(Point* srcPoint);
    void leading(bool isLeading_);
    
    bool isLeadingEdge();
    
private:  
    Point* src;
    HalfEdge* inverseEdge;
    HalfEdge* nextEdge;
    bool isLeading;
    
};

// TODO: write implementation for triangle class
//class Triange{
//public:
//    Triange();
//    
//    Triange(&Point a, &Point b, &Point c);
//    
//    ~Triange();
//    
//    unsigned int get_id();
//    
//    Edge get_edge1();
//    
//private:
//    unsigned int triangle_id;
//    
//    Edge1(&Point src, &Point dest);
//    Edge2(&Point src, &Point dest);
//    Edge3(&Point src, &Point dest);
//};


#endif /* defined(__onlab_num__data_structures__) */
