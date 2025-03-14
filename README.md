# cpp-memory-allocator
Reimplementation of malloc(), calloc(), free(), and realloc(). Intended goal of this project is to learn more about C++ and how the heap works.

Thanks to https://arjunsreedharan.org/post/148675821737/memory-allocators-101-write-a-simple-memory for a guide on how to write a simple memory allocator.

Known question being the use of sbrk() over mmap(), going to use sbrk() for simplicity, but keep in mind that mmap() is the more updated best practice for allocating memory.


