#include <stdio.h>
int main(){
    char isbn[15];
    scanf("%s",isbn);
    int judge=(isbn[12]-'0');
    int i=0;
    int  sum=0;
    int now_judge=0;
    while (i<12)
    {
        if (i<1){
            sum+=((i+1)*(isbn[i]-'0'));
        }else if (i>1&&i<5)
        {
            sum+=(i*(isbn[i]-'0'));
        }else if (i>5&&i<11)
        {
            sum+=((i-1)*(isbn[i]-'0'));
        }
        i++;
    }
    now_judge=sum%11;
    if (now_judge!=judge){
        if (now_judge==10)
            isbn[12]='X';
        else
            isbn[12]=now_judge+'0';
        printf("%s",isbn);
    }else
        printf("Right\n");

    return 0;
}
