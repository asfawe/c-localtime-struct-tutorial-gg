#include <stdio.h>
#include <time.h>
// localtime() �Լ��� ����Ǿ� �ִ� time.h�� �����մϴ�. 
// localtime() �Լ��� ������ ������ �����ϴ�.

// struct tm *localtime(const time_t *timer);

// timer�� time_t�� ���ǵ� ������ ���Դϴ�. 

void main(void)
{
	time_t now;	
	struct tm t;
	// localtime() �Լ����� ���Ǵ� struct tm ����ü�� �����մϴ�. 
	
	time(&now);
	
	t = *localtime(&now);
	// time() �Լ����� ���� now ���� struct tm ����ü ������ ��ȯ�մϴ�. localtime() �Լ��� struct
	// tm ����ü�� ������ ���� ��ȯ�ϱ� ������ �����Ͱ� ����Ű�� ���� ��� ���� *localtime()ó�� ����Ͽ����ϴ�.
	// ����, ���� ������(=)�� ����ü�� ������ �� �ֱ� ������ struct tm ����ü t�� localtime() �Լ����� ������
	// struct tm ����ü�� ������ �� �ֽ��ϴ�. 
	// t�� �׷��� localtime�� ����ü�� ����� �� �ְ� �Ǿ����ϴ�! 
	// �׷��� �ؿ��� ����ϴ°� �� �� �ֽ��ϴ�. 
	
	printf("���� ��¥ �� �ð� : %4d.%d.%d.%d.%d.%d \n", 
		t.tm_year+1900, t.tm_mon+1, t.tm_mday, 
		t.tm_hour, t.tm_min, t.tm_sec);
	// ���� ��¥ �� �ð��� ����մϴ�. ��, ���� ��¥�� ��� ��, 
	// tm_year���� 1900�� �����־�� �ϸ�, tm_mon���� 1�� �����־�� �մϴ�. 
	// �ѱ��� ���� ǥ�ؽú��� 9�ð� ������ ������ time() �Լ����� ���� �ð����� 9�ð� Ů�ϴ�. 
} 
