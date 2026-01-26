#include <stdio.h>
int checkNumber(int n1,int n2);
int mutiply(int n1, int n2);
int n1,n2;

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if (checkNumber(a,b)){
		printf("%d",mutiply(a,b));
	}
	else{
		printf("Reject\n");
	}
}
int checkNumber(int n1, int n2){
	if (n1>=20 && n2>=20 && n1<=60 && n2<=60){
		return 1;
	}
	else {
		return 0;
	}
}
int mutiply(int n1, int n2){
	return(n1*n2);
}


