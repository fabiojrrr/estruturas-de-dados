#include<stdio.h>
#include<stdlib.h>








int main (){
	int n,*p;
	
	scanf("%i",&n);
	
	p=(int *) malloc(sizeof(int)*n);
	
	for(int x=0;x<n;x++){
		scanf("%i",(p+x));
	}
		for(int x=0;x<n;x++){
		printf("%i\n",*(p+x));
	}
	
	
free(p);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}                                                                                                                                                                                                   
