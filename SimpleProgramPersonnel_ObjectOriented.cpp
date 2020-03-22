/*

						Advanced Programming
							 
							 project:
				A simple program personnel (Object-oriented)
							 
							 Professor:
						Mr. Mehdi Myrzabaky
						     
							 Student:
							Hiwa Amiri

*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
int n, temp;
class Employee;
class Personnel;
class Finance;
void switch1       (Employee* e[],Personnel &p,Finance &f );
void set           (Employee* e[]);
void change        (Employee* e[]);
void showall       (Employee* e[],Personnel &p);
void morakhasi     (Employee* e[],Personnel &p);
void ezafe         (Employee* e[],Personnel &p);
void gheybat       (Employee* e[],Personnel &p);
void entesabe      (Employee* e[],Personnel &p);
void tarfii        (Employee* e[],Personnel &p);
void faot          (Employee* e[],Personnel &p);
void bazneshastegi (Employee* e[],Personnel &p);
void bazkharid     (Employee* e[],Personnel &p);
void ekhraje       (Employee* e[],Personnel &p);
void hoghoogh      (Employee* e[],Finance &f);
void fish          (Employee* e[],Finance &f);
void gozarshShH    (Employee* e[],Finance &f);
void pardakhti     (Employee* e[],Finance &f);
void azayerefah    (Employee* e[],Finance &f);
//**************************************************************class EMPLOYEE****************************
class Employee{
	friend class Personnel;
	friend class Finance;
private:
	static int counter;
	long int          Number;
	char			  IDNumber[30];
	char			  cellphone[30];
	long int          BasicEarning;
	char              HAddress[101];
	char              employment[11];
	char              employmentType[21];
	char              Post[21];
	char              Accountnumber[21];
	long int		  pl;
	long int		  mi;
	bool              joinRefah;

public:
	char              Name[51];
	void setinfo();
	void changeinfo(Employee&);
	Employee(){
		mi=0;
		pl=0;
		counter++;
		Number=counter;}
};
int Employee::counter=1000;
void Employee::setinfo   (){
		system("cls");
		cout<<"\n\t***************************************************"
			<<"\n\t\t samane sabtename persone"<<endl;
		int post,typeemploy,refah;
		cout<<"\n etela'ate zir ra vared konid: "<<endl                  ;
		cout<<"\n naam va nameKhanevadegi: "     ,scanf("%s",&Name)      ;
		cout<<"\n shomare shenasnameh: "         ,scanf("%s",&IDNumber)  ;
		cout<<"\n adrese mahale sokounat: "      ,scanf("%s",&HAddress)  ;
		cout<<"\n shomare mobile: "              ,scanf("%s",&cellphone) ;
		cout<<"\n tarikhe estekhdam: "           ,scanf("%s",&employment);
		cout<<"\n shomare hesabe banke Melli: "  ,scanf("%s",&Accountnumber);
		cout<<"\n noe estekhdam ra entekhab konid: "             ;
		cout<<"\n              1] rasmi "                        ;
		cout<<"\n              2] peyman "                       ;
		cout<<"\n              : "                               ;
		cin>>typeemploy;
		switch(typeemploy){
		case 1:
			strcpy(employmentType,"rasmi");
			break;
		case 2:
			strcpy(employmentType,"peymani");
			break;
		case 3:
			strcpy(employmentType,"");
			break;
		}
		cout<<"\n semate karmand ra entekhab konid: "            ;
		cout<<"\n              1] modire kol "                   ;
		cout<<"\n              2] moaven "                       ;
		cout<<"\n              3] modire bakhsh "                ;
		cout<<"\n              4] karmande bakhsh "              ;
		cout<<"\n              5] abdarchi "                     ;
		cout<<"\n              6] bazaryab "                     
			<<"\n              : ";
		cin>>post;
		switch(post){
		case 1:
			strcpy(Post,"modire kol");
			BasicEarning=13468900;
			break;
		case 2:
			strcpy(Post,"moaven");
			BasicEarning=12456340;
			break;
		case 3:
			strcpy(Post,"modire bakhsh");
			BasicEarning=9893000;
			break;
		case 4:
			strcpy(Post,"karmande bakhsh");
			BasicEarning=9000000;
			break;
		case 5:
			strcpy(Post,"abdarchi");
			BasicEarning=6478800;
			break;
		case 6:
			strcpy(Post,"bazaryab");
			BasicEarning=7000000;
			break;
		}
		cout<<"\n ozve sandooghe Refah:"                         ;
		cout<<"\n              1] hast "                         ;
		cout<<"\n              2] nist "                         
			<<"\n              : "; 
		cin>>refah;		
		switch(refah){
		case 1:
			joinRefah=1;
			break;
		case 2:
			joinRefah=0;
			break;
		}
}
void Employee::changeinfo(Employee &e){
	system("cls");
		cout<<"\n\t***************************************************"
			<<"\n\t\t samane sabtename persone"<<endl;
		int post,typeemploy,refah;
		cout<<"\n etela'ate zir ra vared konid: "<<endl                  ;
		cout<<"\n naam va nameKhanevadegi: "     ,scanf("%s",&Name)      ;
		cout<<"\n shomare shenasnameh: "         ,scanf("%s",&IDNumber)  ;
		cout<<"\n adrese mahale sokounat: "      ,scanf("%s",&HAddress)  ;
		cout<<"\n shomare mobile: "              ,scanf("%s",&cellphone) ;
		cout<<"\n tarikhe estekhdam: "           ,scanf("%s",&employment);
		cout<<"\n shomare hesabe banke Melli: "  ,scanf("%s",&Accountnumber);
		cout<<"\n noe estekhdam ra entekhab konid: "             ;
		cout<<"\n              1] rasmi "                        ;
		cout<<"\n              2] peyman "                       ;
		cout<<"\n              : "                               ;
		cin>>typeemploy;
		switch(typeemploy){
		case 1:
			strcpy(employmentType,"rasmi");
			break;
		case 2:
			strcpy(employmentType,"peymani");
			break;
		case 3:
			strcpy(employmentType,"");
			break;
		}
		cout<<"\n semate karmand ra entekhab konid: "            ;
		cout<<"\n              1] modire kol "                   ;
		cout<<"\n              2] moaven "                       ;
		cout<<"\n              3] modire bakhsh "                ;
		cout<<"\n              4] karmande bakhsh "              ;
		cout<<"\n              5] abdarchi "                     ;
		cout<<"\n              6] bazaryab "                     
			<<"\n              : ";
		cin>>post;
		switch(post){
		case 1:
			strcpy(Post,"modire kol");
			BasicEarning=13468900;
			break;
		case 2:
			strcpy(Post,"moaven");
			BasicEarning=12456340;
			break;
		case 3:
			strcpy(Post,"modire bakhsh");
			BasicEarning=9893000;
			break;
		case 4:
			strcpy(Post,"karmande bakhsh");
			BasicEarning=9000000;
			break;
		case 5:
			strcpy(Post,"abdarchi");
			BasicEarning=6478800;
			break;
		case 6:
			strcpy(Post,"bazaryab");
			BasicEarning=7000000;
			break;
		}
		cout<<"\n ozve sandooghe Refah:"                         ;
		cout<<"\n              1] hast "                         ;
		cout<<"\n              2] nist "                         
			<<"\n              : "; 
		cin>>refah;		
		switch(refah){
		case 1:
			joinRefah=1;
			break;
		case 2:
			joinRefah=0;
			break;
		}

}
//************************************************************** class PERSONNEL ****************************
class Personnel{
	friend class Employee;
public:
	void grantingLeave     (Employee&);
	void appointment       (Employee&);
	void promotion         (Employee&);
	void Report_of_personel(Employee&);
	void Retirement        (Employee&);
	void Redemption        (Employee&);
	void Overtime          (Employee&);
	void Absence           (Employee&);
};
void Personnel::grantingLeave     (Employee &e){
	int post;
	cout<<"\n\t\t\t sodoore morakhasi";
	cout<<"\n injaneb "<<e.Name<<endl;
	cout<<" az saate \t ruz \t ela saate \t ruze \t\n khastar morakhasye bedoone hoghoogh mibasham.\n emza karmand *\t\t emza kargozini*";
}
void Personnel::appointment       (Employee &e){
	int post;
	cout<<" \n poste feli "<<e.Name<<", "<<e.Post<<" mibashad.";
	cout<<"\n be che semati mansoob shavand:";
	cout<<"\n              1] modire kol "                   ;
	cout<<"\n              2] moaven "                       ;
	cout<<"\n              3] modire bakhsh "                ;
	cout<<"\n              4] karmande bakhsh "              ;
	cout<<"\n              5] abdarchi "                     ;
	cout<<"\n              6] bazaryab "
		<<"\n              : ";
	cin>>post;
	switch(post){
	case 1:
		strcpy(e.Post,"modire kol");
		break;
	case 2:
		strcpy(e.Post,"moaven");
		break;
	case 3:
		strcpy(e.Post,"modire bakhsh");
		break;
	case 4:
		strcpy(e.Post,"karmande bakhsh");
		break;
	case 5:
		strcpy(e.Post,"abdarchi");
		break;
	case 6:
		strcpy(e.Post,"bazaryab");
		break;
	}
	cout<<"\n mansoob shodand.";
}
void Personnel::promotion         (Employee &e){
	int post;
	cout<<" \n poste feli "<<e.Name<<", "<<e.Post<<" mibashad.";
	cout<<"\n be che semati ertegha yaband:";
	cout<<"\n              1] modire kol "                   ;
	cout<<"\n              2] moaven "                       ;
	cout<<"\n              3] modire bakhsh "                ;
	cout<<"\n              4] karmande bakhsh "              ;
	cout<<"\n              5] abdarchi "                     ;
	cout<<"\n              6] bazaryab "
		<<"\n			   : ";
	cin>>post;
	switch(post){
	case 1:
		strcpy(e.Post,"modire kol");
		break;
	case 2:
		strcpy(e.Post,"moaven");
		break;
	case 3:
		strcpy(e.Post,"modire bakhsh");
		break;
	case 4:
		strcpy(e.Post,"karmande bakhsh");
		break;
	case 5:
		strcpy(e.Post,"abdarchi");
		break;
	case 6:
		strcpy(e.Post,"bazaryab");
		break;
	}
cout<<"\n ertegha dade shod.";
}
void Personnel::Report_of_personel(Employee &e){
	
	cout<<endl;
	cout<<" Shomare personeli     : "<<e.Number         <<endl;
	cout<<" Naam                  : "<<e.Name           <<endl;
	cout<<" shomareShenasnameh    : "<<e.IDNumber       <<endl;
	cout<<" adrese mahale sokounat: "<<e.HAddress		<<endl;
	cout<<" shomare mobile        : "<<e.cellphone      <<endl;
	cout<<" tarikhe estekhdam     : "<<e.employment     <<endl;
	cout<<" noe estekhdam         : "<<e.employmentType <<endl;
	cout<<" semate karmand        : "<<e.Post           <<endl;
	cout<<" hoghogh payeh         : "<<e.BasicEarning   <<" Rial"<<endl;
	cout<<" ozve sandooghe Refah  : "<<e.joinRefah      <<endl;
	

}
void Personnel::Overtime          (Employee &e){
	int plus;
	cout<<"\n be ezaye har saat ezafe kari mablaghe 10.000 Rial be hoghooghe daryafti\n ezafe khahad shod."<<endl;
	cout<<"\n saate ezafe kari ra vared konid: ",cin>>temp;
	temp=temp*10000;
	e.pl=e.pl+temp;
	cout<<" haghe ezafe kari be hesabe agha/khanom "<<e.Name<<" manzoor shod"<<endl
		<<" majmooe kole hoghooghe ezafe kari "<<e.pl<<" mibashad"<<endl;
}
void Personnel::Redemption        (Employee &e){
	cout<<"\n aghaye/khanome "<<e.Name<<" ba hoghooghe paye "<<e.BasicEarning<< "be mablaghe 210,000,000Rial\n bazkharid shodand.\n\t emza karmand\t\t emza modir."<<endl;
}
void Personnel::Retirement        (Employee &e){
	cout<<"\n aghaye/khanome "<<e.Name<<" ba hoghooghe paye "<<e.BasicEarning<< "az in tarikh be bad bazneshaste shode \n va mahane hoghooghi barabare 5600000Rial \n daryaft khahand kard.\n\t emza karmand\t\t emza modir."<<endl;
}
void Personnel::Absence           (Employee &e){
	cout<<"\n be ezaye har saat ghaybat mablaghe 10.000Rial az hoghooghe daryafti\n kam khahad shod."<<endl;
	cout<<" saate ghaybat ra vared konid: ",cin>>temp;
	temp=temp*10000;
	e.mi=e.mi+temp;
	cout<<" haghe ezafe kari be hesabe agha/khanom "<<e.Name<<" manzoor shod"<<endl
		<<" majmooe kole kosoorat gheybat "<<e.mi<< "mibashad"<<endl;
}
//**************************************************************class FINANCE****************************
class Finance{
	friend class Employee;
	friend class Personnel;
public:
	void c_salaries        (Employee&);
	void showPayStubs      (Employee&);
	void reportBAccNum     (Employee&);
	void reportPaySalaries (Employee&);
	void reportRefah       (Employee&);
};
void Finance::c_salaries        (Employee &e){
	cout<<" Aghaye/Khanome "<<e.Name<<endl
		<<"\n tedade saate ezafe kari      : "<<e.pl/10000
		<<"\n haghe ezafe kari             : "<<e.pl
		<<"\n tedade saate gheybate        : "<<e.mi/10000
		<<"\n mablaghe kasr shode gheybatha: "<<e.mi<<endl;
	temp=(e.BasicEarning)+(e.pl)-(e.mi);
	cout<<"\n hoghooghe khalese daryafti shoma "<<temp<< " Rial mibashad.";
	temp=0;
}
void Finance::showPayStubs      (Employee &e){
	temp=(e.BasicEarning)+(e.pl)+(e.mi);
	cout<<" Aghaye/Khanome "<<e.Name<<endl
		<<"\n hoghooghe daryafti in mahe shoma "<<temp<< " Rial mibashad."
		<<"\n\t emzaye karamand\t\t emzaye raise omur mali";
}
void Finance::reportBAccNum     (Employee &e){
	cout<<" aghaye/khnome "<<e.Name<<" shomare hesabe: "<<e.Accountnumber<<endl;
	
}
void Finance::reportPaySalaries (Employee &e){
	temp=(e.BasicEarning)+(e.pl)-(e.mi);
	cout<<" aghaye/khnome "<<e.Name<<" hoghooghe pardakhti "<<temp<<endl;
}
void Finance::reportRefah       (Employee &e){
	
	if(e.joinRefah==1)
		cout<<"\t"<<e.Name<<endl;
}
//*************************************************** MAIN **********************************************
void main(){
	Employee* e[1000];	
	Personnel p;
	Finance f;
	cout<<"\n\n\n\n\n\n\n\n"
		<<"\n*******************************************************************************"
		<<"\n-------------------------------------------------------------------------------"
		<<"\n                  Be barnameh sadeh personeli khosh amadid"
		<<"\n-------------------------------------------------------------------------------"
		<<"\n*******************************************************************************";
	getch();
	while(1)
		switch1(e,p,f);
	system("pause");
}
//*******************************************************************************************************
void set           (Employee *e[]){
	
	char ans;
	do{
		e[n]=new Employee;
		e[n]->setinfo();
		n++;
		cout<<" Forme jadid?(y/n): ",cin>>ans;
	}while (ans=='y');

	
}
void change        (Employee *e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh taghire moshakhasate personel";
	cout<<"\n esme karmand morede nazar ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0)
			e[i]->changeinfo(*e[i]);
		else
			cout<<"\n payda nashod";
	getch();
}
void showall       (Employee* e[],Personnel &p){
	int i;
	system("cls");
	cout<<"\n\t*************************************************************";
	cout<<"\n\t samaneh gozaresh giri az etelaate personel";
	cout<<"\n baraye shorooe gozaresh giri kelidi ra feshar dahid..."<<endl, getch();
	for (i=0;i<n;i++){
		p.Report_of_personel(*e[i]);
		cout<<"\t -------------------------------------------";
	}
	cout<<"\n tedade kole personel : "<<n<<endl,getch();
}
void switch1       (Employee* e[],Personnel &p,Finance &f){
	int x;
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t Fehreste Aasli"<<endl;
	cout<<"\n\t 1) Omur Karmandi";
	cout<<"\n\t 2) kargozini";
	cout<<"\n\t 3) omour mali"
		<<"\n\t :";
	cin>>x;
	switch(x){
	case 1:
		system("cls");
		cout<<"\n\t***************************************************";
		cout<<"\n\t\t Omur Karmandi";
		cout<<"\n\t 1 ) sabtename karmande jadid";
		cout<<"\n\t 2 ) taghir moshakhasate ";
		cout<<"\n\t 3 ) <--"
			<<"\n\t : ";
		cin>>x;
		switch(x){
		case 1:
			set           (e);
			break;
		case 2:
			change        (e);
			break;
		case 3:
			switch1       (e,p,f);
			break;
		}
		break;
	case 2:
		system("cls");
		cout<<"\n\t***************************************************";
		cout<<"\n\t\t Kargozini";
		cout<<"\n\t 1 ) gozaresh giri az etelaate personel";
		cout<<"\n\t 2 ) sodour morakhasi";
		cout<<"\n\t 3 ) ezafe kari";
		cout<<"\n\t 4 ) gheybat";
		cout<<"\n\t 5 ) entesabe magham";
		cout<<"\n\t 6 ) tafii magham";
		cout<<"\n\t 7 ) bazneshastegi";
		cout<<"\n\t 8 ) bazkharid";
		cout<<"\n\t 9 ) ekhraje personel"
			<<"\n\t 10) <-- "
			<<"\n\t :";
		cin>>x;
		switch(x){
		case 1:
			showall       (e,p);
			break;
		case 2:
			morakhasi     (e,p);
			break;
		case 3:
			ezafe         (e,p);
			break;
		case 4:
			gheybat       (e,p);
			break;
		case 5:
			entesabe      (e,p);
			break;
		case 6:
			tarfii        (e,p);
			break;
		case 7:
			bazneshastegi (e,p);
			break;
		case 8:
			bazkharid     (e,p);
			break;
		case 9:
			ekhraje       (e,p);
			break;
		case 10:
			switch1       (e,p,f);
			break;
		}
		break;
	case 3:
		system("cls");
		cout<<"\n\t***************************************************";
		cout<<"\n\t\t Omour Mali"<<endl
			<<"\n\t 1) mohasebe hoghoogh"
			<<"\n\t 2) sodour fish hoghooghi"
			<<"\n\t 3) gozarsh giri az Shomare hesabhaye personel"
			<<"\n\t 4) gozarsh giri az hoghooghe pardakhti"
			<<"\n\t 5) gozarsh giri az azaye sandooghe refah"
			<<"\n\t 6) <--"
			<<"\n\t :";
		cin>>x;
		switch(x){
			case 1:
			hoghoogh   (e,f);
			break;
		case 2:
			fish       (e,f);
			break;
		case 3:
			gozarshShH (e,f);
			break;
		case 4:
			pardakhti  (e,f);
			break;
		case 5:
			azayerefah (e,f);
			break;
		case 6:
			switch1    (e,p,f);
			break;
		}
		break;
	}
}
void morakhasi     (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh sodure morakhasi"<<endl;
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0)
			p.grantingLeave(*e[i]);
		else
			cout<<"\n payda nashod";
	getch();
}
void ezafe         (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh ezafekari personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0)
			p.Overtime(*e[i]);
		else
			cout<<"payda nashod"<<endl;
	getch();
}
void gheybat       (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh gheybate personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0)
			p.Absence(*e[i]);
		else
			cout<<"\n payda nashod";
	getch();
}
void entesabe      (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh entesabe magham";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0)
			p.appointment(*e[i]);
		else
			cout<<"\n payda nashod";
	getch();
}
void tarfii        (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh tarfie magham";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0)
			p.grantingLeave(*e[i]);
		else
			cout<<"\n payda nashod";
	getch();
}
void bazneshastegi (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh bazneshastegi";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
			p.Retirement(*e[i]);
			delete e[i];
		}
		else
			cout<<"\n payda nashod"<<endl;
	getch();	
}
void bazkharid     (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh bazkharid personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
			p.Redemption(*e[i]);
			delete e[i];
		}
		else
			cout<<"\n payda nashod."<<endl;
	getch();
	
}
void ekhraje       (Employee* e[],Personnel &p){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh ekhraje personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
			delete e[i];
		}
		else
			cout<<"\n payda nashod"<<endl;
	cout<<" hazfe etelaat ba movafaghiat anjam shod";
	getch();
			
}
void hoghoogh      (Employee* e[],Finance &f){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh mohasebe hoghoogh";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
			f.c_salaries(*e[i]);
		}
		else
			cout<<"\n payda nashod."<<endl;
	getch();
	
}
void fish          (Employee* e[],Finance &f){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh sodoore fidhe hoghooghi";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
			f.showPayStubs(*e[i]);
		}
		else
			cout<<"\n payda nashod."<<endl;
	getch();
}
void gozarshShH    (Employee* e[],Finance &f){
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh giri az shomare hesabe personel"<<endl;
	for (int i=0;i<n;i++)
		f.reportBAccNum(*e[i]);
	getch();
}
void pardakhti     (Employee* e[],Finance &f){
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh bazkharid personel"<<endl;
	for (int i=0;i<n;i++)
		f.reportPaySalaries(*e[i]);
	getch();
}
void azayerefah    (Employee* e[],Finance &f){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh giri az afrade ozve sandooghe refah"<<endl;
	cout<<"\n azaye sandoogh refah:\n"<<endl;
	for (int i=0;i<n;i++)
		f.reportRefah(*e[i]);
	getch();
}