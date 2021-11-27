#include<stdio.h>


float temp=0;
int choix=0;

int main(){




	while(1){
		
		printf("Entrer une température en degré celsius ou fahrenheit. C : taper 1, F : taper 2\n");
		scanf("%d",&choix);
		printf("Entrez la valeur de la température\n");
		scanf("%f",&temp);
		printf("%f\n",temp);
		if(choix==1){
			temp=temp*1.8+32;
			printf("T F = %f\n",temp);
		}
		else if(choix==2){
			temp=(temp-32)*0.55;
			printf("T C= %f\n",temp);
		}
		else{
			printf("Recommencer\n");
		}



	}



return 0;
}
