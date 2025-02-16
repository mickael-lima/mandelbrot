class Complex {
    public:
        Complex() : m_real{0}, m_im{0} {}
        Complex(double real) : m_real{real}, m_im{0} {}
        Complex(double real, double im) : m_real{real}, m_im{im} {}

        double squared_module();
        double module();
        double real() const {return m_real;}
        double im() const {return m_im;}

        Complex square();
        bool is_in_m_set(int n_iteration);

        // Sum
        Complex operator+(Complex const &result);

    private:
        double m_real;
        double m_im;
};
