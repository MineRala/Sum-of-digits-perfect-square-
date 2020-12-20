#include <stdio.h>
#include <math.h>

int sumOfDigit(int num){
int digit;
int sum=0;

while(num > 0) {
		digit=num%10;
		sum+=digit;
		num/=10;
	}
 return sum;
}

int perfectSquare(int x){
   double squareRoot = sqrt((double)x);
   int temp = squareRoot;
   if(temp==squareRoot)
       return 1;
   else
       return 0;
}

void printDigits(int x){
  printf("\n%d ",x);
  int temp=x;
  int squareRoot=0;
  while(temp){
      if(squareRoot==0){
          printf("%d",temp%10);
          squareRoot=1;
       }  
       else
          printf("-%d",temp%10);
          temp/=10;
   }  
   printf(" %d\n",x+sumOfDigit(x));
}

void operation(int a){
    int sumDigit;
    int total=0;
    int i;
    for( i=1;i<a;i++){
        sumDigit=sumOfDigit(i);
        total=i+sumDigit;
       
        if(perfectSquare(total)==1){
        printDigits(i);
    }
    }
}

int main() {
    printf("Please enter number: ");
	int a;
	scanf("%d", &a); 
    operation(a);
    return 0;
}
