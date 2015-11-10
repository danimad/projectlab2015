//
//  data_structures.cpp
//  onlab_num
//
//  Created by Berecz Dániel on 2015.11.07..
//  Copyright (c) 2015 Berecz Dániel. All rights reserved.
//

#include "data_structures.h"

typedef double Real;

Point::Point() {m_x = 0; m_y = 0; m_z = 0;};
    
Point::Point(double x_, double y_, double z_) :
        m_x(x_),
        m_y(y_),
        m_z(z_)
{
};

Point::~Point() {};

Point::Point(const Point &p)
: m_x(p.m_x),
m_y(p.m_y),
m_z(p.m_z)
{
};

Point &Point::operator=(const Point &p) {
    if (&p != this) {
        m_x = p.m_x;
        m_y = p.m_y;
        m_z = p.m_z;
    };
    return *this;
};

void Point::set_id(unsigned int id_) { point_id = id_; };

unsigned int Point::get_id() { return point_id; };

double Point::get_x() { return m_x; };
double Point::get_y() { return m_y; };
double Point::get_z() { return m_z; };


//Edge::Edge();

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