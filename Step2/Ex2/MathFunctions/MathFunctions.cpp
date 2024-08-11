#include "MathFunctions.h"
#ifdef USE_MYMATH
#  include "mysqrt.h"
#else
#  include <cmath> // Thêm dòng này d? s? d?ng std::sqrt
#endif

namespace mathfunctions {

#ifdef USE_MYMATH
  double sqrt(double x) {
    return detail::mysqrt(x); // Ð?m b?o r?ng detail::mysqrt du?c khai báo chính xác
  }
#else
  double sqrt(double x) {
    return std::sqrt(x); // S? d?ng std::sqrt n?u USE_MYMATH không du?c b?t
  }
#endif

}

