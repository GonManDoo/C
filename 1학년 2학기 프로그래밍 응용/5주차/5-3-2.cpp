#include<stdio.h>
#include<string.h>

int main(){
	
	//초기화 1. 정의 선언을 동시에 한 후 초기화 
	//초기화 3. 정의 선언 초기화를 동시에 
	
	struct Goods{
		char name[20];
		double price;
		int storage;
		int madeyear;
	}G1, G3 = {"스탠드", 70000, 33, 2018};
	strcpy(G1.name,"선풍기");
	G1.price=50000;
	G1.storage=22;
	G1.madeyear=2019;
	
	//초기화 2. 정의 선언 초기화를 한번에 
	struct Goods G2 = {
		"이어폰",
		30000,
		55,
		2020
	};
	
	
	//출력
	printf("이름: %s\n", G1.name);
	printf("가격: %lf\n", G1.price);
	printf("재고: %d\n", G1.storage);
	printf("생산년도: %d\n\n", G1.madeyear);
	
	printf("이름: %s\n", G2.name);
	printf("가격: %lf\n", G2.price);
	printf("재고: %d\n", G2.storage);
	printf("생산년도: %d\n\n", G2.madeyear);
	
	printf("이름: %s\n", G3.name);
	printf("가격: %lf\n", G3.price);
	printf("재고: %d\n", G3.storage);
	printf("생산년도: %d\n\n", G3.madeyear);
	
}
