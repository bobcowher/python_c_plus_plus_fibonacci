# C++ Independent File Compilation
g++ fibonacci.cpp -o fibonacci

# Library Compilation Command
c++ -O3 -Wall -shared -std=c++17 -fPIC \
    $(python3 -m pybind11 --includes) \
    fibonacci_lib.cpp -o fibonacci_lib$(python3-config --extension-suffix)

# Setup
Create a virtual env and move to it. 
sudo apt-get install pybind11-dev
pip install -r requirements.txt


