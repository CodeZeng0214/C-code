#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ѭ�����
int main()
{
 //while���
    //while�����ʽ��
       //ѭ����䣻
    
    //����Ļ�ϴ�ӡ1-10
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    
    //while�е�break��contine
    int a = 1;
    while (a <= 10)
    {
        if (a == 5)
            break;//��whileѭ�����������õ���ֹѭ��
        printf("%d ", a);
        a++;
    }
    int b = 0;
    while (b <= 9)
    {   b++;
        if (b == 5)
            continue;//������������ѭ����continue����Ĵ���
        printf("%d ", b);
    }//��������F10���е���

    //getchar��ȡһ���ַ����������ϵĲ�������Ϊ�ɶ�Ӧ���ַ�
    /*int ch = getchar();
        printf("%c\n", ch);
        putchar(ch);//���һ���ַ�*/
    int ch;
    //ctrl+z��ȡ����
    while ((ch = getchar()) != EOF)//!=����  EOF��end of file�ļ���������˼
                                //��ϻ������������������ʱ����-1���ʼ�EOF��ʾ����ѭ��
    {
        putchar(ch);
    }

    //��������
    char mima[20] = { 0 };
    printf("����������\n");//����123456//�˴���������ÿո񣬿ո��ֿ���ȡ�Ӷ�Ӱ���Ժ�Ķ�ȡ//�����õ�  �н��
                        //getchar��scanf���������뺯���Ǵӻ��������ú���
    scanf("%s", mima);//�˴�������\n�ڻ�����
    printf("��ȷ�����루Y/N��");
    int tmp = 0;
    while ((tmp = getchar()) != '\n')
    {
        ;
    }//����ѭ���������Ķ���
    getchar();//������������������\n
    int ch0 = getchar();//��û�������˴�getchar�õ��ǻ��������µĶ���
    if (ch0 = 'Y')
    {
        printf("ȷ�ϳɹ�\n");
    }
    else
    {
        printf("ȷ��ʧ��\n");
    }

    //���Ӵ�ӡ���������ַ�
    int ch1;
    while ((ch1 = getchar()) != EOF)
    {
       
        if (ch1 < '0' || ch1 > '9')
            continue;
            putchar(ch1);
        
    }


    return 0;
}
     