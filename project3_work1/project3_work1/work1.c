/*서울시립대학교 전자전기컴퓨터공학부 
  2016440095 이승수
  과제 1*/
#include<stdio.h> //Standard Input/Output library header(별도 지정없을시 입력 키보드, 출력 모니터)

int main(void) {
	char name[30], major[30];  // 문자열, name:이름. major:전공
	int birthday, code;   // 정수 자료형, birthday:생년월일, code:학번

	// <입력단계>
	printf("당신의 이름을 입력하시오.\n");  // 이름입력지시 출력
	scanf_s("%s", name, sizeof(name));  // 입력받은 이름을 name에 저장 ; 문자열 서식문자 %s, 문자열은 그 자체가 포인터
	printf("당신의 생년월일 8자리를 입력하시오.\n");   // 생년월일 입력지시 출력
	scanf_s("%d", &birthday);  //입력받은 생년월일을 birthday에 저장 ; 정수 형 서식문자 %d, &으로 포인터 
	printf("당신의 학번을 입력하시오.\n");   // 학번 입력지시 출력
	scanf_s("%d", &code);   //입력받은 학번을 code에 저장
	printf("당신의 학과명을 입력하시오.\n");   // 학과명 입력지시 출력
	scanf_s("%s", major, sizeof(major));  //입력받은 학과명을 major에 저장

	// <출력단계>
	printf("\n\n\n이름 : %s\n", name);   //저장된 이름을 출력
	printf("생년월일 : %d\n", birthday);   //저장된 생년월일을 출력
	printf("학번 : %d\n", code);   //저장된 학번을 출력
	printf("학과명 : %s\n", major);   //저장된 학과명을 출력
}