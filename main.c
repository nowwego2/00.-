#include <stdio.h>
#include <stdlib.h>

void Pratice_Point_1()///----------------------------------------------------------------------------------------��ָͨ��
{
    char StR1[] = {"hihi  :D   Here is a fresh bird"};/*����һ��һά�ַ�������*/
    char *PointEr1;/*����һ��ָ��*/
    PointEr1 = &StR1[0];//��ָ��ָ���ַ������׵�ַ����Ϊ������ָ�롱
    printf("%s\n\n",PointEr1);//���ַ�����ʽ���ָ����ָ����ַ���
}

void Pratice_Point_6(char* i)///----------------------------------------------------------------------------------ָ�����
{
    printf("%s\n\n",i);
}


void Pratice_Point_2()///-----------------------------------------------------------------------------------------ָ������
{
    char *(PointEr2[]) =//�ڶ�����ָ�����飬����������������ָ�룬ָ�������ַ������׵�ַ
    {   "\\\\\\\\\\\\\\\\\\\\\\\\\\",
        "|||||||||||||",
        "//////////////////////////"
    };
    unsigned char i;//����ѭ��
    for(i = 0;i < 2;++i)
    {
        printf("%s\n",PointEr2[i]);
    }
}


void Pratice_Point_7()///------------------------------------------------------------------------------------------����ָ��
{
    int Team[2][3] = {{11,22,33},{44,55,66}};
    //int AAA[9] = {111,22,333,444,555,666,777,888,999};
    int (*Col)[3];
    Col = Team;//Col���ά�����������ȼ�
    printf("\n\n\n%d",Team[1][0]);
    printf("\n\n\n%d",(*(Team+1))[0]);//(*(Team+1)) = Team[1]
    printf("\n\n\n%d",*((Team+1)[0]));//�����ȷ����ַ����ȷ����ַ�е�ֵ
    printf("\n\n\n%d",Col[0][0]);//Colָ�����ά�����������ȼ�
}



void Pratice_Point_3()///------------------------------------------------------------------------------------------ָ��ָ��
{
    char **PointEr3;//��������ָ��ָ���ָ��
    char *PointEr2[] =//�ڶ�����ָ�����飬����������������ָ�룬ָ�������ַ������׵�ַ
    {
        "O~A~O---",
        "pu~pu~pu~pu~",
        "@_@"
    };
    unsigned char i;//����ѭ��
    for(i = 0;i < 3;++i)
    {
        PointEr3 = PointEr2 + i;//�õ�����ָ��-ָ���i��-ָ������-�ڵ�ָ��
        printf("\n\n%s\n",*PointEr3);
    }
}

unsigned long int Pratice_Point_4(unsigned long int i)///-----------------------------------------------------------����ָ��
{//������������ָ������ָ��  ���ߵ���������Ϊͬ�࣬���򱨴�
    unsigned long int (*PointEr4)();//����   ָ����   ��   ָ��
    PointEr4 = Pratice_Point_4;//ָ��ָ����
    if(i<=1)
    {
        return 1;
    }
    else
    {
        i = (*PointEr4)(i-1)*i;//�ݹ�
        return i;
    }
}

char *Pratice_Point_5(unsigned char i)///---------------------------------------------------------------------------ָ�뺯��
{
    char *PointEr[] =
    {
        "A~A~A---",
        "emmmm,H Hello ?",
        "TAT",
        "XD"
    };
    return PointEr[i];//����ָ��ֵ
}







int main()
{
    Pratice_Point_1();
    Pratice_Point_2();
    Pratice_Point_3();
    printf("%lu\n\n",Pratice_Point_4(10));
    printf("%s\n\n",Pratice_Point_5(3));
    Pratice_Point_6(Pratice_Point_5(2));
    Pratice_Point_7();
    getchar();
    return 0;
}
