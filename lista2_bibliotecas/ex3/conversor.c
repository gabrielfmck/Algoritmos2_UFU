#include "conversor.h"

// Celsius para Fahrenheit
// Fórmula: F = C * 9/5 + 32
float celsius_fahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

// Converter Fahrenheit para Celsius
// Fórmula: C = (F - 32) * 5/9
float fahrenheit_celsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}
