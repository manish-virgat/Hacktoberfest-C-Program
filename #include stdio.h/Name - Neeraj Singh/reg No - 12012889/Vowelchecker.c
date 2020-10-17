#include <stdio.h>
//Name - Neeraj Singh
//reg No - 12012889
//batch - k20pt
int main()
{
  char vow;
  printf("Program to check character is  vowel or not \n");
  printf("Enter the character you want to check :");
  scanf("%c",&vow);
  switch(vow){
    case 'a' :
      printf("a is a vowel");
      break;
    case 'e':
      printf("e is a vowel");
      break;
    case 'i':
      printf("i is a vowel");
      break;
    case 'o':
      printf("o is a vowel");
      break;
    case 'u':
      printf("u is a vowel");
      break;
    default:
    printf("%c is not a vowel",vow);
  }
  return 0;
}
