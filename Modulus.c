
#include<stdio.h> 
#include<math.h>
int main()
{
    int R,J;
    float L;
    scanf("%d%d",&R,&J);
    L=R%J;
    printf("%.0f",L);
    return 0;
}
