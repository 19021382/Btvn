#include <iostream>

using namespace std;

int str_len(const char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}

char * Reverse(const char *s)
{
	int len = str_len(s);
	char* blank = new char[len];
	for(int i = len-1; i>= 0; i--){
		blank[i] = s[len-i-1];
	}
	return blank;
}

char * delete_char(const char * s,const char * b)
{
    int len = str_len(s);
    char * blank = new char[len];

    int j=0;
    for(int i = 0; i <= len-1; i++)
        if (s[i] != b[0]){
            blank[j] = s[i];
            j ++ ;
        }

    return blank;
}


char*truncate(const char *s, const int n)
{
	int len = str_len(s);
	char * blank = new char[min(n,len)];
	if(len>n){
		for(int i = 0; i<min(len,n);i++) blank[i] = s[i];
	}
	else for(int i = 0;i<len;i++) blank[i] = s[i];
	return blank;
}

char * trim_left(const char *s)
{
    int len = str_len(s);
    int j=0;
    for (int i=0; i<len; i++)
        if (s[i]!=' ')
        {
            j=i;
            break;
        }
    char * blank = new char[len-j];
    for(int i=j; i<len; i++) blank[i-j] = s[i];
    return blank;
}
char * trim_right(const char *s)
{
    int len = str_len(s);
    int j=len-1;
    for (int i=len-1; i>=0; i--)
        if (s[i]!=' ')
        {
            j=i;
            break;
        }
    char * blank = new char[j+1];
    for(int i=0; i<=j; i++) blank[i] = s[i];
    return blank;
}

char * pad_left(const char *s,const int n)
{
    int len = str_len(s);
    char * blank = new char[max(n,len)];
    if(len < n)
    {
        for (int i=0; i<n-len; i++) blank[i]='_';
        for (int i=n-len; i<n; i++) blank[i]=s[i-n+len];
    }
    else
        for (int i=0; i<len; i++) blank[i]=s[i];
    return blank;
}

char * pad_right(const char * s,const int n)
{
    int len = str_len(s);
    char * blank = new char[max(n,len)];
    for (int i=0; i<len; i++) blank[i]=s[i];
    if(len < n)
    {
        for(int i = len; i < n; i++)
        {
            blank[i] = '_';
        }
    }

    return blank;
}

