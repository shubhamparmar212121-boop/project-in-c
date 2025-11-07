#include<stdio.h>
#include<float.h>
int main(){
    char op;
    double n1,n2,result;
     printf("Enter operter(+,-,/,*) : \n");
    scanf("%c",&op);
    printf("Enter first number : ");
    scanf("%lf",&n1);
   
    printf("Enter second number : ");
    scanf("%lf",&n2);
    switch(op){
        case '+':
       result = n1 + n2;
        break;
        case '-':
        result = n1 - n2;
        break;
        case'*':
       result = n1 * n2;
        break;
        case  '/':
       result = n1 / n2;
        break;
        default:
        printf("! error Ivalid operater is use");
        result != -DBL_MAX;
      
    }
    if(result != -DBL_MAX)
    printf("TOTAL=  %.4lf",result);

    return 0;
    
}