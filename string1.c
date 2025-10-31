#include<stdio.h>
int main()
{
  char str1[100],str2[200];
  int i=0,j=0;
  printf("enter first string:");
  scanf("%s",str1);
  printf("enter the second string:");
  scanf("%s",str2);
  
  while (str1!="\0")
  {
    i++;
  }
  while (str2!="\0")
  {
    str1[i]=str2[j];
    i++;
    j++;
  }
  str1[i] ="\0";
  
  printf("concatenated string %s\n",str1);

  return 0;
}