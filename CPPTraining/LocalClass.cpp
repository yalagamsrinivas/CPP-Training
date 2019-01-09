#include <iostream>

using namespace std;
void DummyFunction()
{
	class CExample
	{
		int m_nData;
	public:
		void SetData(int nData)
		{
			this->m_nData = nData;
		}
		int GetData()
		{
			return this->m_nData;
		}
	}obj;

	obj.SetData(10);
	cout << obj.GetData() << endl;
}
//int main()
//{
//
//	DummyFunction();
//	return EXIT_SUCCESS;
//}

int main(void)
{
	int p1[10];
	int *p2[10];
	int(*p3)[10];
	int *ptr = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		ptr[i] = i;
	}

	cout << ptr << endl;
	cout << ptr + 1 << endl;
	printf("sizeof(int)   = %d\n", (int)sizeof(int));
	printf("sizeof(int *) = %d\n", (int)sizeof(int *));
	printf("sizeof(p1)    = %d\n", (int)sizeof(p1));
	printf("sizeof(p2)    = %d\n", (int)sizeof(p2));
	printf("sizeof(p3)    = %d\n", (int)sizeof(p3));
	printf("sizeof(ptr)   = %d\n", (int)sizeof(p3));
	printf("sizeof(*ptr)  = %d\n", (int)sizeof(p3));
	system("pause");
	return 0;
}