#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


//���͵Ķ���
#define maxname 20
#define maxsex 10
#define maxtele 12
#define maxaddr 30
typedef struct peoinfo
{
	char name[maxname];
	char sex[maxsex];
	int age;
	char tele[maxtele];
	char addr[maxaddr];
}peoinfo;

#define max 1000

//ͨѶ¼
typedef struct contact
{
	peoinfo data[max];
	int sz;//��¼��ǰͨѶ¼����Ԫ��
}contact;

//��ʼ��ͨѶ¼
void initcontact(contact* pc);

//����һ���˵���Ϣ
void AddContact(contact* pc);

//��ӡ��ϵ�˵���Ϣ
void PrintContact(const contact* pc);

//ɾ����ϵ�˵���Ϣ
void DelContact(contact* pc);

//����ָ����ϵ��
void SearchContact(contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(contact* pc);
