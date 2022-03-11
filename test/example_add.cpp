#include <gtest/gtest.h>

#include "MathCalculator.h"

MathCalculator* mathCalculator = new MathCalculator();
TEST(calculateZylinderArea, calculate) {
  ASSERT_NEAR( mathCalculator->calculateZylinderArea(1,1),mathCalculator->pi ,1.0e-11);
}
