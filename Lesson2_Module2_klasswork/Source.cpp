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
	printf("������� ����� � ����������� ");
	scanf_s("%d", &cm);
	m = cm / 100;
	printf("%d m \n\n", m); */

	//3

	int sec;
	printf("������� ���-�� ������ ");
	scanf_s("%d", &sec);
	float min = (float)sec / 60;
	printf("��������� � ������� %f\n\n", min);

	system("pause");




}