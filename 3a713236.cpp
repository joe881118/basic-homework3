    
#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
float H,HM,W,BMI; 
 printf("BMI計算器\n"); 
 printf("你的身高：");
 scanf("%f",&H);
 printf("你的體重：");
 scanf("%f",&W);
 HM=H/100; 
 BMI=W/(HM*HM); 
 printf("BMI = %.2f\n",BMI);
 system("pause"); 
 return 0;
}
