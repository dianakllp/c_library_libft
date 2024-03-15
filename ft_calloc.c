#include <unistd.h>
#include <stdio.h>
#include "libft.h"


void *calloc(size_t num_elements, size_t element_size)
{
    void *destination; 

    destination = (void *) malloc (num_elements * element_size);
    if(!destination)
    {
        return(0);
    }
    ft_bzero(destination, (num_elements * element_size));
    return destination;
}
