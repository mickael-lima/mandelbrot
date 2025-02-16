#include "../lib/complex.hpp"
#include <cmath>

double Complex::squared_module() {
    return std::pow(m_real, 2) + std::pow(m_im, 2);
}

double Complex::module() {
    return std::sqrt(squared_module()); 
}

Complex Complex::operator+(Complex const &c_number) {
    return Complex(m_real + c_number.real(), m_im + c_number.im());
}

// (a + bi)^2 = (a^2 - b^2) + i(2ab)
Complex Complex::square() {
    double real_part{std::pow(m_real, 2) - std::pow(m_im, 2)};
    double im_part{2 * m_real * m_im};

    return Complex(real_part, im_part);
}

bool Complex::is_in_m_set(int n_iteration) {
    bool is_in = false;
    Complex zn;

    for(auto i = 0; i <= n_iteration; i++) 
        zn = (zn.square()) + (*this);

    if(zn.squared_module() <= 4.0)
        is_in = true;

    return is_in;
}
