#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


//类型的定义
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

//通讯录
typedef struct contact
{
	peoinfo data[max];
	int sz;//记录当前通讯录几个元素
}contact;

//初始化通讯录
void initcontact(contact* pc);

//增加一个人的信息
void AddContact(contact* pc);

//打印联系人的信息
void PrintContact(const contact* pc);

//删除联系人的信息
void DelContact(contact* pc);

//查找指定联系人
void SearchContact(contact* pc);

//修改指定联系人
void ModifyContact(contact* pc);
