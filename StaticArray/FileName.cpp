#include <iostream>
#include <locale.h>
#include <stdio.h>
#include<stdlib.h>


using namespace std;

void One()
{
	printf("������� ���������� �������� ������, ��������� ���, ������� �������� �� �����\n");
	int arr[10];
	for (int i = 0; i < 10; i = i + 1) {
		arr[i] = i;
	}

	for (int i = 0; i < 10; i = i + 1) {
		printf("%d\t", arr[i]);
	}
}


void OneTwo()
{
	printf("������� ��������� �������� ������, ��������� ���, ������� �������� �� �����\n");
	int arr[10][5];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = i*2;
		}
		
	}
	for (int i = 0; i < 10; i = i++) {
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

void OneThree()
{
	printf("C������ ������ (������ ��������), ��������� ���, ������� �������� �� �����\n");
	int n, i;
	printf("������� ���������� �������� � �������: ");
	scanf_s("%d", &n); 
	char* array_char = (char*)malloc(n * sizeof(char));
	printf("������� ������: ");
	for (i = 0; i < n; i++)
	{
		scanf_s(" %c", array_char + i);
	}
	printf("\n���� ������: \n\n");
	for (i = 0; i < n; i++)
	{
		printf("%c", array_char[i]);
	}
}

void Search(int s, int array_two[])
{
	
	int sss=0;
	for (int i = 0; i < 10; i++)
	{
		if (array_two[i] == s)
		{
			sss = i+1;
		}
		
		
	}
	if (sss != 0)
		printf("�������� �������� ���� ��������� ��� ������� %d ", sss);
	else
		printf("������ �������� � ������� ���");
}

void Sum(int array_two[])
{
	int summ =0;
	for (int i = 0; i < 10; i++) {
		summ = array_two[i] + summ;
	}

	printf("����� ��������� �������: %d", summ);
}

void Three(int r[]) {

	int n = 10;
	
	for (int i = 0; i < n; i++) {
		int obmen = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (r[i] > r[j])
			{
				obmen = r[i];
				r[i] = r[j];
				r[j] = obmen;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		printf("%d\t", r[i]);
	}
}

void Four(int array[4][4]) 
{
	int max = 0, min = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
		{
			if (array[i][j] > array[i][j+1])
			{
				if (max < array[i][j])
				{
					max = array[i][j];
				}
			}

			if (array[i][j] < array[i][j + 1])
			{
				if (min > array[i][j])
				{
					min = array[i][j];
				}
			}
		}
	}
	printf("������������ �������� = %d\t", max);
	printf("����������� �������� = %d\t", min);

}

int Length(char* array_char) {
	
	int length = 0;
	while (*array_char != '\0')
	{
		length++;
		array_char++;
	}
	return length;
}

void Rem(char* s) {
	char t[256];
	memset(t, 0, 256);
	size_t pos, end;
	pos = end = 0;
	while (s[pos]) {
		if (++t[s[pos]] == 1) {
			s[end] = s[pos];
			++end;
		}
		++pos;
	}
	s[end] = '\0';
}

void Encryption(char array_char[], int key)
{
	char ch;
	for (int i = 0; array_char[i] != '\0'; ++i) {
		ch = array_char[i];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch + key;
			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			array_char[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + key;
			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			array_char[i] = ch;
		}
	}
	printf("����������: %s\n", array_char);
}

void Decryption(char array_char[], int key)
{
	char ch;
	for (int i = 0; array_char[i] != '\0'; ++i) {
		ch = array_char[i];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch - key;
			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			array_char[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch - key;
			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			array_char[i] = ch;
		}
	}
	printf("������������: %s\n", array_char);
}


int main()
{
	setlocale(LC_ALL, "Rus");
	//����� 1.1
	//One();
	//����� 1.2
	//OneTwo();
	//����� 1.3
	//OneThree();

	//����� 2
	/*printf("����������� ���� ����������� ������� ����� �����. �������� �������, �����������: ����� ��������� ��������; ���������� ����� ��������� �������;\n");
	int array_two[10];
	for (int i = 0; i < 10; i++) {
		printf("\n������� %i ����� �����: ", i+1);
		scanf_s("%d", &array_two[i]);
	}
	for (int i = 0; i < 10; i = i + 1) {
		printf("%d\t", array_two[i]);
	}
	printf("\n������� ��������, ������� ������ �����: ");
	int s;
	scanf_s("%d", &s);
	Search(s, array_two);
	Sum(array_two);*/


	//����� 3
	/*int r[10] = {-5, 100, 22, 1, 0, -66, 85, 12, 55, -1};
	for (int i = 0; i < 10; ++i) {
		printf("%d\t", r[i]);
	}
	printf("\n");
	Three(r);*/


	//����� 4
	//printf("����������� ���� ���������� ������� ����� �����. ����������� ����� ������������� � ������������ �������� �������\n");
	//int array[4][4];
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("������� �������� �������� ��� ������� %d%d: ", i+1, j+1);
	//		scanf_s("%d", &array[i][j]);
	//		
	//	}

	//}
	//printf("��� ������: \n");
	//for (int i = 0; i < 4; i = i++) {
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%d\t", array[i][j]);
	//	}
	//	printf("\n");
	//}
	//Four(array);


	//����� 5
	/*printf("����������� ���������� ������� ��������\n");
	int array[4][4];
	int a = 1;

	for (int i = 0; i < 4; i++) {
		if (i % 2 < 1)
		{
			for (int j = 0; j < 4; j++)
			{
				array[i][j] = a++;
			}
		}
		else {
			for (int j = 3; j >= 0; j--)
			{
				array[i][j] = a++;
			}
		}

	}
	printf("��� ������: \n");
	for (int i = 0; i < 4; i = i++) {
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}*/


	//����� 6
	/*printf("�������� �������, ��������� ����� ������\n");
	char array_char[1000] = "��� ���� �� �����";
	printf("���� ������: %s\n", array_char);
	int length = Length(array_char);
	printf("����� ������: %d\n", length);*/
	

	//����� 7
	/*printf("�������� �������, ��������� �� ������ ������������� �������\n");
	char array_char[] = "Asd sssfd";
	printf("���� ������: %s\n", array_char);
	Rem(array_char);
	printf("���� ������ �����: %s\n", array_char);*/


	//����� 7
	printf("�������� ��������� ����������� ����������/������������ ������ ������. \nabcdefghijklmnopqrstuvwxyz \nFor key = 3 \nInput data : array \nCipher data : duudb\n\n");
	char array_char[10] = "abc";
	int key = 3;
	printf("���������  �����: %s\n", array_char);
	Encryption(array_char, key);
	Decryption(array_char, key);
	

}
