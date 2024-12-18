# (A) example.cpp 
## **Objective:** 

1. Define an add function. 

2. The "PYBIND11_MODULE" macro is used to create a Python module named example. It binds the C++ function add so that it can be called from Python. 

## **Issue:** 
It is supposed to generate "example.pyd", when I run "example.cpp" by pressing "Ctrl + Shift + B". In this case, I compile "setup.py" by "python setup.py build_ext --inplace" to generate "example.pyd". 

# (B) setup.py 
## **Objective:** 
It is used for building and installing the Python extension module. In other words, it generates "example.pyd" by entering "python setup.py build_ext --inplace". 

## **Annotation:**  
- It uses the setuptools library to define an extension module named "example", which is built from the example.cpp source file.
- The include_dirs parameter specifies where to find the Pybind11 headers (using pybind11.get_include()), ensuring that the compiler can find the necessary files when building the module.

# (C) testing.py 
## **Objective:** 
It tests whether or not the function in C++ is correct. 

## **Annotation:** 
- It imports the example module, "example.pyd", (the compiled shared library from example.cpp).
- It calls the add function defined in the C++ code and prints the result. 

# (D) .vscode\c_cpp_properties.json 
## **Objective:** 
This file is used by the C/C++ extension in Visual Studio Code to configure IntelliSense and code navigation for C and C++ files. 

1. "includePath": It means the paths that use Pybind11 to compile C++ code. This can be found by entering "python -m pybind11 --includes". 

2. "compilerPath": This is the path to the C++ compiler executable. 

# (E) .vscode\tasks.json 
## **Objective:** 
This file defines tasks that can be executed from within Visual Studio Code, such as building or compiling C++ code. 
    
