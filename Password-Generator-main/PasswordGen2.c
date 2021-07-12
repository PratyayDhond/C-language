// Password Generator

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	printf("Enter the size of the password you want to generate (in characters) : ");
	int size;
	scanf("%d",&size);
	char pass[size+1];
	for(int i = 0;i<size;i++){
		int n = rand()%65 + 65;
	//	printf("%d\n",n);
		pass[i] = (char)n;
	}
	pass[size] = '\0';
	printf("\n Generated Password : %s",pass);
	
return 0;
}
