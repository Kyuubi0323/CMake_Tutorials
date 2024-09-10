#include "MathFunctions.h"
#ifdef USE_MYMATH
#  include "mysqrt.h"
#else
#  include <cmath> // Th�m d�ng n�y d? s? d?ng std::sqrt
#endif

namespace mathfunctions {

#ifdef USE_MYMATH
  double sqrt(double x) {
    return detail::mysqrt(x); // �?m b?o r?ng detail::mysqrt du?c khai b�o ch�nh x�c
  }
#else
  double sqrt(double x) {
    return std::sqrt(x); // S? d?ng std::sqrt n?u USE_MYMATH kh�ng du?c b?t
  }
#endif

}

