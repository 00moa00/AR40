#include <iostream>

using namespace std;

//while ��
int main()
{
	const int arrIndex = 10;
	int arr[arrIndex] = { 0, };

	int Index = 0, i = 0;

	while (true) //index != arrIndex
	{
		if (i % 2 == 0) //������ ���� 0 �̶��
		{
			arr[Index] = i;

			//cout << arr[Index] << endl; 
			Index++;
		}
		if (Index >= arrIndex) break;
		i++;
	}

	return 0;
}

//for ��
//int main()
//{
//
//	const int ArrIndex = 10;
//	int Arr[ArrIndex] = { 0, };
//
//	int index = 0;
//
//	for (int i = 0; index < ArrIndex; i++)
//	{
//		if (i % 2 == 0)
//		{
//			Arr[index] = i;
//
//			//cout << Arr[index] << endl;
//			index++;
//		}
//	}
//
//
//}