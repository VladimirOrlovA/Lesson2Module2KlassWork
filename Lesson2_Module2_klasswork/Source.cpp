#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");


	//1

	/*float b = 1073741824, kb, Mb, Gb;
	kb = b / (pow(2, 10));
	Mb = b / (pow(2, 20));
	Gb = b / (pow(2, 30));

	printf("%f kb \n", kb);
	printf("%f Mb \n", Mb);
	printf("%f Gb \n\n", Gb);*/
	
	//2

	/*int cm, m;
	printf("¬ведите число в сантиметрах ");
	scanf_s("%d", &cm);
	m = cm / 100;
	printf("%d m \n\n", m); */

	//3

	/*int sec;
	printf("¬ведите кол-во секунд ");
	scanf_s("%d", &sec);
	float min = (float)sec / 60;
	printf("–езультат в минутах %f\n\n", min);*/

	//4

	/*float a,b,r;
	printf("¬ведите число a ");
	scanf_s("%f", &a);
	printf("¬ведите число b ");
	scanf_s("%f", &b);
	
	r = sqrt(a*b);
	
	printf("–езультат %f\n\n", r);*/
	
	//5

	/*float x, y, b, k, p, t;
	
	//5.1

	x = 3.5;
	b = 0.4;

	a = log(x);
	c = pow(a, 2)+ sqrt(b*x);
	y = exp(2 * x) + pow(9.7, c);

	//5.2

	x = 1.3;
	k = 4;

	a = log(x);
	b = exp(2 * x) + (a*x);
	y = x * (pow(a, 3)) + pow(b, 2);

	//5.3

	x = 2.1;
	p = 1;

	a = exp(sqrt(abs(x)));
	b = (sin(pow(p, 2)) + pow(x, 3));
	y = pow(a, 3) / pow(b, 2);

	//5.4

	x = 2.7;
	t = -6;

	a = log10(x);
	b = sqrt(pow(x, 2) + pow(t, 2))

	//5.5

	t = 4.1;
	p = 3;

	k = sqrt(p*t);
	x = p * pow(t, 2) + sqrt(k);
	y = pow(tan, 3)*pow(x, 2) + (k*t);*/

	//6.5

	
	int sutsec = 86400, k = 45000;
	float h, min;

	h= (float)k / (float)3600;
	int hh = h;
	min = k / 3600;

	printf("%d H : %f Min \n\n", hh, min);




	system("pause");




}