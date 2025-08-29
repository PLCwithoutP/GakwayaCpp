#include "exercise.h"
#include <memory>


double  unity_volume (){

    std::unique_ptr<Box> p_box = std::make_unique<Box>(1,1,1);

	return p_box -> volume();
}