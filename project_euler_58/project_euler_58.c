#include <stdio.h>
#include <math.h>
int isprime(int n){
	if(n<=1) return 0;
	if(n<=3) return 1;
	if(n%2==0 || n%3 == 0) return 0;
	int i;
	int sq = sqrt(n);
	for (i=5; i<=sq; i=i+6)
//		printf("%d  %d\n",i, i+2);
        if (n%i == 0 || n%(i+2) == 0)
           return 0;
    return 1;
}
/*5 4 3
  6 1 2
  7 8 9*/
int main(){
	int denominator = 5;// 1 3 5 7 9
	int numerator = 3; //3 5 7
	int gap = 4;
	int corner = 5; //begin with 9
	while(((float)numerator/denominator) > 0.10 ){
		int corner2 = corner*corner-gap;
		int corner3 = corner*corner-2*gap;
		int corner4 = corner*corner-3*gap;
		//printf("%d %d %d %d\n",corner*corner,corner2,corner3,corner4);
		numerator+=isprime(corner2);
		numerator+=isprime(corner3);
		numerator+=isprime(corner4);
		denominator+=4;
		gap+=2;
		corner+=2;
		printf("%f\n",(float)numerator/denominator);

	}
	//printf("%d %d\n",gap,corner);
	printf("%d\n",corner-2);

}