CC = gcc

default: lib_fib.a

libexamples.a: _fib.o
   ar rcs $@ $^
    
examples.o: _fib.c _fib.h
    $(CC) -c $<

clean:
    rm *.o *.a
