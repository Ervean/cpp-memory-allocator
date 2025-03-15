#include <iostream>
#include "memory_allocator.h"

Memory::MemoryAllocator memoryAllocator {Memory::MemoryAllocator()};

int main (int argc, char *argv[])
{
    memoryAllocator.malloc(5);
    memoryAllocator.calloc(5, 5);
    memoryAllocator.realloc(NULL, 5);
    memoryAllocator.free(NULL);
}