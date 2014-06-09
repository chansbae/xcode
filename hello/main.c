//
//  main.c
//  hello
//
//  Created by Ph.D. Changseok Bae on 2014. 6. 10..
//  Copyright (c) 2014년 test. All rights reserved.
//

#include <stdio.h>
#include "hello.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    int s, i;
    
    printf("Hello, World!\n");
    printf("Welcome to the test project\n");
    s = 0;
    for(i=0; i<SMAX; i++){
        s += i;
    }
    printf("sum = %d\n", s);
    return 0;
}

