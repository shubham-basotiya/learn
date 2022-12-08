#include<stdio.h>

int main()
 {
    printf("\nstaring 20 prime complete");
    int i=2,counter=0;
    while(i<=100)
    {
        
        int j = 2;
        while(j<=i)
        {
            if(i%j==0){
                // printf("%d",i);
                
                break;
            }
            j++;
            
        }
        if(j==i){
                counter++;
                printf("\n%d. %d", counter, i);
            }
            i++;
            if(counter==20) 
            {
                // printf("\nstaring 20 prime complete");
                break;
            }
    }
    return 0;
 }
