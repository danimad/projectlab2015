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

// TODO: template
// TODO: double -> Real
// TODO: make box, and get integrate region from that
// TODO: implicit and explicit boundary
// TODO: make integrate function in seperate file

double simpson_rule(double &x, double &y, const int &dh, TestFunction1D tf) {
    return dh / 6 * (tf(x) + 4 * tf(0.5 * x + dh) + tf(x+dh));
};

void integrate(double const &x_min, double const &x_max, double const &y_min, double const &y_max,const int &resolution, vector<Point> &vec, TestFunction2D func) {

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
        result = result + mesh[i].get_z();
    };
    
    cout << "integral: " << result << endl;
    
    cout << "number of points: " << mesh.size();

   };
