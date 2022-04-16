#include <stdio.h>

int main() {

int age[5]={4,7,8,9,5};
int i;

  printf("Enter 5 input values: ");

  for (int i = 0; i < 5; ++i) 
  {
    scanf("%d", &age[i]);
    
    

  }

  for (int i = 0; i < 5; ++i)
   {
    printf("%d ", age[i]);
  }
 
  return 0;
}
