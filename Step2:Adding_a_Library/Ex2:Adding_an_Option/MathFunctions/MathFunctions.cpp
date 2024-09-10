#include "MathFunctions.h"
#ifdef USE_MYMATH
#  include "mysqrt.h"
#else
#  include <cmath> 
#endif

namespace mathfunctions {

#ifdef USE_MYMATH
  double sqrt(double x) {
    return detail::mysqrt(x); 
  }
#else
  double sqrt(double x) {
    return std::sqrt(x); 
  }
#endif

}

