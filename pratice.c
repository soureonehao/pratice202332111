#include<stdio.h>
void main() {
	int score[10] = { 85, 90, 92,75, 78, 79,76,78,86,99 };	//���������ʮλͬѧ�ĳɼ�
	int figure,i;
	printf("�����������ѯ�ĳɼ���");
	scanf_s("%d", &figure);		//���뿼����
	for (i = 0; i < 10;i++) {
		if (figure == score[i]) {	//�ж����뿼�����Ƿ��������е������
			printf("�����ҵĳɼ��ǵ�%d��ͬѧ�ĳɼ�", i + 1);
		}
		else if(figure != score[i]) {
			printf("������ĳɼ�û�������У�");
			break;
		}
	}
}