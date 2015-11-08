#include <iostream>
#include <cmath>
#include <math.h>
#include <numeric>
#include "test_function.h"
#include "data_structures.h"
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

const double a = 0.0;
const double b = 5.0;
const double c = 5.0;
const double d = 10.0;

const int resolution = 64;


TestFunction2D tf;


void integrate(double const &x_min, double const &x_max, double const &y_min, double const &y_max,int const &resolution, vector<Point> &vec, TestFunction2D func) {

    const double dx = (x_max - x_min) / resolution;
    const double dy = (y_max - y_min) / resolution;
    
    for (int i = 0; i < resolution; i++) {

        for (int j = 0; j < resolution; j++) {
            
            double step_x = x_min + i * dx;
            double step_y = y_min + j * dy;
            
            vec.push_back( Point(step_x, step_y, 0.5 * (func(step_x,step_y) + func(step_x + dx,step_y + dy)) * dx * dy));
        };
    };
};



int main() {
    
    vector<Point> mesh;
    
    double result = 0.0;
    
    integrate(a, b, c, d, resolution, mesh, tf);
    
    for(auto i = 0; i < mesh.size(); i++) {
        result = result + mesh[i].getz();
    };
    
    cout << result << endl;
    
    cout << mesh.size();

   };
