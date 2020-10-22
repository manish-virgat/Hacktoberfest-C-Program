#include <stdio.h>

void starPattern1();
void starPattern2();
void starPattern3();
void starPattern4();
void starPattern5();

int main() {
    // Write C code here
    
    // Star Pattern 1
    printf("\nStart Pattern 1 : \n");
    starPattern1();
    
    // Star Pattern 2
    printf("\nStart Pattern 2 : \n");
    starPattern2();
    
    // Star Pattern 3
    printf("\nStart Pattern 3 : \n");
    starPattern3();
    
    // Star Pattern 4
    printf("\nStart Pattern 4 : \n");
    starPattern4();
    
    // Star Pattern 5
    printf("\nStart Pattern 5 : \n");
    starPattern5();
    
    return 0;
}

void starPattern1()
{
    int i,j,k;
    
    for(i = 0; i < 5; i++)
    {
        for (j = 0 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void starPattern2()
{
    int i,j,k;
    
    for(i = 0; i < 5; i++)
    {
        for(k = 5; k > i ; k--)
        {
            printf("  ");
        }
        
        for (j = 0 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void starPattern3()
{
    int i,j,k;
    
    for(i = 0; i <= 5; i++)
    {
        for(k = 5; k > i ; k--)
        {
            printf(" ");
        }
        
        for (j = 0 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void starPattern4()
{
    int i,j,k;
    
    for(i = 0; i < 5; i++)
    {
        for(k = 0; k <= i ; k++)
        {
            printf(" ");
        }
        
        for (j = 5 ; j > i ; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void starPattern5()
{
    starPattern3();
    starPattern4();
}



// Output Of The Code :

/*

Start Pattern 1 : 
* 
* * 
* * * 
* * * * 
* * * * * 

Start Pattern 2 : 
          * 
        * * 
      * * * 
    * * * * 
  * * * * * 

Start Pattern 3 : 
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 

Start Pattern 4 : 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

Start Pattern 5 : 
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
     
*/





