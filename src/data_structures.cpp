//
//  data_structures.cpp
//  onlab_num
//
//  Created by Berecz Dániel on 2015.11.07..
//  Copyright (c) 2015 Berecz Dániel. All rights reserved.
//

#include "data_structures.h"

typedef double Real;

// Point data structure
Point::Point() {m_x = 0; m_y = 0; m_z = 0;};
    
Point::Point(double x_, double y_, double z_) :
        m_x(x_),
        m_y(y_),
        m_z(z_)
{
};

Point::~Point() {};
    
//void Point::set_id(unsigned int id_) { point_id = id_; };

//const int& Point::id() { return point_id; };

double Point::x() { return m_x; };
double Point::y() { return m_y; };
double Point::z() { return m_z; };

// Half Edge data structure
// Based on Triangulation Template Library
// https://github.com/SINTEF-Geometry/TTL
HalfEdge::HalfEdge() {src = nullptr; inverseEdge = nullptr; nextEdge = nullptr; isLeading = false;};
    
HalfEdge::~HalfEdge() { if(inverseEdge) inverseEdge->setInvEdge(nullptr); };

void HalfEdge::setInvEdge(HalfEdge* invEdge) : inverseEdge(invEdge) {};
void HalfEdge::setNextEdge(HalfEdge* nextEdge_) : nextEdge(nextEdge_) {};
void HalfEdge::srcPoint(Point* srcPoint) : src(srcPoint) {};
void HalfEdge::leading(bool isLeading_) : isLeading(isLeading_) {};

HalfEdge* HalfEdge::getInvEdge() { return invEdge };
HalfEdge* HalfEdge::getNextEdge() { return nextEdge };
HalfEdge* HalfEdge::getSrcPoint() { return src };
    
HalfEdge::isLeadingEdge() { return isLeading; };

