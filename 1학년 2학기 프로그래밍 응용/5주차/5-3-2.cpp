#include<stdio.h>
#include<string.h>

int main(){
	
	//�ʱ�ȭ 1. ���� ������ ���ÿ� �� �� �ʱ�ȭ 
	//�ʱ�ȭ 3. ���� ���� �ʱ�ȭ�� ���ÿ� 
	
	struct Goods{
		char name[20];
		double price;
		int storage;
		int madeyear;
	}G1, G3 = {"���ĵ�", 70000, 33, 2018};
	strcpy(G1.name,"��ǳ��");
	G1.price=50000;
	G1.storage=22;
	G1.madeyear=2019;
	
	//�ʱ�ȭ 2. ���� ���� �ʱ�ȭ�� �ѹ��� 
	struct Goods G2 = {
		"�̾���",
		30000,
		55,
		2020
	};
	
	
	//���
	printf("�̸�: %s\n", G1.name);
	printf("����: %lf\n", G1.price);
	printf("���: %d\n", G1.storage);
	printf("����⵵: %d\n\n", G1.madeyear);
	
	printf("�̸�: %s\n", G2.name);
	printf("����: %lf\n", G2.price);
	printf("���: %d\n", G2.storage);
	printf("����⵵: %d\n\n", G2.madeyear);
	
	printf("�̸�: %s\n", G3.name);
	printf("����: %lf\n", G3.price);
	printf("���: %d\n", G3.storage);
	printf("����⵵: %d\n\n", G3.madeyear);
	
}
