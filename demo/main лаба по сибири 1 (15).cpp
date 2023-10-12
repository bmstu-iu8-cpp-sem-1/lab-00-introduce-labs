№1
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	cout << "1 " << "13 " <<  "48" << endl;
	system("pause");
	return 0;
}

№2
#include <stdio.h>
#include <iostream>

using namespace std;
	
	int main() 
	{int a;
	cout << "Enter random symbol";
	cin >>  a; 
	cout << "1" << a << "13" << a << "48" << endl;
	system("pause");
	return 0;
	}

№3
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter random 3 figure";
	cin >> a >> b >> c;
	cout << a << "  " << b << "  " << c << endl;
	system("pause");
	return 0;
}



№1
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, p;
	cout << "Enter а";
	cin >> a>>p;
	p = 12 * pow(a,2) + 7 * a - 12;
	cout << p <<  endl;
	   	system("pause");
	return 0;
}


#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
//С клавиатуры вводиятся объем и масса тела. Вывести на экран плотность материала этого тела.

int main()
{
	float m, V, p;
	cout << "Enter m and V";
	cin >> m >> V ;
	p =m/V;
	cout << p <<  endl;
	   	system("pause");
	return 0;
}
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;


№2
#include <iostream>
#include <math.h>
using namespace std;
//Составить программу решения линейного уравнения ax + b = 0 (a не равно 0). Числа a и b вводятся с клавиатуры.
int main()
{
	float a, x, b;
	cout << "enter a and b, a !=0";
	cin >> a >> b;

	if (a == 0)
		cout << "zero result";
	else if (a != 0)
	{
		x = (-1 * b) / a;
		cout << x;
	}
	system("pause");
	return 0;
}

№3
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
//Известны координаты на плоскости двух точек. Составить программу вычисления расстояния между ними. Координатывводятся с клавиатуры.
int main()
{
	int x1, x2, y1, y2;
	cout << "Enter x1 and x2, y1 and y2";
	cin >> x1 >> x2 >> y1 >> y2;
	cout << sqrt ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1))<<  endl;
	   	system("pause");
	return 0;
}

№4
//Даны основания и высота равнобедренной трапеции. Найти периметр трапеции. Данные вводятся с клавиатуры.
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int a, b, h, P;
 cout << "Enter a, b and h";
 cin >> a >> b>>h;
 P = sqrt((pow((b-a),2))+4*h)+b+a;
 cout << P << endl;
 system("pause");
 return 0;
}

№5
// Найти площадь кольца по заданным внешнему и внутреннему радиусам. Данные вводятся с клавиатуры.
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int S, r, R;
	cout << "Enter r and R";
	cin >> r >> R;
	S = 3.14 * (R - r);
	cout << S<< endl;
	   	system("pause");
	return 0;
}

№6
// Дана длина ребра куба. Найти объем куба и площадь его боковой поверхности. Данные вводятся с клавиатуры
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int a;
 std::cout << "enter a";
 std::cin >> a;
 std::cout << "S bok.poverh: " << 4 * a << std::endl;
 std::cout << "Objom: " << a * a * a << std::endl;
 system("pause");
 return 0;
}

№7
// Дана сторона квадрата. Найти его периметр. Данные вводятся с клавиатуры.
#include <stdio.h>
#include <iostream>
#include <math.h>
usi
inng namespace std;
t main()
{
	int a, p;
	cout << "Enter a";
	cin >> a;
	 p = 4*a;
	cout << p<< endl;
	   	system("pause");
	return 0;
}

№8
// Дан радиус окружности. Найти ее диаметр. Данные вводятся с клавиатуры.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int r;
	std::cout << "Enter a value r";
	std::cin >> r;
	std::cout << "Diameter is equal to" << r * 2;
	system("pause>>null");
	return 0;
}

№9
// Реализовать программу для приветсвия студента. Имя студента вводится с клавиатуры, а на экран выводится приветсвие Hello, %name%! My name is C++.
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	string surname;
	cout << "Enter your name and surname";
	cin>> name >> surname;
	cout << "Hello, " << name <<" " << surname << "! My name is C++!" << endl;
	system("pause");
	return 0;
}

№10
// С клавиатуры вводится слово из 7 букв. Неодходимо определить является ли это слово полиндромом - слово, которое ситается справа налево так же как и слева направо. Если слово является полиндромом, вывести на экран This is polindrom!, иначе - Sorry, this is not polindrom!.

#include <iostream> 
#include <cstring> 
using namespace std; 
bool check_polindrom(string word) 
{  
int len = word.length();  
for(int i = 0; i < len/2; ++i)  
{   
if(word[i] != word[len-i-1])   
{    
return false;   
}  
}  
return true;
 } 
int main() 
{  
string str;  
cout << "Enter the word: ";  
cin >> str;  
if(check_polindrom(str))  
{   
cout << "Word is polindrom!"; 
 }  
else  
{   
cout << "Sorry, is not polindrom!"; 
 }  
return 0; 
}

