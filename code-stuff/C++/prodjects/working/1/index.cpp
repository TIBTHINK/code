#include <iostream>
using namespace std;

void main()
{
	int n;
	double f;
	double ans =0 ;
	cin >> n;

	for (int i=0; i<n ; i++)
	{
			f = 4 * (1/(2*i + 1));

			if ((i %2) == 1 )
			  f = -(f);
			else
				f=f;
	
			ans += f;
		}
	}
   cout << ans << endl;
}

