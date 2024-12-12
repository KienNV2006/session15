#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char text[]="fg.;56. ,/,.";
	int countCharacterText=0;
	int countCharacterNum=0;
	int countCharacterSpecial=0;
	int length= strlen(text);
	for(int i=0; i<length; i++){
		if(isalpha(text[i])){
			countCharacterText++;
		}else if(isdigit(text[i])){
			countCharacterNum++;
		}else{
			countCharacterSpecial++;
		}
	}
	printf("%d ky tu chu cai\n", countCharacterText);
	printf("%d ky tu chu so\n", countCharacterNum);
	printf("%d ky tu dac biet\n", countCharacterSpecial);
	return 0;
}