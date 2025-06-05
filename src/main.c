#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{ 
    char str[256];
    scanf("%255s", str);

    size_t str_size = strlen(str);

    char result_str[str_size * 4];
    int k = 0;
    for(int i = 0; i < str_size; ++i)
    {
        if(isdigit(str[i]))
        {
            int repeat = str[i] - '0';
            char ch = str[i+1];
            for(int j = 0; j < repeat; ++j)
            {
                result_str[k++] = str[i+1];
                
            }
            ++i;
        }
        else
        {
            result_str[k++] = str[i];
        }
    }

    result_str[k] = '\0';


    size_t result_str_size = strlen(result_str);
    for(int i = 0; i < result_str_size; ++i)
    {
        printf("%c", result_str[i]);
    }

    printf("\n");
    return 0; 
}

/*
input: 2ABC3DX
output: AABCDDDX
*/