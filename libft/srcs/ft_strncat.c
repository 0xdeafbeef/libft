#include <stdlib.h>
#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	char *temp;
    size_t i;

    i =0;
	temp = s1;
	s1 += (int) ft_strlen(s1);
    if (ft_strlen(s2) < n )
    {
        while (*s2)
	    {
	        *s1 = *s2;
            s1++;
		    s2++;
	        }
            *s1 = '\0';  
        }
    else 
    {    
	    while (i < n)
	    {
		    *s1 = *s2;
		    s1++;
		    s2++;
            i++;
	    }
	    *s1 = '\0';
    }
	return (temp);
} 
