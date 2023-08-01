#include <stdio.h>

void main (){
    int counter = 5;
    printf("<ref>\n");
    while (--counter >= 1)
        printf("%s\n", counter % 2? "even" : "odd");

    counter = 5;
    printf("(a)\n");
    while (--counter >= 1)
        if(counter%2)
            printf("even\n");
        else
            printf("odd\n");

    // counter = 5;
    // printf("(b)\n");
    // while (counter >= 1)
    //     if(counter%2)
    //         printf("even\n");
    //     else
    //         printf("odd\n");
    //     --counter;

    counter = 5;
    printf("(c)\n\n");
    while (counter >= 1) {
        if(counter%2)
            printf("even\n");
        else
            printf("odd\n");
        --counter;
    }

    counter = 5;
    printf("(d)\n");
    do {
        printf("%s\n", counter%2?"odd":"even");
        --counter;
    } while (counter >= 2);

}
