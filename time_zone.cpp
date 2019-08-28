#include<iostream>
using namespace std;
class time_zone
{
	int hr , min;
    public:
    	void accept();
    	void display_calculations();
    	
};
void time_zone::accept()
{
	cout<<"Enter time (24hr format) in your country (India)\n";
	cout<<"The format is 'hr' and 'min' \n";
	cin>>hr;
	cout<<":";
	cin>>min;
	if(hr>=24 && hr<0 && min>59 && min<0) 
	{
		cout<<"Invalid Input";
	}
	else
	{
		display_calculations();
	}
	
}
void time_zone:: display_calculations()
{
	
	while(1)
	{
		cout<<"Country codes:"<<endl<<"USA : -1"<<endl;
     	cout<<"France : -2"<<endl<<"Australia : 2"<<endl<<"Japan : 1"<<endl<<"Press 0 to exit"<<"\n\n";
    	cout<<"Enter appropriate code to know the time in various countries\n";
    	int ch;
	    cin>>ch;
	    int h,m;
	    int sum,diff;
	    switch(ch)
	    {
	    	case -1:
	    		diff=hr-10;
	    		h=diff;
	    		if(diff<0)
	    		{
	    			h=25+diff;
				}
				diff=min-30;
				cout<<"diff "<<diff;
				m=diff;
				if(diff<0)
				{
					m=60+diff;
					h--;
				}
				cout<<"Time in USA "<<h<<":"<<m<<endl;
				break;
			case -2:
				 diff=hr-3;
	    		h=diff;
	    		if(diff<0)
	    		{
	    			h=24+diff;
				}
				diff=min-30;
				m=diff;
				if(diff<0)
				{
					m=60+diff;
					h--;
				}
				cout<<"Time in France "<<h<<":"<<m<<endl;
				break;
			case 1:
				 sum=hr+3;
				h=sum;
				if(sum>24)
				{
					h=sum-23;
				}
				else if(sum==24)
				{
					h=1;
				}
				sum=min+30;
				if(sum>60)
				{
					m=sum-60;
					h++;
				}
				else if(sum==60)
				{
					if(h==23)
					h=0;
					else
					h++;
					m=0;
				}
				cout<<"Time in Japan "<<h<<":"<<m<<endl;
				break;
			case 2:
				sum=hr+4;
				h=sum;
				if(sum>24)
				{
					h=sum-23;
				}
				else if(sum==24)
				{
					h=1;
				}
				sum=min+30;
				if(sum>60)
				{
					m=sum-60;
					h++;
				}
				else if(sum==60)
				{
					if(h==23)
					h=0;
					else
					h++;
					m=0;
				}
				cout<<"Time in Australia "<<h<<":"<<m<<endl;
				break;
		    case 0:
		    	exit(1);
		}
	}
}
main()
{
	time_zone t;
	t.accept();
	
}
