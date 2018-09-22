#include"furniture.h"

int main()
{
	{
		SofaBed sofabed(1);

		sofabed.watchTV();
		sofabed.sleep();
		sofabed.foldout();
	}

	system("pause");
	return 0;
}