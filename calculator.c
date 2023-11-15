// calculator.c
#include <stdio.h>
#include <emscripten/emscripten.h>
#include "calculator.h"

EMSCRIPTEN_KEEPALIVE
double add(double a, double b) {
    return a + b;
}

EMSCRIPTEN_KEEPALIVE
double subtract(double a, double b) {
    return a - b;
}

EMSCRIPTEN_KEEPALIVE
double multiply(double a, double b) {
    return a * b;
}

EMSCRIPTEN_KEEPALIVE
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Not a Number for division by zero
    }
}

EMSCRIPTEN_KEEPALIVE
double power(double a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return power(a, b - 1) * a;
    }
}