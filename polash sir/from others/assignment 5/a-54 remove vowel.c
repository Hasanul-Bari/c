/** C Program - Delete Vowels from String */

#include<stdio.h>

#include<string.h>
 main()
{

	char str[20];
	int len, i, j;
	printf("Enter a string : ");
	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	printf("After deleting the vowels, the string will be : %s",str);

}