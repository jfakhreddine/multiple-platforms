/*******************************************************************************
  * @file    main.c
  * @author  Jarray fakhreddine
  * @brief   multiple platforms 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define MAX 
#define MIN
#define INTEL
#define OTHERS

/* Private function prototypes -----------------------------------------------*/
static  int min(int  x1 , int x2);
static  int max(int  x1 , int x2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  x1 and x2 
  * @retval None
  */

int main(void)
{
#ifdef MAX
 int resultMax=max(100,20); /* put the max of two numbers in resultMax  */
#endif

#ifdef MIN
 int resultMin=min(7,1); /* put the min of two numbers in resultMin  */
#endif 
 
  while (1)
  {
  }
  
}
#ifdef MIN
static  int min(int  x1 , int x2) /* we use static before declaring the variable allows to keep the value and the continuous just for this function and is not to be visible for the rest of the program*/
{
  return(((x1) < (x2)) ? (x1) : (x2)); /* call of the MIN function which will return the min of two variables*/
}
#endif

#ifdef MAX
static  int max(int  x1 , int x2) /*we use static before declaring the variable allows to keep the value and the continuous just for this function and is not to be visible for the rest of the program*/
{
  return(((x1) > (x2)) ? (x1) : (x2)); /* call of the MAX function which will return the max of two variables */
}
#endif
/**************************************END OF FILE**************************************/