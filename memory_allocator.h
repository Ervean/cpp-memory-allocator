#pragma once
#include <stddef.h>

typedef char ALIGN[16];

namespace Memory
{
    #ifndef HEADER_T
    #define HEADER_T
    // header is guarenteed to be aligned to 16 bytes
    // union is the larger size of its members
    // therefor the union guantees the end of the header is memory aligned
    union header {
        struct {
                size_t size;
                unsigned is_free;
                union header *next;
        } s;
        ALIGN stub;  
    };
    typedef union header header_t;
    #endif

    #ifndef MEMORY_ALLOCATOR_H
    #define MEMORY_ALLOCATOR_H
    class MemoryAllocator
    {
    public:
        void *malloc(size_t size);
        void *calloc(size_t num, size_t nsize);
        void *realloc(void *block, size_t size);
        void free(void *block);
    
    private:
        header_t *get_free_block(size_t size);
        header_t *head;
        header_t *tail;
    };
    #endif

}