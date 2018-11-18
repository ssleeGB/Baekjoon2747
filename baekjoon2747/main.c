//
//  main.c
//  baekjoon2747
//
//  Created by 이승섭 on 2018. 11. 15..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i, n;
    int fibo[46];
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    scanf("%d", &n);
    
    if(n <= 45)
        for(i = 2; i <= n; i++)
        {
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    
    printf("%d \n", fibo[n]);
    
    return 0;
}
