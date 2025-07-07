# Garbage control 

Garbage control is a lightweight C library to easily manage allocated memory, it is made to be compliant with the [42 Norme](https://github.com/42school/norminette/tree/master "Norminette github repo") with the intention to be used in my [Minishell Project](https://github.com/luna7111/shrapnel "My minishell github repo").

While this code is published under a MIT license, i do not recomend it's use, if you are a 42 student, writing your own code is the only way to learn how to be a good coder. If you are not, this project isn't exactly optimal due to limitations like the forenamed 42 Norme and forbidden functions.

## Documentation

You can see the full docs [here (this link is currently dead)]().  

Garbage control offers a set of functions to allocate, free and otherwise manage memory in a C program while keeping track of every allocated pointer so memory leaks can be easily prevented.

The library uses a linked list to track every pointer, each node of the list contains the pointer and it's state (whether it is a single pointer, an array, is it protected...).

## License

MIT No Attribution

Copyright 2025 Luna del Valle Blázquez

Permission is hereby granted, free of charge, to any person obtaining a copy of this
software and associated documentation files (the "Software"), to deal in the Software
without restriction, including without limitation the rights to use, copy, modify,
merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
