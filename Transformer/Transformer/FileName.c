/*서울시립대학교 전자전기컴퓨터공학부
  2016440095 이승수
  과제 2-1*/
#include<stdio.h> //Standard Input/Output library header(별도 지정없을시 입력 키보드, 출력 모니터)

// 함수 선언
void trans(int num, int base) { // 변환할려는 숫자는 num, 진수는 base
	if (num == 0) {
		return; //num이 0이 되거나 0이면 함수 종료
	}
	else {      //num이 0 아니면 trans를 재귀적으로 호출
		trans(num / base, base);
		if (num % base < 10) printf("%d", num % base); //나머지가 10미만이면 그대로 나머지를 출력
		else printf("%c", 'A'+ (num % base)-10); //나머지가 10이상이면 10을 빼고 아스키코드 첫 문자인 'A'을 더해서 출력.

	}
		

}
// 메인 함수
int main(void) {
	int num, base; // 변환할려는 숫자는 num, 진수는 base

	//입력단
	printf("10진수를 입력하세요: "); //num을 입력하라는 명령 출력
	scanf_s("%d", &num);
	printf("바꿀려는 진수를 입력하시오(2~16): "); // base를 입력하라는 명령 출력
	scanf_s("%d", &base);
	if (base < 2 || base>17) { // 입력한 진수가 범위내가 아닐 시 아래 문구 출력
		printf("진수가 잘 못 입력되었습니다. 2~16사이의 숫자를 입력하시오.");
		return 1; // 시스템에 오류임을 알리고 종료한다.
	}
	//결과 출력단
	printf("%d를 %d진수로 바꾼 결과는 ", num,base); // 결과 출력
	if (num == 0) { //num이 0이면 trans함수 호출 없이 그냥 바로 0으로 출력
		printf("%d입니다", 0);
		return 0; // 문제 없다는 뜻의 return0
	}
	trans(num, base); // trans 함수 출력
	printf("입니다.\n");
}