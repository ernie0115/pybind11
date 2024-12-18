#include <pybind11/pybind11.h> 

int add(int a, int b) { 
    return a + b; 
} 

// PYBIND11_MODULE exposes the add Function. 
PYBIND11_MODULE(example, m) { 
    m.def("add", &add, "A function that adds two numbers"); 
} 