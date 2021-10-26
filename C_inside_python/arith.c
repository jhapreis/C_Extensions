#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <Python.h>

#include "arith.h"



void connect(){
    printf("Connected to C extension...\n");
}




int random_number(int max){
    
    int random_number = rand() % max;

    return random_number;
}



int add_values(int a, int b){
    return a + b;
}


static PyObject* math(PyObject* self, PyObject* args){

    int number;

    if (   !PyArg_ParseTuple(args, "i", &number)   ){
        return NULL;
    }

    return Py_BuildValue("i", random_number(number));
}



static PyObject* version(PyObject* self){
    return Py_BuildValue("s", "Version 1.0");
}



static PyMethodDef myMethods[] = {
    // {name, function_name, args?, documentation}
    {"random", random_number, METH_VARARGS, "Generates a random integer from 0 to max."},
    {"version", (PyCFunction)version, METH_NOARGS, "returns the version."},
    {NULL, NULL, 0, NULL}
};



static struct PyModuleDef myModule = {
    PyModuleDef_HEAD_INIT,
    "myModule",
    "Function documentation",
    -1, // global state
    myMethods
};



PyMODINIT_FUNC PyInit_myModule(void){
    return PyModule_Create(&myModule);
}
