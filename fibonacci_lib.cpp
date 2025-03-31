#include <pybind11/pybind11.h>

namespace py = pybind11;

float fibonacci(float n){
    if(n <= 1){
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

PYBIND11_MODULE(fibonacci_lib, m){
    m.def("fibonacci", &fibonacci, "Calculate Fibonacci Number");
}