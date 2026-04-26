#include"标头.h"
int main() {
	printf("欢迎猜数字\n");
	srand((unsigned int)time(NULL));//srand()设置随机数种子（seed），种子不同，随机序列就不同
	                                //time(NULL)获取当前系统时间戳（从 1970 年到现在的秒数）→ 每秒都在变，所以种子永远不一样
									// (unsigned int)类型转换，把时间转成srand需要的整数格式（语法必需）
	int shuiji;
	shuiji=rand() % 100 + 1;
	printf("随机数为：%d\n",shuiji);
	int wanjia;

	while (1) {
		printf("请输入数字：");
	    scanf_s("%d", &wanjia);
		if (wanjia > 100 || wanjia < 0)
		{
			printf("输入数字在0到100内");
		}
		else if (wanjia < shuiji)
		{
			printf("小了\n");
		}
		else if (wanjia > shuiji)
		{
			printf("大了\n");
		}
		else {
			printf("答对了\n");
			break;
		}
	}
	return 0;
}