//
//  main.c
//  DataStructure
//
//  Created by KHM on 2020/08/13.
//  Copyright © 2020 KHM. All rights reserved.
//

#include <stdio.h>
int main() {
    char s1[] = "Data Structure!"; //배열 숫자를 지정해주면 여백공간이 생김.
    for (int i = 0; s1[i]; i++) {
    printf("%c", s1[i]);
    }
    printf("\n %d \n", sizeof(s1)); //null 포함 16
    
    
    
}



