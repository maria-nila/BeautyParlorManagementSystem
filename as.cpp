#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdio>

using namespace std;

class customer
{
	char customer_name[30],customer_address[40],customer_phone[40];
	int customer_age;
public:
	void get_input();
	void show_room();
	void customer_menu_list();
	void work();
	void customer_main_menu_list();
};

customer ob1;

void customer::get_input()
{
	string p;	
	char q[30],ch;
	ofstream out;
	cout<<"\nEnter Your Name: ";
	scanf("%c",&ch);
	gets(customer_name);
	p=customer_name;
	strcpy(q,customer_name);
	strcat(q,".txt");
	p=q;
	out.open(p.c_str());
	cout<<"\nEnter your address: ";
	gets(customer_address);
	cout<<"\nEnter Your Phone Number: ";
	gets(customer_phone);
	cout<<"\nEnter Your Age: ";
	cin>>customer_age;
	if(customer_age<18)
		cout<<"Can Not Facial";
	out<<"Name: "<<customer_name<<"\n";
	out	<<"Address: "<<customer_address<<"\n";
	out<<"Phone Number: "<<customer_phone<<"\n";
	out<<"Age: "<<customer_age<<"\n";
	cout<<"\nYour Information Successfully Saved";
}

void customer::customer_menu_list()
{
	char hair_cut[300],hair_sty[300],facial[300],make_up[300],others[255];
	int x;
	cout<<"\n1. Hair Cutting\n";
	cout <<"2. Hair Style\n";
	cout<<"3. Facial\n";
	cout<<"4. Make-Up\n";
	cout<<"5. Others\n";
	cin>>x;
	if(x==1)
	{
		ifstream in;
		in.open("Hair Cutting.txt",ios::in);
		while(in)
		{
			in.getline(hair_cut,255);
			if(in)
			{
				cout<<hair_cut;
				cout<<endl;
			}
		}
	}
	else if(x==2)
	{
		ifstream in;
		in.open("Hair Style.txt",ios::in);
		while(in)
		{
			in.getline(hair_sty,255);
			if(in)
			{
				cout<<hair_sty;
				cout<<endl;
			}
		}
	}
	else if(x==3)
	{
		ifstream in;
		in.open("Facial.txt",ios::in);
		while(in)
		{
			in.getline(facial,255);
			if(in)
			{
				cout<<facial;
				cout<<endl;
			}
		}
	}
	else if(x==4)
	{
		ifstream in;
		in.open("Make_Up.txt",ios::in);
		while(in)
		{
			in.getline(make_up,255);
			if(in)
			{
				cout<<make_up;
				cout<<endl;
			}
		}
	}
	else if(x==5)
	{
		ifstream in;
		in.open("Others.txt",ios::in);
		while(in)
		{
			in.getline(others,255);
			if(in)
			{
				cout<<others;
				cout<<endl;
			}
		}
	}
}

void customer::show_room()
{
	cout<<".........Show Room No:.........\n\n";
	cout<<"\nHair Cutting -  101";
	cout<<"\nHair Style-     102";
	cout<<"\nFacial	-	103";
	cout<<"\nMake-Up	-	104";
	cout<<"\nOther's	-	105\n";

}

void customer::work()
{
	int x;
	cout<<"\n1.Hair Cutting\n2.Hair Style\n3.Facial\n4.Make-Up\n5.Other's";
	cin>>x;
	if(x==1)
		cout<<"Go to room - 101";
	else if(x==2)
		cout<<"Go to room - 102";
	else if(x==3)
		cout<<"Go to room - 103";
	else if(x==4)
		cout<<"Go to room - 104";
	else if(x==5)
		cout<<"Go to room - 105";	
}	


void customer::customer_main_menu_list()
{
	int x;
	while(1)
	{
		cout<<"\n1. Information Entry\n";
		cout<<	"2.Menu List\n";
		cout<<"3.Show Room\n";
		cout<<"4.Work\n";
		cout<<"5.Exit";
		cin>>x;
		if(x==1)
			ob1.get_input();
		else if(x==2)
			ob1.customer_menu_list();
		else if(x==3)
			ob1.show_room();
		else if(x==4)
			ob1.work();
		else
			break;
	}
}



int main()
{
	customer ob;
	ob.customer_main_menu_list();
}
