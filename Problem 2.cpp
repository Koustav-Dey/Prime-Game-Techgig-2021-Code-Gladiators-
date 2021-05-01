#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short t;
    cin>>t;
    while(t-->0)
    {
	    int a, b, i, j, flag; 
        int max = INT_MAX, min=INT_MAX;
        cin>>a>>b;

	    for (i = a; i <= b; i++) 
        {
		    if (i == 1 || i == 0)
			    continue;
		    flag = 1;
		    for (j = 2; j <= i / 2; ++j) 
            {
			    if (i % j == 0) 
                {
				    flag = 0;
				    break;
			    }
		    }
		    if (flag == 1)
            {   
                if(i - a < min && min == INT_MAX)
                    min = i;
                    break;
            }
	    }
        for (i = b; i >= a; i--) 
        {
		    if (i == 1 || i == 0)
			    continue;
		    flag = 1;
		    for (j = 2; j <= i / 2; ++j) 
            {
			    if (i % j == 0) 
                {
				    flag = 0;
				    break;
			    }
		    }
		    if (flag == 1)
            {   
			    if(b-i<INT_MAX && max == INT_MAX)
                    max = i;
                    break;
            }
	    }
        if(min != INT_MAX)
            cout<<max-min<<"\n";
        else
            cout<<-1<<"\n";
    }
	return 0;
}