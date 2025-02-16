#include <iostream>
#include "lib/complex.hpp"

int main() {

    constexpr double x_min = -2;
    constexpr double x_max = 0.5;

    constexpr double y_min = -0.9;
    constexpr double y_max = 0.9;

    constexpr double point_spacing = 0.005;
    constexpr int mandelbrot_sample_size = 500;

    // Check if (i, j) is in the Mandelbrot set, where x_min <= i <= x_max and
    // y_min <= j <= max. 
    for(auto i = x_min; (i >= x_min && i <= x_max); i += point_spacing) 
        for(auto j = y_min; (j >= y_min && j <= y_max); j += point_spacing) 
            if(Complex(i, j).is_in_m_set(mandelbrot_sample_size))
                std::cout << i << " " << j << '\n';

    return 0;
}


