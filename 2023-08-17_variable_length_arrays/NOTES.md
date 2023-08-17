# Variable length arrays in C++

The basis of this was the C++ Hackerrank exercise: Variable Length Arrays.

C++ does not support variable length arrays using only primitives. I found a [gist](https://gist.github.com/shironecko/940849ed3e0fcaebee54) which looks to employ some trickery using `malloc` and pointers-to-pointers to support a two-dimensional array. I think it would be interesting to pick this code apart, as it would demonstrate how to do this kind of thing in plain C.

In the meantime though, the obvious 'C++' way of doing this is to use a vector, of which my implementation is shown in `vector_implementation.cc`. Send `input.txt` into the executable when running from the command line and it will work.

My 'attempt' at doing a C-style implementation is in `c_implementation_attempt.cc`. It does not work properly.
