#include<stdio.h>

void nonExecutableFunction(int elem)
{
    printf("\n Hey! You are not supposed to come here!, value of elem = %d\n", elem);
    printf("Attack was successful");
}
int main(int argc, char * argv[])
{
    int elem = 10;
    printf("The value of elem = %d\n", elem);
    if(argc < 3)
    {
        printf("Give some input in args\n");
        return 1;
    }
    printf(argv[1]);
    printf(argv[2], &elem);
    if(elem == 15)  nonExecutableFunction(elem);
    return 0;
}