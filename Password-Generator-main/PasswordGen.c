// Password Generator

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	char arr[100] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
					,'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
					'0','1','2','3','4','5','6','7','8','9','@','#','$','\0'};
//	printf("%c",arr[5]);
	
	srand(time(NULL));
	printf("Enter the size of the password you want to generate (in characters) : ");
	int size;
	scanf("%d",&size);
	char pass[size+1];
	for(int i = 0;i<size;i++){
		int n = rand()%65;
	//	printf("%d\n",n);
		pass[i] = arr[n];
	}
	pass[size] = '\0';
	printf("\n Generated Password : %s",pass);

return 0;
}
