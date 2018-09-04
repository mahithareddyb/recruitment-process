#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
class job
{
	public:
		string name, father, gmail, contact, gradu, pg, done, phd, special;
		int age, expert;
		float gradper, pgper;
		void getdata()
			{
				string opt1="Yes";
				cout<<endl<<"Personal Details"<<endl;
				cout<<endl<<"Enter your Name : ";
				cin>>name;
				cout<<endl<<"Enter Father Name: ";
				cin>>father;
				cout<<endl<<"Enter your Age : ";
				cin>>age;
				if(age<=20||age>=70)
			{
				cout<<"Sorry....."<<endl;
				cout<<"As per LPU policy you cannot apply for the job.";
				getch();
				exit (0);
			}
				AC:
				cout<<endl<<"Enter Email : ";
				cout<<endl<<"Email should end with .com :  ";
								cin>>gmail;
				string ax=".com";
				int co=gmail.length();
				int pos=co-4;
				string ay=gmail.substr(pos);
				if(ax!=ay)
				{
					cout<<endl<<"Invalid Email..";
					cout<<endl<<"Reenter";
					goto AC;
				}
				AB:
				cout<<endl<<"Enter Contact Number : ";
				cin>>contact;
				int cc=contact.length();
				if(cc<10||cc>10)
				{
					cout<<endl<<"Please enter valid mobile number";
					goto AB;
				}
				
				cout<<endl<<"Qualification Details : ";
				cout<<endl<<"Enter  Graduation Course (B.A, B.Sc, B.Com,"<<endl<<"  BBA, BCA, B.Tech, B.Pharma, B.Arch, B.Ed) : "<<"\t";
				cin>>gradu;
				cout<<endl<<"Enter percentage in Graduation course : ";
				cin>>gradper;
				cout<<endl<<"Enter your P G Course (M.A, M.Sc, M.Com, "<<endl<<"MBA, MCA, M.Tech, M.Pharma, M.Arch, M.Ed)    :"<<"\t";
				cin>>pg;
				cout<<endl<<"Enter your Percentage in P G course : ";
				cin>>pgper;
				cout<<endl<<"Did you completed any Ph.D course : ";
				cin>>done;
				if(done==opt1)
				{
					cout<<endl<<"Enter Ph.D Title";
					cin>>phd;	
				}
				cout<<endl<<"Enter your specialization : ";
				cin>>special;
				cout<<endl<<"Enter Years of Teaching Experience : ";
				cin>>expert;
				cout<<endl;
				}
			void getdata1()
			{
				string opt1="Yes";
				cout<<"Personal Details"<<endl;
				cout<<"Enter your Name : ";
				cin>>name;
				cout<<endl<<"Enter Father Name : ";
				cin>>father;
				cout<<endl<<"Enter your Age : ";
				cin>>age;
				if(age<=20||age>=70)
			{
				cout<<"Sorry....."<<endl;
				cout<<"As per LPU policy you cannot apply for the job.";
				exit (0);
			}
			AC:
				cout<<endl<<"Enter Email : ";
				cout<<endl<<"Email should end with .com :  ";
								cin>>gmail;
				string ax=".com";
				int co=gmail.length();
				int pos=co-4;
				string ay=gmail.substr(pos);
				if(ax!=ay)
				{
					cout<<endl<<"Invalid Email..";
					cout<<endl<<"Reenter";
					goto AC;
				}
				
				
				
				AB:
				cout<<endl<<"Enter Contact Number : ";
				cin>>contact;
				int cc=contact.length();
				if(cc<10||cc>10)
				{
					cout<<endl<<"Please enter valid mobile number";
					goto AB;
				}
				
				cout<<endl<<"Qualification Details : ";
				cout<<endl<<"Enter  Graduation Course (B.A, B.Sc, B.Com,"<<endl<<"  BBA, BCA, B.Tech, B.Pharma, B.Arch, B.Ed) : "<<"\t";
				cin>>gradu;
				cout<<endl<<"Enter percentage in Graduation course : ";
				cin>>gradper;
				cout<<endl<<"Enter your P G Course (M.A, M.Sc, M.Com, "<<endl<<"MBA, MCA, M.Tech, M.Pharma, M.Arch, M.Ed )   : "<<"\t";
				cin>>pg;
				cout<<endl<<"Enter your Percentage in P G course : ";
				cin>>pgper;
				cout<<endl<<"Enter your specialization : ";
				cin>>special;
				cout<<endl<<"Enter Years of Teaching Experience : ";
				cin>>expert;
				cout<<endl;	
	}
			
	void filedata()
	{
	ofstream of;
	of.open("URP.csv",ios::app);
	of<<name<<","<<father<<","<<age<<","<<gradu<<","<<pg<<","<<special<<","<<expert<<","<<gmail<<","<<contact;
	of<<"\n";
	of.close();
	}
	
