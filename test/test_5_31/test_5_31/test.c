#include<stdio.h>
#include<windows.h>
#include<math.h>

/*5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������*/

//void Function()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						if ()
//					}
//				}
//			}
//		}
//	}
//
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//void FindMurder()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++){
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') = 3){
//
//		}
//	}
//}

//�������
//#define ROW 10
//void Yang()
//{
//
//}

//��ת���֣������ƣ�
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++){
//		sum += ((value >> i) & 1)*pow(2, 31 - i);
//	}
//	return sum;
//}

//����ʹ��< > = if �Ƚ��������ֵĴ�С��λ���㣩
//(a - b) >> 31 ? -1 : (a - b ? 1; 0); //a-bΪ����ʱ����31λ��ʱ�������λ ��Ϊ�淵��-1 Ϊ��ʱ�ж�a-b ��a>b����0 a=b����0
//int Max(int a, int b)
//{
//	return (a - b) >> 31 ? -1 : (a - b ? 1 : 0);
//}

//�����ַ���

//int MyStrlen(char *str)
//{
//	int count = 0;
//	while (*str == '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}

//ArraySort(int *arr,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	whlie(left < right){
//		while (left < right && arr[left] % 2 == 1){
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0){
//			right--;
//		}
//		if (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
	/*int *left = arr;
	int *right = arr + len - 1;
	while (left < right){
		while (*left%2 != 0){
			left++;
		}
		while (*right % 2 == 0){
			right--;
		}
		if (left < right){
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}*/
//}

//yang
//int Yang(int arr[][3], int *px, int *py, int key)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0){
//		if (arr[x][y] == key){
//			*px = x;
//			*py = y;
//			return 1;
//		}
//		else if (arr[x][y] > key){
//			y--;
//		}
//		else{
//			x++;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 3;
//	int y = 3;
//	int key = 5;
//	int ret = Yang(arr, &x, &y, key);
//	if (ret){
//		printf("%d %d\n", x, y);
//	}
//	else{
//		printf("NO\n");
//	}
//	system("pause");
//	return 0;
//}



//�������鳤�ȱ���Ϊ���� 
//const int a = 10;  //������
//int arr[a] = { 0 };  //error

//�����ڱ���ʱȷ����С
//����������ʱ�����ڴ�
//����������1M/2M���ڴ�
//���������ڴ���ջ��

//�ַ��������޸