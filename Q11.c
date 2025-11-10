#include <stdio.h>
int main(){
    int main_arr[10], even_arr[10], odd_arr[10],t=0,h=0;
    for (int i = 0; i < 10; i++){
     printf("Enter the number : ");
        scanf("%d", &main_arr[i]);
    }
    for (int k = 0; k < 10; k++){
        if (main_arr[k] % 2 == 0)
        {
            even_arr[t]=main_arr[k];
            t++;
        }
        else{
            odd_arr[h]=main_arr[k];
            h++;
        }
    }
    printf("The elements of even array are : ");
    for(int i = 0 ; i<t ; i++){
        printf("%d,",even_arr[i]);
    }
    printf("\nThe elements of odd array are : ");
    for (int i = 0; i < h; i++)
    {
        printf("%d,",odd_arr[i]);
    }
    return 0;
}