	void details()
	{
		int n;
		
		cout<<"Types of Applications "<<endl;
		cout<<"1. Academic Staff (Professor, Associate Professor and Assistant Professor) "<<endl;
		cout<<"2. Administrative Jobs (Director, Associate Director, Assistant Director)"<<endl;
		cout<<"3. Non-Academic Staff (Lab Technician, Maintainer, computer Staff) "<<endl;
		
		cin>>n;
		switch(n)
			{
				case 1:
					cout<<endl;
					system("cls");
				cout<<"you have opted for Academic"<<endl;
				cout<<"Application Form is here....."<<endl;;	
				getdata();
				
			if(expert<age)
				{
					if(expert>=10)
					{
						cout<<endl<<"You are eligible for Professor";
					}	
					else if(expert>=5&&expert<10)
					{
					cout<<endl<<"You are applicable for Associate Professor";
					}
					else 
					{
					cout<<endl<<"You are applicable for Assistant Professor";
					}
				}
			else
			{
					cout<<endl<<"It is impossible that Experience is Greater than Age ";
			}
			verify();
			getch();
			break;
			case 2:
			cout<<endl;
					system("cls"); 
				cout<<endl<<"You have opted for Administrative"<<endl;
				getdata1();
				cout<<endl;
				
				if(expert<age)
				{
					if(expert>=10)
					{
					cout<<endl<<"You are applicable for Director";
					}	
					else if(expert>=5&&expert<10)
					{
					cout<<endl<<"You are applicable for Associate Director";
					}
					else 
					{
					cout<<endl<<"You are applicable for Assistant Director";
					}
				}
				else
				{
				cout<<endl<<"It is impossible that Experience is Greater than Age ";
				}
				verify();
			getch();
			break;
			
		case 3:
			cout<<endl;
					system("cls");
			cout<<"You have opted for Technical"<<endl;
			cout<<endl;
			getdata1();
			verify();
			break;
	//	 default:
	//	cout<<"Invalid iption ";
	//	break;
		
			}
	}
		void verify()
		{
		if(gradper<60||gradper>100&&pgper<60||pgper>100)
			{
				cout<<endl<<"Sorry..... As per Lpu Policy you are not qualified for applying the job";
				cout<<endl<<"Thanks for choosing LPU ";
			}
			else
			{
		
		cout<<endl<<"Thanks for Applying ";
		filedata();
	}
}
};
int main()
{
	job j;
	int n;
	int inter;
	
	int first, days;
	int three;
	char opt[10];
		string op1="NO";
		string op2="no";
		string op3="No";
		string op4="Yes";
	cout<<endl;
cout<<"\t"<<setw(27)<<setfill('*')<<" "<<"University Recruitment Helpdesk & Portal"<<setw(32)<<"    "<<endl;
	cout<<endl;
cout<<"\t"<<setw(27)<<setfill('*')<<" "<<"Welcome to Lovely Professional University"<<setw(32)<<"    "<<endl;	
	cout<<endl;
	cout<<endl<<"Process of Selection of Jobs";
	AB:
	cout<<endl<<"1. Application Form and Eligibility criteria ";
	cout<<endl<<"2. Result of Eligibility ";
	cout<<endl<<"3. Examination and qualification of examination ";
	//cout<<endl<<"Finally,  Finalizing the date of Joining ";
	cout<<endl;
	cout<<"Enter your option : ";
	cin>>first;
	cout<<endl;
	switch (first)
	{
		case 1:
			j.details();
			break;
		
		case 2:
	
		cout<<endl<<"Did our Software told to you that you are applicable for any post : "<<endl<<"Press 1 for Yes "<<endl<<"Press 2. for No"<<endl;
		cin>>three;
		if(three==2)
		{
		cout<<endl<<"Thanks for choosing LPU "<<"Better Luck Next Time"<<endl;	
		
				
					goto C;
	
		}
		else
		{
			cout<<"Congrats ......."<<endl<<"Attend for the Exam which will held by LPU"<<endl;

		}
		break;
	case 3:
		B:
			cout<<endl<<"Final Interview for the shortlisted Candidates";
			cout<<endl<<"Enter the percentage you got in the written exam : ";
			cin>>inter;
			if(inter>=85&&inter<100)
			{
				cout<<endl<<"Congrats you are invited to attend for the Interview which will be in held in LPU Main Campus ";
			}
			else
			{
				cout<<endl<<"Sorry You are not Selected for the job  ";
				cout<<endl<<"Thank You";
				goto C;
			
			}
				
		break;
		default:
			cout<<"Sorry......"<<endl<<"Invalid option "<<endl;
			goto AB;
		break;
		}
 C:
 	getch();
	cout<<endl<<setw(27)<<setfill('=')<<"==="<<setw(85)<<"=="<<endl;
	cout<<endl<<endl<<"\t"<<"India's Largest University * Lovely Professional University, Jalandhar-Delhi,"<<endl<<endl<<"\t"<<"\t"<<"   G.T. Road (NH-1), Phagwara, Punjab (INDIA) -144411."<<endl<<endl<<"\t"<<"\t"<<"      Tel: +91-1824-404404, Toll Free: 1800 102 4431 ";
getch();
}


