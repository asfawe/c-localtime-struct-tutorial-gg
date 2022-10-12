#include <stdio.h>
#include <time.h>
// localtime() 함수가 선언되어 있는 time.h를 포함합니다. 
// localtime() 함수의 원형은 다음과 같습니다.

// struct tm *localtime(const time_t *timer);

// timer는 time_t로 정의된 변수의 값입니다. 

void main(void)
{
	time_t now;	
	struct tm t;
	// localtime() 함수에서 사용되는 struct tm 구조체를 정의합니다. 
	
	time(&now);
	
	t = *localtime(&now);
	// time() 함수에서 구한 now 값을 struct tm 구조체 값으로 변환합니다. localtime() 함수가 struct
	// tm 구조체의 포인터 값을 반환하기 때문에 포인터가 가리키는 값을 얻기 위해 *localtime()처럼 사용하였습니다.
	// 또한, 대입 연산자(=)는 구조체를 대입할 수 있기 때문에 struct tm 구조체 t에 localtime() 함수에서 생성된
	// struct tm 구조체를 복사할 수 있습니다. 
	// t는 그러면 localtime의 구조체를 사용할 수 있게 되었습니다! 
	// 그래서 밑에서 사용하는걸 볼 수 있습니다. 
	
	printf("현재 날짜 및 시간 : %4d.%d.%d.%d.%d.%d \n", 
		t.tm_year+1900, t.tm_mon+1, t.tm_mday, 
		t.tm_hour, t.tm_min, t.tm_sec);
	// 현재 날짜 및 시간을 출력합니다. 단, 현재 날짜를 출력 시, 
	// tm_year에는 1900을 더해주어야 하며, tm_mon에는 1을 더해주어야 합니다. 
	// 한국은 세계 표준시보다 9시간 빠르기 때문에 time() 함수에서 얻은 시간보다 9시간 큽니다. 
} 
