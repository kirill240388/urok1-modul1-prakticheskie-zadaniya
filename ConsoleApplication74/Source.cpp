﻿#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cout << "Введите номер задания" << endl;
	cin >> task;
	if (task == 1)
	{
		/*1.	Объявить переменные, с помощью которых можно будет посчитать общую сумму покупки нескольких товаров.Например, плитки шоколада,
		кофе и пакеты молока.*/
		int chocolate, coffee, milk,price;
		chocolate = 100;
		coffee = 180;
		milk = 120;
		price = chocolate + coffee + milk;
		cout << price << endl;
	}
	if (task == 2)
	{
		/*2.*/	/*Объявить три переменные типа int и присвоить первой числовое значение, вторая переменная равна первой переменной,
			увеличенной на 3, а третья переменная равна сумме первых двух.*/
		
			int a, b, c;
			a = 8;
			b = a + 3;
			c = a + b;
			cout << c << endl;
		
	}
	if (task == 3)
	{
		/*3.	Объявить переменные, для подсчета общего количества предметов для сервировки стола.Например, чашки, 
		такое же количество блюдец и ложек.*/
		int cup, plate, spoon, total;
		cout << "Введите количество чашек" << endl;
		cin >> cup;
		cout << "Введите количество блюдец" << endl;
		cin >> plate;
		cout << "Введите количество ложек" << endl;
		cin >> spoon;
		total = cup + plate + spoon;
		cout << "Общее количество предметов сервировки- " << total << endl;

	}
	if (task == 4)
	{
		/*4.	На сайте практически любого коммерческого банка, можно встретить так называемый Депозитный калькулятор, 
		который позволяет людям, не желающим углубляться в формулы расчета процентных ставок, узнать какую прибыль они получат.
		Для этого им достаточно заполнить определённые поля, нажать на кнопку и увидеть результат.Это простая программа, 
		которую уже сможет написать каждый из вас.Итак, задача: Пользователь вводит сумму депозита и количество месяцев 
		хранения денег в банке.Необходимо провести расчет и показать на экран прибыль с депозита в месяц, за весь срок депозита, 
		и общую сумму к выплате в конце срока.Валюта пусть будет – доллар США.Процентная ставка – 5 % годовых.Формула расчета
		процентов в месяц – СуммаДепозита * (ПроцентнаяСтавка / 100) / ДнейВГоду * ДнейВМесяце.*/
		double sum, month,profit,percent,deposit,payment;
		percent = 5;
		cout << "Введите сумму вклада" << endl;
		cin >> sum;
		cout << "Введите количество месяцев хранения на депозите" << endl;
		cin >> month;
		profit = sum*(percent / 100) / 365 * 30;
		deposit = profit*month;
		payment = sum + deposit;
		cout << "Месячная прибыль с депозита составит " <<profit<<" usd"<< endl;
		cout << "Прибыль за весь срок депозита составит " << deposit << " usd" << endl;
		cout << "Общая сумма к выплате составит " << payment <<" usd" << endl;


	}
	if (task == 5)
	{
		/*5.	Известны год и номер месяца рождения человека.Определить возраст человека.*/
		int year, month, currentyear,currentmonth, age;
		currentyear = 2018;
		currentmonth = 5;
		cout << "Введите год рождения" << endl;
		cin >> year;
		cout << "Введите месяц рождения" << endl;
		cin >> month;
		if (currentmonth > month)
		{
			age = currentyear - year;
		}
		else
		{
			age = currentyear - year - 1;
		}
		cout <<"Ваш возраст "<< age <<" лет"<< endl;
	}
	if (task == 6)
	{
		/*6.	Даны два действительных числа, а и b.Получить их сумму, разность и произведение.*/
		double a, b, sum,dif, proizv;
		cin >> a;
		cin >> b;
		sum = a+b;
		dif = a - b;
		proizv = a*b;
		cout << sum << endl;
		cout << dif << endl;
		cout << proizv << endl;

	}
	if (task == 7)
	{
		/*7.	Даны два действительных положительных числа.Найти среднее арифметическое этих чисел.*/
		double a, b, c;
		a = 5;
		b = 6;
		c = a*b / 2;
		cout << c << endl;
	}
	if (task == 8)
	{
		/*8.	Даны катеты треугольника.Найти его гипотенузу и площадь. (Если известна длина обоих катетов, то ее размер вычисляется 
		по теореме Пифагора : сумма квадратов двух катетов равняется квадрату гипотенузы.)*/
		double a, b, c;
		a = 2;
		b = 3;
		c = pow((a*a + b*b), 0.5);
		cout << c << endl;
	}
	if (task == 9)
	{
		/*9.	Написать программу, предназначенную для расчета площади кольца по известному внутреннему r и внешнему R радиусам кольца. 
		(S = п*(R2 – r2))*/
		double s, n, r, R;
		r = 7;
		R = 5;
		n = 3, 14;
		s = n*(r*r - R*R);
		cout << s << endl;
	}
	if (task == 10)
	{
		/*10.	Вывести на одной строке числа 1, 13 и 49 с одним пробелом между ними*/
		cout << "1 " << "13 " << "49" << endl;
	}
	if (task == 11)
	{
		/*11.	Даны стороны прямоугольника a и b.Найти его площадь S = a•b и периметр P = 2•(a + b).*/
		double a, b, s, p;
		a = 4;
		b = 8;
		s = a*b;
		p = 2 * (a + b);
		cout << s << endl;
		cout << p << endl;
	}
	if (task == 12)
	{
		/*12.	Дан диаметр окружности d.Найти ее длину L = π•d.В качестве значения π использовать 3.14.*/
		double d, l, p;
		d = 9;
		p = 3.14;
		l = p*d;
		cout << l << endl;
	}
	if (task == 13)
	{
		/*13.	Дана длина ребра куба a.Найти объем куба V = a3 и площадь его поверхности S = 6•a2.*/
		double a, v, s;
		a = 3;
		v = a*a*a;
		s = 6 * a*a;
		cout << v << endl;
		cout << s << endl;
	}
	if (task == 14)
	{
		/*14.	Даны длины ребер a, b, c прямоугольного параллелепипеда.Найти его объем V = a•b•c и площадь поверхности S = 2•(a•b + b•c + a•c).*/
		double a, b, c, v, s;
		a = 3;
		b = 6;
		c = 5;
		v = a*b*c;
		s = 2 * (a*b + b*c + a*c);
		cout << v << endl;
		cout << s << endl;
	}
	if (task == 15)
	{
		/*15.	Найти длину окружности L и площадь круга S заданного радиуса R : L = 2•π•R, S = π•R2*/
	
		double r, l, s, p;
		r = 7;
		p = 3.14;
		l = 2 * p*r;
		s = p*r*r;
		cout << l << endl;
		cout << s << endl;
	}
	if (task == 16)
	{
		/*В шкатулке хранится разноцветный бисер(или бусины).Все бусины имеют одинаковую форму, размер и вес.Бусины могут быть одного из N 
		различных цветов.В шкатулке много бусин каждого цвета.
			Требуется определить минимальное число бусин, которые можно не глядя вытащить из шкатулки так, чтобы среди них гарантированно
			были две бусины одного цвета.
			Входные данные
			Входная переменная содержит одно натуральное число N - количество цветов бусин(1 ≤ N ≤ 109).
			Выходные данные
			выведите ответ на поставленную задачу.*/
		double n,bus, percent,qty,simcolor,garant,prob;
		cout << "Введите количество цветов бусин n" << endl;
		cin >> n;
		cout << "Введите количество бусин >n" << endl;
		cin >> qty;
		cout << "Введите процент достоверности вытащить две бусины одинакового цвета (0<%<100)" << endl;
		cin >> garant;
		simcolor = qty / n;//количество бусин одинаковых цветов
		percent = simcolor / (qty-1);//вероятность вытащить бусину того же цвета
		prob = 1 - percent;
		for(int i=1;prob>1-garant/100;i++)
		
		{
			prob *= 1 - percent;

			cout << "Необходимо вытащить минимум " << i << " бусин, чтобы вероятность вытащить вторую бусину одинакового цвета была = " << 1-prob << " %" << endl;

		}

	}
	if (task == 17)
	{
		/*Неспокойно сейчас на стапелях шестого дока межгалактического порта планеты Торна.Всего через месяц закончится реконструкция малого
		броненесущего корвета “Эния”.И снова этому боевому кораблю и его доблестной команде предстоят тяжелые бои за контроль над плутониевыми
		рудниками Сибелиуса.Работа не прекращается ни на секунду, лазерные сварочные аппараты работают круглые сутки.От непрерывной работы
		плавятся шарниры роботов - ремонтников.Но задержаться нельзя ни на секунду.
			И вот в этой суматохе обнаруживается, что термозащитные панели корвета вновь требуют срочной обработки сульфидом тория.Известно, 
			что на обработку одного квадратного метра панели требуется 1 нанограмм сульфида.Всего необходимо обработать N прямоугольных
			панелей размером A на B метров.Вам необходимо как можно скорее подсчитать, сколько всего сульфида необходимо на обработку
			всех панелей “Энии”.И не забудьте, что панели требуют обработки с обеих сторон.
			Входные данные
			содержатся 3 целых положительных числа N(N ≤ 100), A(A ≤ 100), B(B ≤ 100)
			Выходные данные
			нужно вывести единственное число – вес необходимого для обработки сульфида тория в нанограммах.*/
		double a, b, n, w;
		a = 5;
		b = 4;
		n = 8;
		w = 2 * a*b*n;
		cout << "Необходимо " << w << " нанограмм сульфида тория" << endl;

	}





}