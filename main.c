#include <Python.h>
#include "cFuncs.h"

static PyObject *py_areaOfTriangle(PyObject *self, PyObject *args)
{
    int a, b, c;
    double result;

    if(!PyArg_ParseTuple(args,"iii", &a, &b, &c))
        return NULL;

    result = _areaOfTriangle(a, b, c);

    return Py_BuildValue("d", result);
}

static PyObject *py_arifmsum(PyObject *self, PyObject *args)
{
    int a1, d, n;
    double result;

    if(!PyArg_ParseTuple(args,"iii", &a1, &d, &n))
        return NULL;

    result = _arifmsum(a1, d, n);

    return Py_BuildValue("d", result);
}

static PyObject *py_geomsum(PyObject *self, PyObject *args)
{
    int b1, q, n;
    double result;

    if(!PyArg_ParseTuple(args,"iii", &b1, &q, &n))
        return NULL;

    result = _geomsum(b1, q, n);

    return Py_BuildValue("d", result);
}

static PyObject *py_circlelen(PyObject *self, PyObject *args)
{
    int r;
    double result;

    if(!PyArg_ParseTuple(args,"i", &r))
        return NULL;

    result = _circlelen(r);

    return Py_BuildValue("d", result);
}

static PyObject *py_circlearea(PyObject *self, PyObject *args)
{
    int r;
    double result;

    if(!PyArg_ParseTuple(args,"i", &r))
        return NULL;

    result = _circlearea(r);

    return Py_BuildValue("d", result);
}


static PyMethodDef ownmod_methods[] = {
    {"areaOfTriangle", py_areaOfTriangle, METH_VARARGS, "area of triangle"}, // Площадь треугольника по сторонам
    {"arifmsum", py_arifmsum, METH_VARARGS, "Sum of ariphmetic progression"}, // Сумма арифметической прогрессии
    {"geomsum", py_geomsum, METH_VARARGS, "Sum of geometric progression"}, // Сумма геометрической прогрессии
    {"circlelen", py_circlelen, METH_VARARGS, "Length of circle"}, // Длина окружности
    {"circlearea", py_circlearea, METH_VARARGS, "Area of circle"}, // Площадь круга
    { NULL, NULL, 0, NULL }
};

/* Описываем наш модуль */
static PyModuleDef simple_module = {
    PyModuleDef_HEAD_INIT,   // обязательный макрос
    "pmath",               // my_plus.__name__
    "Python library to work with math's fuctions.", // my_plus.__doc__
    -1,
    ownmod_methods           // сюда передаем методы модуля
};

// в названии функции обязательно должен быть префикс PyInit
PyMODINIT_FUNC PyInit_pmath(void)
{
      PyObject* m;
      // создаем модуль
      m = PyModule_Create(&simple_module);
      // если все корректно, то эта проверка не проходит
      if (m == NULL)
          return NULL;
      return m;
}