#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>

using namespace std;


#define sizeArr 12

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int z;
	do
	{
		cout << "Kakoe zadanie?" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{
			//1.	*��������, ���������, ������� ��������� ������� ����� �� 6 �������.������������ ������ ������� ����� �� ������ �����.
			int m[6], sum = 0;
			for (int i=0; i < 6; i++)
			{
				cout << "Vvedite pribyl'?!" << endl;
				cin >> m[i];
			}
			for (int i=0; i < 6; i++)
			{
				sum += m[i];
			}
			cout << "Pribyl' za 6 mesyacev = " << sum << endl;
		}
		break;

		case 2:
		{
			//2.	*�������� ���������, ������� ������� ���������� ������ � �������� �������
			int arrNumber[sizeArr];
			for (int i = 0; i < sizeArr; i++)
			{
				arrNumber[i] = 1 + rand() % 99;
				cout << arrNumber[i] << endl;
			}
			for (int i = 0; i < sizeArr; i++)
			{
				for (int j = (sizeArr - 1); j > i; j--)
				{
					if (arrNumber[j - 1] > arrNumber[j])
					{
						int temp = arrNumber[j - 1];
						arrNumber[j - 1] = arrNumber[j];
						arrNumber[j] = temp;
					}
				}
			}
			cout << endl;
			for (int a = 0; a < sizeArr; a++)
			{
				cout << arrNumber[a] << endl;
			}
		}
		break;

		case 3:
		{
			//3.	*������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ���������� ��������� �������� �������������(�������� � ����� ���� ������).
			int m[5], sum = 0;
			for (int i = 0; i < 5; i++)
			{
				m[i] = 1 + rand() % 20;
				cout <<m[i] << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				sum += m[i];
			}
			cout << "Summa = " << sum << endl;
		}
		break;

		case 4:
		{
			/*6.	**������������ ������ ������� ����� �� ���(12 �������).
				�����  ������������ ������ ��������(��������, 3 � 6 � ����� ����� 3 - � � 6 - � �������).���������� ���������� �����,
				� ������� ������� ���� ����������� � �����, � ������� ������� ���� ���������� � ������ ���������� ���������.*/
			int arrNumber[sizeArr], a, b, min, max;
			for (int i = 0; i < sizeArr; i++)
			{
				arrNumber[i] = 1 + rand() % 99;
				cout << arrNumber[i] << endl;
			}
			cout << "Zadaite diapozon chisel?" << endl;
			cin >> a;
			cin >> b;
			for (int i = a; i < b; i++)
			{
				max = 0;
				min = 0;
				for (int j = i + 1; j < 12; j++)
				{

					if (arrNumber[j] > arrNumber[max])
						max = j;
					
					if (arrNumber[j] < arrNumber[min])
						min = j;
				}
				
			}
			cout << "-------------------------------------" << endl;
			cout << "Max = " << arrNumber[max] << endl << "Min = " << arrNumber[min] << endl;
		}
		break;

		case 5:
		{/*
			7.	**� ���������� �������, ��������� �� N ������������ ����� ��������� :
			�	����� ������������� ���������.
				�	������������ ���������, ����������� ����� min � max ����������.
				�	������������ ��������� � ������� ��������.*/
			int k[40], sum = 0, pr = 1, min, max;
			for (int i = 0; i < 40; i++)
			{
				k[i] = -20 + rand() % 100;
				cout <<k[i] << endl;
			}

			cout << "--------------" << endl;
			for (int i = 0; i < 40; i++)
			{
				if (k[i] < 0 )
					sum += k[i];
			}
			cout << "Summa otricatel'nyh = " << sum << endl;
			for (int i = 0; i < 40; i++)
			{
				max = 0;
				min = 0;
				for (int j = i + 1; j < 40; j++)
				{

					if (k[j] > k[max])
						max = j;

					if (k[j] < k[min])
						min = j;
				}
			}
			for (int i = min; i < max; i++)
			{
				pr =pr* k[i];
			}
			cout << "Proizvedeniya mezhdu min i max = " << pr << endl;
			for (int i = 0; i < 40; i++)
			{
				if (i % 2 == 0)
				{
					pr = pr* k[i];
				}
			}
			cout << "Proizvedeniya chetnyh indexov = " << pr << endl;
		}
		break;

		case 6:
		{
			//9.	*�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� ��������.
			int arr[sizeArr];
			for (int i = 0; i < sizeArr; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			for (int i = 0; i < sizeArr; i++)
			{
				for (int j = (sizeArr - 1); j > i; j--)
				{
					if (arr[j - 1] > arr[j])
					{
						int temp = arr[j - 1];
						arr[j - 1] = arr[j];
						arr[j] = temp;
					}
				}
			}
			cout << endl;
			for (int a = 0; a < sizeArr; a++)
			{
				cout << arr[a] << endl;
			}
		}
		break;

		case 7:
		{
			//10.	**�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������
			int min, temp;
     		int arr[sizeArr];
			for (int i = 0; i < sizeArr; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			for (int i = 0; i < 12; i++)
			{
				min = i;
			for (int j = i + 1; j< 12; j++)
				{
					if (arr[j] < arr[min])
						min = j;
				}
				temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}
		cout << endl;
			for (int a = 0; a < sizeArr; a++)
			{
				cout << arr[a] << endl;
			}
		}
		break;

		case 8:
		{
			//11.	***�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������� ������.
			int k[19], key;
			
			for (int i = 0; i < 19; i++)
			{
				k[i] = 1 + rand() % 99;
				cout << k[i] << endl;
			}
			cout << "Kakoe chislo naiti?" << endl;
			cin >> key;
				int count = 0;
			int left = 0;
			int right = 19;		
				int IsSearch = -1;
			while (left <= right)
			{
				count++;
				int mid = (left + right) / 2;
				if (key == k[mid])
				{
					IsSearch = mid;
					break;
				}
				if (key < k[mid])
					right = mid - 1;
				else
					left = mid + 1;
			}
			if (IsSearch == -1)
		    	cout << "Element ne naiden!" << endl;
			else
				cout << "k[" << IsSearch << "]=" << k[IsSearch] << "(za " << count << " prohodov)" << endl;
			cout << endl;
		}
		break;

		case 9:
		{
			//18.	***�������� ���������, ������� ������������ ��������� ���������� ����� �� ����� � ������� ��� ����� � ������.������� �������� �������, �������� �� ����� ���������.
			int m[15],n[30], k, k1;
			for (int i = 0; i < 15; i++)
			{
				m[i] = 10 + rand() % 80;
				cout << m[i] << endl;
			}
			cout << "------------" << endl;
			for (int i = 0; i < 30; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					k = m[j] / 10;
					k1 = m[j] % 10;
				}
				n[i] = k; 
				n[i + 2] = k1;
			}
			for (int j = 0; j < 30; j++)
			{
				cout << j<<" - " <<n[j] << "   ";
			}
		}
		break;

		case 10:
		{
			/*� ���������� ������� ����� ����� ��������� :
			a)	����� ���� ��������� �������
			b)	������� �������������� ���� ��������� �������
			c)	����������� �������
			d)	������������ �������*/
			int sum = 0, sr, max=0, min=0;
			int arr[20];
			for (int i = 0; i < 20; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			cout << "-------------------------------";
			for (int i = 0; i < 20; i++)
			{
				sum += arr[i];
			}
			sr = sum / 20;
			cout <<"Summa vseh elementov = " << sum << endl;
			cout << "Srednee arifmeticheskoe = " << sr << endl;
			for (int i = 0; i < 20; i++)
			{
				max = 0;
				for (int j = i + 1; j < 20; j++)
				{
					if (arr[j] > arr[max])
						max = j;
				}
			}
			for (int i = 0; i < 20; i++)
			{
				min = 0;
				for (int j = i + 1; j < 20; j++)
				{

					if (arr[j] < arr[min])
						min = j;
				}
			}
			cout << "Max = " << arr[max] << endl << "Min = " << arr[min] << endl;

		}
		break;

		case 11:
		{
			//39.	**�������� ���������� ������.��������� ��� ���������� ������� � �������� �� �����.��������� ���������� ��������� � ������ ������ �������.���������� ��������� �������� �� �����.
			int m[4][4] = { { 0 },{ 0 } }, temp, min = 0, sum = 0, n[4];
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = 1 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += m[i][j];
				}
				n[i] = sum;
			}
			for (int i = 0; i < 4; i++)
			{
				cout << n[i] << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				min = i;
				for (int j = i + 1; j < 4; j++)
				{
					if (n[j] < n[min])
						min = j;

				}
				temp = n[i];
				n[i] = n[min];
				n[min] = temp;
			}
			for (int i = 0; i < 4; i++)
			{
				cout << n[i] << endl;
			}


		}
		break;

		case 12:
		{
			//51.	*�������� ���������, ������� �������� ��� ���� � ���������� ������� �� - 1.
			int m[4][4] = { { 0 },{ 0 } };
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = 0 + rand() % 10;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (m[i][j] == 0)
						m[i][j] = -1;
				}
			}
			cout << "----------------" << endl;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;

		case 13:
		{
			//47.	*�������� ���������, ������� ��������� ������ 5�5 ���������� ������� � ��������� �� a  �� b.a � b ������ ������������.
			int a, b;
			cout << "Vvedite chisla?" << endl;
			cin >> a;
			cin >> b;
			int m[10][10] = { {0},{0} };
			for (int i = 0; i < a; i++)
			{
				for (int j = 0; j < b; j++)
				{
					m[i][j] = 0 + rand() % 10;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}

		}
		break;

		}

	} while (z <= 0);

	system("pause");

}