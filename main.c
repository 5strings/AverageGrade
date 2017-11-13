//
//  main.c
//  AverageGrade
//
//  Created by Eun Jae Lee on 14/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int math = 0;
    int Eng = 0;
    int Sci = 0;
    int Mus = 0;
    int Bus = 0;
    
    printf("Ennter Your Math Mark: %d\n", math);
    scanf("%d\n", &math);
    
    printf("Enter Your English Mark: %d\n", Eng);
    scanf("%d\n", &Eng);
    
    printf("Enter Your Science Mark: %d\n", Sci);
    scanf("%d\n", &Sci);
    
    printf("Enter Your Music Mark: %d\n", Mus);
    scanf("%d\n", &Mus);
    
    printf("Enter Your Business Mark: %d\n", Bus);
    scanf("%d\n", &Bus);
    
    
    int Avg = (math + Eng + Sci + Mus + Bus) / 5;
    
   
    printf("Your Average is: %d\n", Avg);
    
    
    return 0;
}
