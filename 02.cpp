#include <stdio.h>

int main()
{
    int a=0;
    int b=1;
    int sum=0, result=0;
    while (result < 4000000)
    {
        result=a+b;
        a=b;
        b=result;
        if(result%2==0){
            sum+=result;
        }
    }
        
            
    printf("%d",sum);
}