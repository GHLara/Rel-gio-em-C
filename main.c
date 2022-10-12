#include <stdio.h>
#include <stdlib.h>

int main(){
	int h, m, s;
	printf("Digite as horas: ");
	scanf("%d%d%d", &h,&m,&s);

	if(h > 24 || m > 60 || s > 60){
		printf("Erro!");
		system("exit");
	}
	while(1){
		s++;
		if(s > 59){
			m++;
			s = 0;
		}
		if(m > 59){
			h++;
			m = 0;
		}
		if(h == 24){
			h = 0;
		}
	printf("\n Clock: ");
	printf("%02d:%02d:%02d", h,m,s);
	system("sleep 1");
	system("clear");}
}
