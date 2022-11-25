#include <stdio.h>
 
 
int main()
{
    int line = 5;
    int num = 1;
    int maxLength = 9;
    int sum = 0;
    
    for(int i=1 ;i <= line; i++){
        if(i < 5){
            for(int j=0; j<9; j++){
                if(j == line - i || j== maxLength - (line -i +1)){
                    printf("%d",num);
                    sum += num;
                }else{
                    printf(" ");
                }
            }
            printf("\n");
            num++;
        }else{
            for(int j= 1; j<= maxLength; j++){
                if(j%2 == 0){
                    printf(" ");
                }else{
                    printf("%d",num);
                    sum+=num;
                    num++;
                }
 
            }
        }
    }
 
    printf("\nSum = %d\n",sum);
 
    return 0;
}