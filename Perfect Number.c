#include <stdio.h>
#include <stdlib.h>

int main() {
	 int a,b,i,j;
	 int sum;
	 sum=0;
	 printf("\n\nLutfen Aralik Icin Sayilari Giriniz:");
	 scanf("%d %d",&j,&b);
	 for(a=j;a<=b;a++){
	 for(i=1;i<a;i++){
	 	if(a%i==0){
	 		sum=sum+i;
		 }
	 }
	 if(sum==a){
	 
	 printf("\t%d Bir Mukemmel Sayidir\n ",a);
	}
	sum=0;
	}
	return 0;
	}	
