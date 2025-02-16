class Complex {
    public:
        Complex() : m_real{0}, m_im{0} {}
        Complex(long double real) : m_real{real}, m_im{0} {}
        Complex(long double real, long double im) : m_real{real}, m_im{im} {}

        long double squared_module();
        long double module();
        long double real() const {return m_real;}
        long double im() const {return m_im;}

        Complex square();

        // Sum
        Complex operator+(Complex const &result);

    private:
        long double m_real;
        long double m_im;
};
