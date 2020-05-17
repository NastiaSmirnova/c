#include <Python.h>  /* library imports */
#include <string.h>

long long compute_hash(char *s) { /*function to be exported to Python*/
    const int m = 1e9 + 9;
    const int p = 31;
    long long hash_value = 0;
    long long p_pow = 1;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
    hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m;
    p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

static PyObject *hash(PyObject *self, PyObject *args) { /* representing hash-function as an internal object of CPython */
  const char *x;
  long long result = 0;

  if (!PyArg_ParseTuple(args,"s", &x)) {
    return NULL;
  }
  result = compute_hash(x);
  return Py_BuildValue("i", result);
}

static PyMethodDef ownmod_methods[] = {
    { 
        "hash", // name of fucntion in python interpreter
        hash, // function C declaration
        METH_VARARGS, // special macros about function arguments
        "hash function" // doc for function in python interpreter
    },
    { NULL, NULL, 0, NULL }
};

static PyModuleDef simple_module = {
    /* Info about module */
    PyModuleDef_HEAD_INIT,
    "my_hash", // my_hash.__name__ 
    "amazing documentation", // hash.__doc__ 
    -1, 
    ownmod_methods, // methods are here 
    NULL, 
    NULL, 
    NULL, 
    NULL
};

PyMODINIT_FUNC PyInit_my_hash(void)
{
    PyObject* m;
    // creating module object
    m = PyModule_Create(&simple_module);
    if (m == NULL)
        return NULL;

    return m;
}
