#include <iostream>
#include <cmath>
#include <math.h>
#include <numeric>
#include <vector>
#include <algorithm>
#include <functional>

#include "test_function.h"
#include "data_structures.h"
#include "common.h"

using namespace std;

Point<Real> kBoxMin(0.0, 0.0, 0.0);
Point<Real> kBoxMax(5.0, 5.0, 0.0);

const int kResolution = 16;


TestFunction2D tf;

// TODO: make box, and get integrate region from that
// TODO: implicit and explicit boundary
// TODO: make integrate function in seperate file

// TODO: normalize ot [-1,1] so i can implement Gauss rule
// TODO: restructure function so it can run in parallel
void integrate(Point<Real> &kBoxMin, Point<Real> &kBoxMax, const int &kResolution, vector<Point<Real>> &vec, TestFunction2D &func) {

    Real dx = (kBoxMax.x() - kBoxMin.x()) / kResolution;
    Real dy = (kBoxMax.y() - kBoxMin.y()) / kResolution;
    
   
    for (int i = 0; i < kResolution; i++) {

        for (int j = 0; j < kResolution; j++) {
            
            Real step_x = kBoxMin.x() + i * dx;
            Real step_y = kBoxMin.y() + j * dy;
            // TODO: solve it that i don't have declare dx,dy every time
            // TODO: put quadrature rule in a different file
            Real step_dx = step_x + dx;
            Real step_dy = step_y + dy;
            Real z_val = 0.25 * dx * dy * (func(step_x, step_y) + func(step_dx, step_y) + func(step_x, step_dy) + func(step_dx, step_dy) );
            
            vec.push_back( Point<Real>(step_x, step_y, z_val));
            
//            vec.push_back( Point(step_x, step_y, 0.5 * (func(step_x,step_y) + func(step_x + dx,step_y + dy)) * dx * dy));
        };
    };
};
// Algorithm:
// 1. init triangle
// 2. insert point
// 3. find triangle that containst point
// 4. split triangle to three smaller triangles
// 5. examine the new traingles and neighbouring traingles pairs for local optimum
// 6. if not optimal swap edges
// 7. delete big triangle
//
void delaunay(Point<Real> &kBoxMin, Point<Real> &kBoxMax, const int &kResolution) {
    
    // point number half on border half inside border
//    const int points = sqrt(kResolution);
    
    // initialize box
    Point<Real> dl(kBoxMin.x(), kBoxMin.y(), 0.0);
    Point<Real> dr(kBoxMax.x(), kBoxMin.y(), 0.0);
    Point<Real> ur(kBoxMax.x(), kBoxMax.y(), 0.0);
    Point<Real> ul(kBoxMin.x(), kBoxMax.y(), 0.0);
    
    // six initial edges 3x lower tri, 3x upper tri, CCW
//    HalfEdge<Point<Real>, HalfEdge*> down;
//    HalfEdge up;
//    
//    HalfEdge ddiag;
//    HalfEdge udiag;
//    
//    HalfEdge left;
//    HalfEdge right;
    
//    // lower triangle
//    down.setSrcPoint(&dl);
//    down.setNextEdge(&ddiag);
//    
//    ddiag.setSrcPoint(&dr);
//    ddiag.setNextEdge(&left);
//    ddiag.setInvEdge(&udiag);
//    
//    left.setSrcPoint(&ul);
//    left.setNextEdge(&down);
//    
//    // upper triangle
//    right.setSrcPoint(&dr);
//    right.setNextEdge(&up);
//    
//    udiag.setSrcPoint(&ul);
//    udiag.setNextEdge(&right);
//    udiag.setInvEdge(&ddiag);
//    
//    up.setSrcPoint(&ur);
//    up.setNextEdge(&udiag);
    

}

int main() {
    
    vector<Point<Real>> mesh;
    
    Real result = 0.0;
            
    integrate(kBoxMin, kBoxMax, kResolution, mesh, tf);
    
    for(auto i = 0; i < mesh.size(); i++) {
        result = result + mesh[i].z();
    };
    
    cout << "integral: " << result << endl;
    
    cout << "number of points: " << mesh.size();

   };
