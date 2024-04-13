#include<stdio.h>

void sum();
void sub();
void div();
void mult();

int main() {
    int in=0;
    printf("Enter what operation you need \n 1 for add \n 2 for subtraction \n3 for divide \n 4 for multiply");
    scanf("%d",&in);
    if(in==1){sum();}
    else if (in==2){
        sub();
    }
    else if (in==3)
    {
        div();
    }
    else if (in==4)
    {
        mult();
    }
  return 0;
}

void sum() {
    int a,b,sum=0;
    printf("Enter number 1 to input");
    scanf("%d",&a);
    printf("Enter number 2 to input");
    scanf("%d",&b);
    sum=(a+b);
    printf("%d",sum);

}

void mult(){
    int a,b,mult=0;
    printf("Enter number 1:\n");
    scanf("%d",&a);
    printf("Enter number 2:\n");
    scanf("%d",&b);
    mult=a*b;
    printf("Multiplied = %d",mult);
}

void div(){
    int a,b,div=0;
    printf("Enter number 1:\n");
    scanf("%d",&a);
    printf("Enter number 2:\n");
    scanf("%d",&b);
    div=a/b;
    printf("Divided = %d",div);
}

void sub(){
    int i,h,sub=0;
    printf("Enter number 1:\n");
    scanf("%d",&i);
    printf("Enter number 2:\n");
    scanf("%d",&h);
    sub=i-h;
    printf("Subtracted = %d",sub);
}
