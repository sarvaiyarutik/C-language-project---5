
#include <stdio.h>


int main(){
   
    int row, col;

    printf("Enter the array row size :");
    scanf("%d",&row);

    printf("Enter the array col size :");
    scanf("%d",&col);

    int number[row][col];

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
           printf("Enter the array element[%d][%d]",i,j);
           scanf("%d",&number[i][j]);
        }
        
    }

    int  largest = number[0][0];

    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
          if (number[i][j] > largest)
          {
            largest = number[i][j];
          }
          
       }
       
    }
    
    printf("Largest element = %d",largest);

    return 0;
}