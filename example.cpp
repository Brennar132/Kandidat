#include <pybind11/pybind11.h>
int add(int a, int b) {
    return a + b;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "Pybind example module";//Docstring
    m.def("add", &add, "A function that adds two numbers",
         pybind11::arg("a"), pybind11::arg("b"));
}