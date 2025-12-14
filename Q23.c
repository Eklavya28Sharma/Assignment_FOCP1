#include <stdio.h>

int main(){
    int b,n;
    scanf("%d",&b);
    int c_green,c_purple;
 for(int j=0;j<b;j++){

int count1=0,count2=0;
     scanf("%d %d",&c_green,&c_purple);
     scanf("%d",&n);

if(n>0){
for(int i=1;i<=n;i++){
int ef,gh;
 scanf("%d %d",&ef,&gh);

             if(ef>0){
                count1++;
                }
             if(gh>0){
                count2++;
                }
            }
int cost_of_testcase1 = count1*c_green + count2*c_purple;
int cost_of_testcase2 = count1*c_purple + count2*c_green;
int result = (cost_of_testcase1 > cost_of_testcase2)
 ? cost_of_testcase2  : cost_of_testcase1;

    printf("%d\n",result);
        }
    }
 return 0;
}