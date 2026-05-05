int myAtoi(char* s)
{
    int i;
    int sign;
    long result;
    sign = 1;
    i = 0;

    if (s[i] != 0)
    {
        while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
        {
            i++;
        }
    }

    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
             sign = -1;
        i++;
    }

    
    if (s[i] != 0)
    {
        result = 0;
        while ( s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');

            if (sign == 1 && result > INT_MAX)
                    return INT_MAX;
            if (sign == -1 && -result < INT_MIN)
                    return INT_MIN; 
            i++; 
        }  
    }
    
    return (int)(sign * result);

   return 0;
}