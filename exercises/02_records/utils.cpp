#include <cmath>
extern "C" {
    double sqrt_double(double x) {
        return std::sqrt(x);
    }

    double pow_float(double base, double exp) {
        return std::pow(base, exp);
    }
}
