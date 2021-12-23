#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void PrimeNumber(int);

// int main(void)
// {
//     int num;
//     printf("10개의 소수 출력(10입력): ");
//     scanf("%d", &num);

//     PrimeNumber(num);

//     return (0);
// }

// void PrimeNumber(int num)
// {   
//     int primeNumCount = 0;
//     for (primeNumCount = 0; primeNumCount < num; )
//     {
//         for (int j = 1; primeNumCount < num; j++)
//         {
//             int count = 0;
//             for (int k = 1; k <= j; k++)
//             {
//                 if (j % k == 0)
//                 {
//                     count += 1;
//                 }
//             }
//             if (count == 2)   
//             {
//                 primeNumCount += 1;
//                 printf("%d ", j);
//             }
//         }
//     }
//     return;
// }

// 해답
int IsPrime(int n); // 소수인지 판별하는 함수 선언

int main(void)
{
	int i=2, cnt=0; // 2부터 함수시작, cnt = 10개 카운트용 변수

	while(cnt!=10)  // cnt가 10개 까지 반복
	{
		if(IsPrime(i)==1)   // 함수 리턴값이 1(true)이면 실행
		{
			printf("%d ", i);   // i값 출력
			cnt++;  // cnt값 1 증가
		}
		i++;    // i값 1 증가
	}
	return 0;
}

int IsPrime(int n)	   // 소수 판별 함수 정의, 인자 값으로 main함수 i를 받아옴
{
	int divisors=0, i;  // 약수 변수 선언
	
	for(i=1; i<=n; i++) // IsPrime(i) 가 i(main) 값과 같을때까지 반복
	{
		if(n%i==0)  // IsPrime(i) 가 i(main)의 약수면 약수 변수값 1 증가
			divisors++;
	}

	if(divisors==2) // 약수 변수 값이 2이면 소수이므로 1(true)리턴
		return 1;

	return 0;   // 함수 종료
}