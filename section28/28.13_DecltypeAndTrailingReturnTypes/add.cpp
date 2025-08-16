#include "headers.h"

template <typename T, typename P>
auto add(T a, P b)->decltype(a + b) {
   return a + b;
}