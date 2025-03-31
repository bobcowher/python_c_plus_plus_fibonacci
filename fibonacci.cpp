#include <iostream>
#include <chrono>

float fibonacci(float n){
    if(n <= 1){
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char** argv){
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    float n = 50;

    auto t1 = high_resolution_clock::now();
    float fib = fibonacci(n);
    auto t2 = high_resolution_clock::now();

    auto time_delta = duration_cast<milliseconds>(t2 - t1);

    std::cout << "Final number in the Fibonacci sequence " << fib << std::endl;
    std::cout << "Operation took approximately" << time_delta.count() << " milliseconds." << std::endl;

}