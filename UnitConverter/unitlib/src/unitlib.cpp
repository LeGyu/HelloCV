#include "unitlib.h"

namespace unitlib {

double celsius_to_fahrenheit(double c) { return c * 9.0 / 5.0 + 32.0; }
double fahrenheit_to_celsius(double f) { return (f - 32.0) * 5.0 / 9.0; }

double meters_to_feet(double m)        { return m / 0.3048; }
double feet_to_meters(double ft)       { return ft * 0.3048; }

double pounds_to_kilograms(double lb)  { return lb * 0.45359237; }
double kilograms_to_pounds(double kg)  { return kg / 0.45359237; }

} 