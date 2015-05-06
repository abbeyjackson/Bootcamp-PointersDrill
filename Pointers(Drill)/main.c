//
//  main.c
//  Pointers(Drill)
//
//  Created by Abegael Jackson on 2015-05-06.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a = 13;
    int b = 5;
    int c = 10;
    
    int *w = &a;
    int *x = &b;
    int *y = &c;
    int *z = &c;
    
    *w = ((*w) * 2);    // double value of a
    
    *y = ((*y) + 1);      // increment c
    
    y = x;            // set one c pointer (*y) to the same address as b pointer (*x), does not change c value, rather *y is simply not associated with c anymore
 
    *x = (*x + 4);      // increase value of b by 4 (now *x is 9 but *y is still 5)
    
    
    /*
     *z = *x;            // change the value *y is pointing to (the value of c) to the same value *x is pointing to, which is the value of b. Therefore c is now the same value as b.
     */
    
    
    printf("a: %d\nb: %d\nc: %d\n", a, b, c);
    
    
    return 0;
}
