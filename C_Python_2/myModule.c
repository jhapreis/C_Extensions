#include <Python.h>

#include "functions.h"



// int Cfib(int n){
//     if (n < 2)
//         return n;
//     else
//         return Cfib(n-1) + Cfib(n-2);
// }



static PyObject* RandomNumber(PyObject* self, PyObject* args){
    int max;
 
    if (!PyArg_ParseTuple(args, "i", &max))
        return NULL;
 
    return Py_BuildValue("i", random_number(max));
}



static PyObject* fib(PyObject* self, PyObject* args){
    int n;
 
    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;
 
    return Py_BuildValue("i", Cfib(n));
}



static PyObject* version(PyObject* self){
    return Py_BuildValue("s", "Version 1.0.1");
}



static PyMethodDef myMethods[] = {
    {"fib",           fib,                  METH_VARARGS, "Calculate the Fibonacci numbers."},
    {"version",       (PyCFunction)version, METH_NOARGS,  "Returns the version."},
    {"random_number", RandomNumber,         METH_VARARGS, "Generates random integer from 0 to max."},
    {NULL, NULL, 0, NULL}
};



static struct PyModuleDef myModule = {
	PyModuleDef_HEAD_INIT,
	"myModule",         // name of module.
	"Fibonacci Module", 
	-1,                 // global state
	myMethods
};



PyMODINIT_FUNC PyInit_myModule(void){
    return PyModule_Create(&myModule);
}
