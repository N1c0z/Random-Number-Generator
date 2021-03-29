#include <stdio.h>
#include <time.h>
#include <stdlib.h>

bool firstTimeCall = true;
    int random_number(int min_num, int max_num)
    {
        if (firstTimeCall)
        {
            srand(time(NULL));
            firstTimeCall = false;
        }
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1;
        } else {
            low_num = max_num + 1;
            hi_num = min_num;
        }
        
        
        result = (rand() % (hi_num - low_num)) + low_num;

        return result;
    }