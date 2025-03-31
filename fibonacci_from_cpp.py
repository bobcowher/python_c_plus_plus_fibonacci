import datetime
import fibonacci_lib 

if __name__ == '__main__':

    n = 50

    t1 = datetime.datetime.now()
    fib = fibonacci_lib.fibonacci(n)
    t2 = datetime.datetime.now()

    time_delta = (t2 - t1).total_seconds() * 1000

    print(f"Calculated the {n}th number of the fibonacci sequence as {fib}")
    print(f"Operation tool aproximately {time_delta} milliseconds")