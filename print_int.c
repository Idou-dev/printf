#include <stdio.h>
#include <stdlib.h>

/**
 * print_int -print integer
 * @p:argument pointer
 *@params: the parameters struct
 *
 * Return:number of chars printed
 */
int print_int (va_list p, params_t *params)
 {
    long l;
        
    if (params-> l_modifier)
       l = va_arg(p,int)
    else if (params-> h_modifier)
       l = (short int) va_arg (p, int);
    else 
       l = (int) va_arg(p,int);
    return(print_number(convert(l, 10, 0, params), params));
 }
