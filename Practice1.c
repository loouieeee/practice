// cpp practice.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	/**std::cout << "Hello World!\n";
	printf("helloworld\n");

	int n;
	printf("plz enter unm\n");
	scanf_s("%d", &n);
	if (n % 10) {
		printf("不是10的倍数\n");
	}
	else {
		printf("SHI SHIDE BEISHU");
	}

	int a, b;
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("A == B = %d \n", a == b);
	printf("A != B = %d \n", a != b);
	printf("A < B = %d \n", a < b);
	printf("A > B = %d \n", a > b);
	printf("A <= B = %d \n", a <= b);
	printf("A >= B = %d \n", a >= b);*/

	//int a, b, c;
	//int min;
	//scanf_s("%d", &a);
	//scanf_s("%d", &b);
	//scanf_s("%d", &c);
	//min = a;
	/*if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}*/
	//min = min > b ? b : min;
	//min = min > c ? c : min;
	//printf("min = %d\n", min);

	/*if ((a - b) > 10 || (b - a) > 10 || (a - b) < -10 || (b - a) < -10) {
		printf("cha dayu 10\n");

	}
	else {
		printf("cha xiayu 10\n");
	}

	int p ;
	scanf_s("%d",&p);
	if (p <= 100 && p >= 80) {
		printf("youxiu\n");
	}
	else if (p < 80 && p>= 60) {
		printf("liang\n");
	}
	else if (p < 60) {
		printf("bujige\n");
	}*/

	/*int n;
	scanf_s("%d", &n);
	switch (n & 1) {
		case 0:
			printf("偶数\n");
			break;
		case 1:
			printf("奇数\n");
			break;

	}

	int day;
	scanf_s("%d", &day);
	switch (day) {
		case 1:
			printf("monday\n");
			break;
		case 2:
			printf("tuesday\n");
			break;
		case 3:
			printf("wednesday\n");
			break;
			//etc

	}

	int n = 0;
	int a, b, c;
	while (n <= 999) {
		a = n / 100;
		b = n/ 10 % 10;
		c = n % 10;
		if (a * a * a + b * b * b + c * c * c == n) {
			printf("水仙花:%d\n", n);
		}
		n++;
	}*/

	//int n;
	/*int u = 0;
	while (u == 0) {
		printf("整数を入力してください:");
		scanf_s("%d", &n);
		switch (n % 10)
		{
		case 0:
			printf("その数は10で割り切れます。\n");
			break;
		default:
			printf("その数は10で割り切れません。\n");
			break;
		}
		do {
			printf("もう一度?[Yes...0/No...9]:");
			scanf_s("%d", &u);
		} while (!((u == 0) || (u == 9)));
	}*/
	/*int c;
	int u = 0;
	while (u == 0) {
		printf("非負の整数を入力してください:");
		scanf_s("%d", &n);
		if (n >= 0) {
			printf("%d を逆から読むと ", n);
			do {
				c = n % 10;
				n = n / 10;
				printf("%d", c);/* ひと桁づつ表示 */
				//		} while (n > 0);
					//	printf("です。");

				//		u = 1;/* whileを終了 */
				//	}
				//	else {
				//	}
				//}
	/*int n;
	int c;
	int u = 0;
//	while (u == 0) {
		printf("input a num\n");
		scanf_s("%d", &n);
		if (n >= 0) {
			printf("%d反过来是：", n);
			do {
				c = n % 10;
				n = n / 10;
				printf("%d", c);
			} while (n > 0);
		}
	}*/
	
//}
	
	/*int n;
	int c;
	int u = 0;
	while (u == 0) {
		printf("非負の整数を入力してください:");
		scanf_s("%d", &n);
		if (n >= 0) {
			printf("%d を逆から読むと ", n);
			do {
				c = n % 10;
				n = n / 10;
				printf("%d", c);/* ひと桁づつ表示 
			} while (n > 0);
			printf("です。");

			u = 1;/* whileを終了 */
		//}
	//	else {
		//}
