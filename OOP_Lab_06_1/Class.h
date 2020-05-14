#pragma once

using namespace std;

template <typename T>
class Array
{
private:
	T* p;
	int count;
public:

	//����������� ��� ���������
	Array() { p = nullptr; count = 0; }

	//�������������
	//������� ����� ������
	~Array() { delete[] p; }

	/*
	�������� ����� ������� � ����� ������
	*/
	void Push_back(T newelem)
	{
		T* pnew = new T[count + 1];
		for (int i = 0; i < count; i++) {
			pnew[i] = p[i];
		}

		pnew[count] = newelem;
		delete[] p;
		p = pnew;

		count++;
	}


	/*
	�������� �� �������� ������
	*/
	void Puts_elem(void)
	{
		for (int i = 0; i < count; i++)
			cout << p[i] << endl;
	}

	/*
	�������� ������� ���� ��� �������� �������� ������
	*/
	int Sum_Elem(void)
	{
		int sum = 0;
		for (int i = 0; i < count; i++)
			sum += sizeof(p[i]);
		return sum;
	}

};


