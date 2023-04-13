/*헤더 정보를 담고 있는 소스 파일*/
/*header 1*/
/*서울시립대학교 전자전기컴퓨터공학부
  2016440095 이승수
  과제 2-2*/

#include <stdio.h> // stdio.h 헤더 포함

/*정수 자료형 파라미터 있는 최소공배수 출력 함수 
Least Common Multiple, Parameter O */

int LCM_P(int a, int b) { //두 수 a, b의 최소공배수를 구한다.
	int result; // result에 최소공배수를 저장

	int max = (a >= b) ? a : b; // a와 b 중 큰 수를 max에 저장
	while (1) {
		if ((max % a) == 0 && (max % b) == 0) { //a와 b중 큰 수부터 시작하여 1씩 늘리며 a와 b 모두에게 나누어 떨어지는 값을 찾는다.
			result = max; // 찾으면
			break; // 찾는 즉시 while을 나간다.
		}
		max++; // a와 b모두에게 나누어떨어지지 않을 시 max값을 1을 더 늘리고 다시 돌린다.
	}
	printf("%d와 %d의 최소공배수: %d \n", a, b, result); // 결과값 출력문
	return result; // 최소공배수 return
}


/*정수 자료형 파라미터 있는 최대공약수 출력 함수. 
Greatest Common Divisor, Parameter O */

int GCD_P(int a, int b) { //두 수 a, b의 최대공약수를 구한다, 
	int result = 0 ; // 초기화

	int min = (a <= b) ? a : b; //a와 b 중 작은 수를 min에 저장
	for (int i = min; i > 0; i--){ //a와 b중 작은 수부터 시작하여 1씩 줄이며 a와 b 모두에게 나누어 떨어지는 값을 찾는다.
		if ((a % i) == 0 && (b % i) == 0) {
			result = i; // 찾으면 result에 저장 하고 for문 나간다.
			break;
		}
	}
	printf("%d와 %d의 최대공약수: %d \n", a, b, result); // 결과값 출력문
	return result; // 최대공약수 return
}


/*정수 자료형 파라미터 있는 소수 판별 함수
Prime Number, Parameter O */

int PN_P(int a) { //a가 소수인지 판별한다.

	int result = 0; // 초기화

	if (a == 2) {  // 2는 for문에서 감지가 안되므로 별도로 구성
		result = 1; //2는 소수, result 1은 소수임을 뜻함
	}
	else {
		for (int i = 2; i < a; i++) { // 2부터 시작하여 a전까지 체크
			if (a % i == 0) { // 나누어 떨어지는지 체크
				result = 0; // 나누어 떨어지면 소수가 아니라는 뜻의 result 0
				break; // for문 끝냄
			}
			result = 1; // 모두 나누어 떨어지지 않았으면 소수이므로 result 1
		}
	}
	if (result == 0) { // 소수가 아니다
		printf("%d는 소수가 아닙니다.\n", a); //소수 아님을 출력
		return 0; //소수가 아니라는 뜻의 0을 return
	}
	else { // result 1, 소수이다.
		printf("%d는 소수입니다.\n", a); // 소수임을 출력
		return 1; //소수라는 뜻의 1을 return
	}
}

//////////////////////////////////////////////////////////////////////////////

/*파라미터 없이 수를 입력받는 최소공배수 출력 함수
Least Common Multiple, Parameter X */

int LCM(void) {
	int a,b; // 두 수 a, b

	// a, b을 입력 받는다.
	printf("첫번째 자연수를 입력하세요.\n");
	scanf_s("%d", &a);
	printf("두번째 자연수를 입력하세요.\n");
	scanf_s("%d", &b);

	int result; // result에 최소공배수를 저장

	int max = (a >= b) ? a : b; // a와 b 중 큰 수를 max에 저장
	while (1) {
		if ((max % a) == 0 && (max % b) == 0) { //a와 b중 큰 수부터 시작하여 1씩 늘리며 a와 b 모두에게 나누어 떨어지는 값을 찾는다.
			result = max; // 찾으면
			break; // 찾는 즉시 while을 나간다.
		}
		max++; // a와 b모두에게 나누어떨어지지 않을 시 max값을 1을 더 늘리고 다시 돌린다.
	}
	printf("%d와 %d의 최소공배수: %d \n", a, b, result); // 결과값 출력문
	return result; // 최소공배수 return
}

/*파라미터 없이 수를 입력받는 최대공약수 출력 함수
 Greatest Common Divisor, Parameter X */

int GCD(void) {
	int a,b;// 두 수 a, b

	// a, b을 입력 받는다.
	printf("첫번째 자연수를 입력하세요.\n");
	scanf_s("%d", &a);
	printf("두번째 자연수를 입력하세요.\n");
	scanf_s("%d", &b);

	int result = 0; // 초기화

	int min = (a <= b) ? a : b; //a와 b 중 작은 수를 min에 저장
	for (int i = min; i > 0; i--) { //a와 b중 작은 수부터 시작하여 1씩 줄이며 a와 b 모두에게 나누어 떨어지는 값을 찾는다.
		if ((a % i) == 0 && (b % i) == 0) {
			result = i; // 찾으면 result에 저장 하고 for문 나간다.
			break;
		}
	}
	printf("%d와 %d의 최대공약수: %d \n", a, b, result); // 결과값 출력문
	return result; // 최대공약수 return
}

/*파라미터 없이 수를 입력받는 소수 판별 함수
Prime Number, Parameter X */

int PN(void) {
	int a; // 확인할려는 숫자 a

	// a를 입력 받는다.
	printf("자연수를 입력하세요.\n");
	scanf_s("%d", &a);

	int result = 0; // 초기화

	if (a == 2) {  // 2는 for문에서 감지가 안되므로 별도로 구성
		result = 1; //2는 소수, result 1은 소수임을 뜻함
	}
	else {
		for (int i = 2; i < a; i++) { // 2부터 시작하여 a전까지 체크
			if (a % i == 0) { // 나누어 떨어지는지 체크
				result = 0; // 나누어 떨어지면 소수가 아니라는 뜻의 result 0
				break; // for문 끝냄
			}
			result = 1; // 모두 나누어 떨어지지 않았으면 소수이므로 result 1
		}
	}
	if (result == 0) { // 소수가 아니다
		printf("%d는 소수가 아닙니다.\n", a); //소수 아님을 출력
		return 0; //소수가 아니라는 뜻의 0을 return
	}
	else { // result 1, 소수이다.
		printf("%d는 소수입니다.\n", a); // 소수임을 출력
		return 1; //소수라는 뜻의 1을 return
	}
}