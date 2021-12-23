#include <pybind11/pybind11.h>
#include "library.h"

namespace py = pybind11;

PYBIND11_MODULE(library, m) {
    m.def("add", &add); // добавили функцию в модуль
};