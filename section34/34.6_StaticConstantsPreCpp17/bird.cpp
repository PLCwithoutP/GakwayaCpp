#include "cylinder.h"
#include "bird.h"

const float Bird::BIRD_WEIGHT_CONSTANT {Cylinder::FLOAT_CONSTANT};
// It is not a good idea. Sometimes BIRD_WEIGHT_CONSTANT will be 
// initialized before FLOAT_CONSTANT and cause to crash