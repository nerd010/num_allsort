//
//  main.c
//  数的全排列
//
//  Created by Charles Wang on 16/3/24.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num = 0;
    for (int a = 1; a < 10; a++)
    {
        for (int b = 1; b < 10; b++)
        {
            for (int c = 1; c < 10; c++)
            {
                for (int d = 1; d < 10; d++)
                {
                    for (int e = 1; e < 10 ; e++)
                    {
                        for (int f = 1; f < 10; f++)
                        {
                            for (int g = 1; g < 10; g++)
                            {
                                for (int h = 1; h < 10; h++)
                                {
                                    for (int i = 1; i < 10; i++)
                                    {
                                        if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i && b != c && b != d && b != e && b != f && b != g && b != h && b != i && c != d && c != e && c != f && c != g && c != h && c != i &&  d != e && d != f && d != g && d != h && d != i && e != f && e != g && e != h && e != i && f != g && f != h && f != i && g != h && g != i && h != i)
                                        {
                                            printf("%d%d%d%d%d%d%d%d%d\n", a, b, c, d, e, f, g, h, i );
                                            num++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("num:%d\n", num);
    return 0;
}
