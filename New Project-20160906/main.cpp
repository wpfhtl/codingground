#include <iostream>

using namespace std;

int main()
{
   	float m[2][4];

	for(int j = 0; j <4; j++)
	{
	    m[0][j] = j;
	    m[1][j] = j+1;
	}

	m[0][-1] = m[0][-2] = m[0][-3] = m[0][-4] = 0;
	m[1][-1] = m[1][-2] =  m[1][-3] = m[1][-4] = 0;
		
	for(int j = -4; j <4; j++)
	{
	    cout << m[0][j] << ", " << m[1][j] << endl;
	} 
   
   return 0;
}

