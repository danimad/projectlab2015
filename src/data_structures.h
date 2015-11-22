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

#include "common.h"

template<class P>
class Point{
public:
    Point();
    Point(P x_, P y_, P z_);
    ~Point();
    Point(const Point &p);
    Point &operator=(const Point &p);
    
//    void set_id(unsigned int id_);
    
//    int& id();
    
    Real x();
    Real y();
    Real z();
    
private:
//    static int point_id;
    
    Real m_x;
    Real m_y;
    Real m_z;
};

template<class P>
Point<P>::Point()
{
    m_x = 0.0; m_y = 0.0; m_z = 0.0;
};

template<class P>
Point<P>::Point(P x_, P y_, P z_) :
    m_x(x_),
    m_y(y_),
    m_z(z_)
{
};

template<class P>
Point<P>::~Point() {};

template<class P>
Point<P>::Point(const Point<P> &p) :
    m_x(p.m_x),
    m_y(p.m_y),
    m_z(p.m_z)
{
};

template<class P>
Point<P> &Point<P>::operator=(const Point<P> &p)
{
    if (this != &p)
    {
        m_x = p.m_x;
        m_y = p.m_x;
        m_z = p.m_x;
    };
};

template<class P>
Real Point<P>::x() { return m_x; };

template<class P>
Real Point<P>::y() { return m_y; };

template<class P>
Real Point<P>::z() { return m_z; };


template<class P, class E>
class HalfEdge{
public:
    HalfEdge();
    
    ~HalfEdge();
    
    const E getInvEdge();
    const E getNextEdge();
    const P getSrcPoint();
    
    const bool isLeadingEdge();
    
    void setInvEdge(E invEdge);
    void setNextEdge(E nextEdge_);
    void setSrcPoint(P srcPoint);
    void leading(bool isLeading_);

    
private:  
    P src;
    E inverseEdge;
    E nextEdge;
    bool isLeading;
    
};

template<class P, class E>
HalfEdge<P,E>::HalfEdge() {src = nullptr; inverseEdge = nullptr; nextEdge = nullptr; isLeading = false;};

template<class P, class E>
HalfEdge<P,E>::~HalfEdge() { if(inverseEdge) inverseEdge->setInvEdge(nullptr); };

template<class P, class E>
void HalfEdge<P,E>::setInvEdge(E invEdge) { inverseEdge = invEdge; };

template<class P, class E>
void HalfEdge<P,E>::setNextEdge(E nextEdge_) { nextEdge = nextEdge_; };

template<class P, class E>
void HalfEdge<P,E>::setSrcPoint(P srcPoint) { src = srcPoint; };

template<class P, class E>
void HalfEdge<P,E>::leading(bool isLeading_) { isLeading = isLeading_; };

template<class P, class E>
const bool HalfEdge<P,E>::isLeadingEdge() { return isLeading; };

template<class P, class E>
const E HalfEdge<P,E>::getInvEdge() { return inverseEdge; };

template<class P, class E>
const E HalfEdge<P,E>::getNextEdge() { return nextEdge; };

template<class P, class E>
const P HalfEdge<P,E>::getSrcPoint() { return src; };



// TODO: write implementation for triangle class
//class Triange{
//public:
//    Triange();
//    
//    Triange(Point* a, Point* b, Point* c);
//    
//    ~Triange();
//    
//    unsigned int get_id();
//
//
//};


#endif /* defined(__onlab_num__data_structures__) */
