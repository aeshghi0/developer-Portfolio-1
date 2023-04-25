#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void empname(char*name)
{
    printf("Enter the employees name");
    gets_s(name,20);
}

void load(float*hours_w, float*hourly_r, float*fed_tax, float*state_tax)
{
    printf("Enter the number of hours worked ");
	scanf("%f", &(*hours_w));
	printf("Enter the hourly rate $");
	scanf("%f", &(*hourly_r));
	printf("Enter the federal tax rate ");
	scanf("%f", &(*fed_tax));
	printf("Enter the state tax rate ");
	scanf("%f", &(*state_tax));
}

void calc(float*gross, float*ftax_owe, float*stax_owe, float*net_pay, float*over, float*over_p)
{
    over = hours_w - float(40);
	over_p = over*(hourly_r*float(1.5));

	if (hours_w > 40)
		printf("over time: %.2F\n", over);
	else
		printf("no over time\n");
	if (hours_w > 40)
		gross = (40 * hourly_r) + over_p;
	else
		gross = hours_w*hourly_r;
	
	ftax_owe = gross*fed_tax / 100;
	stax_owe = gross*state_tax / 100;
	net_pay = gross - ftax_owe - stax_owe;
}

void print(float*name, float*gross, float*ftax_owe, float*stax_owe, float*net_pay)
{
    printf("%s grosspay $%.2f \nfederal tax owed $%.2f \nstate tax owed $%.2f \nnet pay $%.2f\n", name, gross, ftax_owe, stax_owe, net_pay);
}

void main()
{
    char name[15];
	float hours_w, hourly_r, fed_tax, state_tax, gross, ftax_owe, stax_owe, net_pay, over, over_p;


    empname(&name);
    load(&hours_w, &hourly_r, &fed_tax, &state_tax);
    calc(&gross, &ftax_owe, &stax_owe, &net_pay, &over, &over_p);
    print(&name, &gross, &ftax_owe, &stax_owe, &net_pay);
    
    
    system("pause");
}








