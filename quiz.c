#include<stdio.h>

int main(){
  int score=0;
  char ans;

  printf("simple quiz\n");

  printf("\n1.what is the capital of india?\n");
  printf("a)mumbai\nb)delhi\nc)chennai\n");
  scanf(" %c",&ans);
  if(ans=='b')score++;

  printf("\n2.2+2=?\n");
  printf("a)3\nb)4\nc)5\n");
  scanf(" %c",&ans);
  if(ans=='b')score++;

  printf("\n3.C language is developed by?\n");
  printf("a)dennis ritchie\nb)Bjarne stroustrup\nc)james gosling\n");
  scanf(" %c",&ans);
  if(ans=='a')score++;

  printf("\nyour score:%d/3\n",score);

  if(score==3)
    printf("excellent!\n");
  else if(score==2)
    printf("good job!\n");
  else
    printf("keep learning!\n");
  return 0;
}