//	}
	//int n;
	//int c = 0;
	//int u = 0;
	//while (u == 0) {
	//	printf("输入一个数:\n");
	//	scanf_s("%d", &n);
	//	if (n >= 0) {

	//		do {
	//			c += 1;
	//			n = n / 10;
	//		} while (n > 0);
	//		printf("这个数是%d位数\n", c);
	//		u = 1;
	//	}
	//	/*else {

	//	}*/
	//}
	

	/*int num;
	int i = 0;
	
	while (i == 0) {

	printf("input num:\n");
	scanf_s("%d", &num);
		if (num % 10 == 0) {
			printf("num能被10整除\n");
		}
		else {
			printf("num不能被10整除\n");
		}
		printf("是否再输入一次？是输入0，否输入9:\n");
		scanf_s("%d", &i);

	}*/
	

	/*int i = 0;
	int c;int n = 0;
	int num;
	
	
	
	while (n == 0) {
		printf("输入一个数字:\n");
		scanf_s("%d", &num);
		if (num >= 0) {
			printf("这个数反过来是：");
			while (num != 0) {
				c = num % 10;
				num = num / 10;
				printf("%d", c);
			}
		}
		else {
			printf("请输入正整数.\n");
		}
		printf("\n是否继续 yes.0 no.9:\n");
		scanf_s("%d", &n);
	}*/



	/*int num;
	
	int h = 0;
	while (h == 0) {
		printf("请输入一个数字：\n");
		int j = 0;
		scanf_s("%d", &num);
		printf("这个数字从一开始的和是:");
		for (int i = 0; i <= num; i++) {
			j = j + i;

		}
		printf("%d\n", j);
	}*/

	//int i, j;
	//for (i = 1; i <= 9; i++) {
	//	for (j = 1; j <= i; j++) {
	//		cout << j << "*" << i << "=" << i * j <<"\t";
	//	}
	//	cout << endl;
	//}

	
	/*int num;
	printf("请输入整数:");
	scanf_s("%d", &num);
	if (num >= 0) {
		for (int i = num; i >= 0; i--) {
			printf("%d ", i);
		}
	}
	else {
		
	}*/
	

	/*int num;
	int u = 0;
	int c = 0;
	int i = 1;
	printf("请输入数字:\nno.1:\t");
	scanf_s("%d", &num);
	
		while (num != 9999) {
			
				c = c + num;
				i++;
				printf("no.%d:\t",i);
				scanf_s("%d", &num);
			}
		if (num == 9999) {
			printf("合计：%d平均是%.2lf", c,(double)c/(i-1));
		}*/

		
//int n;
//int c = 0;
//int sum = 0;
//printf("整数を入力してください:");
//do {
//	printf("NO.%d\t", c + 1);
//	scanf_s("%d", &n);
//	if (n != 9999) {
//		c++;
//		sum += n;
//	}
//} while (n != 9999);
//printf("合计是:%d 平均是%.2lf", sum, (double)sum / c);
	

