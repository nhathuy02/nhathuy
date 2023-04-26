//////#include <stdio.h>
//////#include <conio.h>
//////# define maxsize 100
//////struct stack
//////{
//////	int data[100];
//////	int top;
//////};
//////void tao_stack(stack &s)
//////{
//////	s.top = -1;
//////}
//////int check_stack_rong(stack s)
//////{
//////	if (s.top == -1)
//////		return 1;
//////	return 0;
//////}
//////int check_stack_day(stack s)
//////{
//////	if (s.top >= maxsize)
//////		return 1;
//////	return 0;
//////}
//////int push(stack &s, int x)
//////{
//////	if (check_stack_day(s) == 1)
//////		return;
//////	s.top++;
//////	s.data[s.top]= x;
//////	return 1;
//////}
//////int pop(stack &s, int &x)
//////{
//////	if (check_stack_rong(s) == 1)
//////		return 0;
//////	x = s.data[s.top];
//////	s.top--;
//////	return 1;
//////}
//////int gettop(stack s, int &x)
//////{
//////	if (check_stack_rong(s) == 1)
//////		return 0;
//////	x = s.data[s.top];
//////	return 1;
//////}
//////void  tao_ds(stack &s)
//////{
//////	int n, x;
//////	printf("\n Cho biet so phan tu: ");
//////	scanf_s("%d", &n);
//////	for (int i = 0; i <= n; i++)
//////	{
//////		printf("\n nhap phan tu: ");
//////		scanf_s("%d", &x);
//////		push(s, x);
//////	}
//////}
//////void duyet_ds(stack s)
//////{
//////	int x;
//////	printf("\n cac phan tu trong ngan xep: \n");
//////	while (check_stack_rong(s) == 0)
//////	{
//////		printf("%4d", s.data[s.top]);
//////		pop(s, x);
//////	}
//////}