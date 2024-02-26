#include "libft.h" 
void* ft_memset(void *b, int c, size_t len)
{
	unsigned char *byte_ptr = b;
    	unsigned char byte_value = (unsigned char)c;

    	while (len != '\0') 
	{
        	*byte_ptr++ = byte_value;
		len--;
    	}	
	 return b;
}



