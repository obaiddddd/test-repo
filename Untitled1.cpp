#include<stdio.h>
int main(){
	int choice;
	
	printf("Welcome to program \n 1.Convert from Celsius to Fahrenheit \n 2.Convert from Fahrenheit to Celsius\n 3.Quit\n");
	printf("Select an option: ");
	scanf("%d",&choice);
	if(choice==1){
		float a;
		float fr;
		printf("Enter temprature in celcius: ");
		scanf("%f",&a);
		 
		fr=(a*1.8)+32;
		printf("Entered value in farhenite is %f \n");
		
	}
	else if(choice==2){
		float a;
		float fr;
		printf("Enter temprature in Farhenite: ");
		scanf("%f",&fr);
		 
		a=(0.555)*(fr-32);
		printf("Entered value in Celcius is %f \n",a);
			}
			else if(choice==3){
				return(0);
			}
			return 0;
}
