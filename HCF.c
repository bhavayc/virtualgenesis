#include<stdio.h>

int main(){
    int x,y,z,m;
    scanf("%d %d",&x,&y);
    for(z=1;z<=x,z<=y;z++){
        if(x%z==0 && y%z==0){
            m=z;
        }
    }
    printf("HCF:%d\n",m);
    int LCM=x*y/m;
    printf("LCM:%d ",LCM);

return 0;
}
