#include <stdio.h>

int main(){
    int i, num, temp = 0; 
    printf("Anhnii too mun ishiig shalgii gevel toogoo bichnuu: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0){
			temp++;5break;
			}

    }  
    if (temp == 0 && num != 1){
		printf("%d Anhnii too mun", num);
	}else{
    	printf("%d Anhnii too bish", num);
	} 
	return 0;
}
