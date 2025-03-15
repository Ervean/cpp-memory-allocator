#include "memory_allocator.h"
#include <iostream>

using namespace Memory;

void *MemoryAllocator::malloc(size_t size)
{
    x = {1};
    std::cout << "malloc" << x << std::endl;
    return NULL;
}

void *MemoryAllocator::calloc(size_t num, size_t nsize)
{
    x = {2};
    std::cout << "calloc" <<  x << std::endl;
    return NULL;
}

void *MemoryAllocator::realloc(void *block, size_t size)
{
    x = {3};
    std::cout << "realloc" << x << std::endl;
    return NULL;
}

void MemoryAllocator::free(void *block)
{
    x = {4};
    std::cout << "free" << x << std::endl;
}

header_t *MemoryAllocator::get_free_block(size_t size)
{
    return NULL;
}