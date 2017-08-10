#include <cstdio>
#include <cstdlib>
int main()
{
	FILE* fp = fopen("test.txt", "r");
	char arr[1000];
	int ncnt = 0;
	while (fgets(arr,1000,fp) != NULL)
	{
		printf("%s", arr);
		
	}
	return 0;
}