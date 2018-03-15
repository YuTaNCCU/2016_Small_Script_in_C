#include <stdio.h>
#include <math.h>

main(){	
float x,y,r;      /*宣告變數*/ 
printf("請輸入任意 x座標:" );
scanf("%f",&x);
printf("請輸入任意 y座標:" );
scanf("%f",&y);
printf("請輸入正方形的邊長 r:" );
scanf("%f",&r);

if(
(fabs(x)<r/2)&&(fabs(y)<r/2)     /*fabs(x):計算浮點數的絕對值*/ 
)
{
printf("座標(x,y)=(%f,%f)在該正方形內",x,y);
}

else if (
(fabs(x)>r/2)||(fabs(y)>r/2)
)
{
printf("座標(x,y)=(%f,%f)在該正方形外",x,y);
}

else{
printf("座標(x,y)=(%f,%f)在該正方形上",x,y);
 }
}


