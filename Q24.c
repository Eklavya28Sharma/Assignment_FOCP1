#include <stdio.h>
#include<ctype.h>

int main(){
	char words[100];
	scanf("%s",words);
	for(int i=0;i<100;i++){
		if(islower(words[i])){
			words[i]=toupper(words[i]);
		}
		else if(isupper(words[i])){
			words[i]=tolower(words[i]);
		}
	}
	printf("%s",words);
	return 0;
}