#include <stdio.h>
#include <math.h>

main(){	
float x,y,r;      /*�ŧi�ܼ�*/ 
printf("�п�J���N x�y��:" );
scanf("%f",&x);
printf("�п�J���N y�y��:" );
scanf("%f",&y);
printf("�п�J����Ϊ���� r:" );
scanf("%f",&r);

if(
(fabs(x)<r/2)&&(fabs(y)<r/2)     /*fabs(x):�p��B�I�ƪ������*/ 
)
{
printf("�y��(x,y)=(%f,%f)�b�ӥ���Τ�",x,y);
}

else if (
(fabs(x)>r/2)||(fabs(y)>r/2)
)
{
printf("�y��(x,y)=(%f,%f)�b�ӥ���Υ~",x,y);
}

else{
printf("�y��(x,y)=(%f,%f)�b�ӥ���ΤW",x,y);
 }
}