//int n;
//int c;
//printf("整数を入力してください:");
//scanf_s("%d", &n);
//if (n > 0) {
//	for (c = 1; c <= n; c++) {
//		printf("%c", '0' + (c % 10));
//	}
//}



	/*int begin, end, step;
	printf("begin:");
	scanf_s("%d", &begin);
	printf("end:");
	scanf_s("%d", &end);
	printf("step;");
	scanf_s("%d", &step);
	for (int i = begin; i <= end; i += step) {
		printf("%dcm  标准体重:%.2lf\n", i, (i - 100) * 0.9);
	}*/
	
	
	/*int i;

		for (i = 1; i <= 50; i++) {
			printf("%d\t", i);
			if (i % 5 == 0) {
				printf("\n");
			}
		}*/
		

	/*for (int i = 1; i <= 9; i++) {
		printf("%d |", i);

		for (int j = 1; j <= 9; j++) {
			printf("%d\t",i * j);
		}
		printf("\n");
	
	}*/
	
	/*int l;
	int w;
	printf("请输入长：");
	scanf_s("%d", &l);
	printf("请输入宽：");
	scanf_s("%d", &w);
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= l; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//int l1, l2;
	//printf("输入其中一边:");
	//scanf_s("%d", &l1);
	//printf("输入另一边:");
	//scanf_s("%d", &l2);
	//int max;
	//int min;
	//max = l1 > l2 ? l1 : l2;
	//min = l1 < l2 ? l1 : l2;
	//for (int i = 1; i <= max; i++) {
	//	for (int j = 1; j <= min; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//int l;
	//printf("输入段数:");
	//scanf_s("%d", &l);
	//for (int i = 1; i <= l; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	/*int l;
	printf("输入段数:");
	scanf_s("%d", &l);
	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <=l- i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	/*int l;
	printf("输入段数:");
	scanf_s("%d", &l);
	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <= l -i +1 ; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	
	//int l;
	//printf("输入段数:");
	//{
	//	scanf_s("%d", &l);
	//	for (int i = 1; i <= l; i++) {
	//		for (int j = 1; j <= i - 1; j++) {
	//			printf(" ");
	//		}
	//		for (int j = 1; j <= l - i + 1; j++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//}
	/*int l;

	printf("输入段数:");
	scanf_s("%d", &l);
	for (int i = 1; i <= l; i++) {
		for (int j = 1; j <= l - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (i - 1) * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*int l, w, h;
	printf("长:");
	scanf_s("%d", &l);
	printf("宽:");
	scanf_s("%d", &w);
	printf("个数:");
	scanf_s("%d", &h);
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= l; j++) {
			for (int t = 1; t <= h; t++) {
				printf("*");
			}
			printf("\t");
		}
		printf("\n");
	}*/



	/*printf("input num:\n");
	int sum = 0;
	int vc[5];
	for (int i = 0; i < 5; i++) {
		printf("num%d:  ", i+1);
		scanf_s("%d", &vc[i]);
		sum = sum + vc[i];
	}
	printf("sum is %d\n", sum);
	printf("average is %.1lf", (double)sum / 5.0);*/


	/*int va[5] = { 30,20,10,0,0 };
	int vb[5];
	for (int i = 0; i < 5; i++) {
		vb[i] = va[i];
	}
	printf("va\tvb\n");
	printf("----------\n");
	for (int j = 0; j < 5; j++) {
		printf("%d\t%d\n", va[j], vb[j]);
	}*/

	//int va[5] = { 30,20,10,0,0 };
	//int vb[5];
	//for (int i = 0; i < 5; i++) {
	//	vb[i] = va[5-1-i];
	//}
	//printf("va\tvb\n");
	//printf("----------\n");
	//for (int j = 0; j < 5; j++) {
	//	printf("%d\t%d\n", va[j], vb[j]);
	//}

	//int t = 0;
	//int vc[7] = { 40,30,50,70,20,10,5 };
	//for (int i = 0; i < 7; i++) {
	//	printf("vc[%d] : %d\n", i, vc[i]);
	//}
	//for (int j = 0; j < 7/2; j++) {
	//	t = vc[j];
	//	vc[j] = vc[7 - 1 - j];
	//	vc[7 - 1 - j] = t;
	//	
	//}
	//for (int i = 0; i < 7; i++) {
	//	printf("vc[%d] : %d\n", i, vc[i]);
	//}

	/*int temp;
	int i = 0;
	int vc[7] = { 40,30,50,70,20,10,5 };
	for (i=0; i < 7; i++) {
		printf("vc[%d] : %2d\n", i, vc[i]);	
	}
	for (i=0; i < 7/2; i++) {
		temp = vc[i];
		vc[i] = vc[7 - 1 - i];
		vc[7 - 1 - i] = temp;

	}
	for (i=0; i<7; i++)
	{
		printf("vc[%d] : %2d\n", i, vc[i]);
	}*/
	
	/*
	int vl[5];
	int i;
	int sum = 0;
	printf("请输入身高：\n");
	for (i = 0; i < 5; i++) {
		printf("no.%d : ", i+1);
		scanf_s("%d", &vl[i]);
		sum = sum + vl[i];
	}
	printf("平均身高 : %.1lf", (double)sum / 5.0);*/

	
	/*double vc[5];
	int i = 0;
	double light = 1000.0;
	double weight = 0.0;
	double sum = 0;
	printf("请输入体重: \n");
	for (i = 0; i < 5; i++) {
		printf("no.%d : ", i + 1);
		scanf_s("%lf", &vc[i]);
		if (light > vc[i]) {
			light = vc[i];
		}
		if (weight < vc[i]) {
			weight = vc[i];
		}
		sum = sum + vc[i];
	}
	printf("最重的是：%.2lf, 最轻的是：%.2lf,平均体重：%.2lf\n", weight, light, sum / 5);*/
	
	/*int va[2][3] = { {1,2,3},{4,5,6} };
	int vb[2][3] = { {4,5,2},{2,6,8} };
	int ans[2][3] = { 0 };
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			ans[i][j] = va[i][j] + vb[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++){
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}*/
	
	
	/*int va[2][3] = { {1,2,3},{4,5,6} };
	int vb[3][2] = { {2,4},{1,3},{5,2} };
	int ans[2][2] = { 0 };
	int i;
	int j;
	int k;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			int c = 0;
			for (k = 0; k < 3; k++) {
				c = c + va[i][k] * vb[k][j];
			}
			ans[i][j] = c;
		}
	}
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 2; i++){
			printf("%d ",ans[j][i]);
		}
		printf("\n");
	}*/
	
	
	/*int i;
	double num;
	double sum = 0;
	printf("输入数字：\n");
	for (i = 0; i < 50; i++) {
		printf("no.%d: ", i + 1);
		scanf_s("%lf", &num);
		if (num != 9999) {
			sum = sum + num;
		}
		else {
			break;
		}
	}printf("合计：%.2lf 平均值：%.2lf",sum, sum /double( i + 1));*/
	


	/*int i;
	int j;
	int va[5] = { 10,20,30,40,50 };
	int vb[5] = { 11,22,33,44,55 };
	int sum[5] = { 0 };
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			sum[i] = va[i] + vb[5-1-i];
			

		}
			printf("va[%d] : %d ",i,va[i]);
			printf("vb[%d] : %d ",5-1-i,vb[5-1-i]);
			printf("和= %d \n", sum[i]);
		
	}*/
	
		
		
		
		
		
		
		
		


	
	
	

	
	











}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
