/*

						Advanced Programming
							 
							 project:
				A simple program personnel (Structured)
							 
							 Professor:
						Mr. Mehdi Myrzabaky
						     
							 Student:
							Hiwa Amiri

*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
struct Employee{
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
	char              Name[51];
};
long int n,temp,counter=0;
void setinfo       (struct Employee* e[]);
void switch1       (struct Employee* e[]);
void set           (struct Employee* e[]);
void showall       (struct Employee* e[]);
void morakhasi     (struct Employee* e[]);
void ezafe         (struct Employee* e[]);
void gheybat       (struct Employee* e[]);
void entesabe      (struct Employee* e[]);
void tarfii        (struct Employee* e[]);
void faot          (struct Employee* e[]);
void bazneshastegi (struct Employee* e[]);
void bazkharid     (struct Employee* e[]);
void ekhraje       (struct Employee* e[]);
void hoghoogh      (struct Employee* e[]);
void fish          (struct Employee* e[]);
void gozarshShH    (struct Employee* e[]);
void pardakhti     (struct Employee* e[]);
void azayerefah    (struct Employee* e[]);
//*************************************************** MAIN **********************************************
void main          (){
	Employee* e[1000];
	cout<<"\n\n\n\n\n\n\n\n"
		<<"\n*******************************************************************************"
		<<"\n-------------------------------------------------------------------------------"
		<<"\n                  Be barnameh sadeh personeli khosh amadid"
		<<"\n-------------------------------------------------------------------------------"
		<<"\n*******************************************************************************";
	getch();	
	while(1)
		switch1(e);
	system("pause");
}
//*******************************************************************************************************
void set           (struct Employee *e[]){
	
	char ans;
	do{
		e[n]=(struct Employee*)malloc(sizeof(struct Employee));
		setinfo(e);
		n++;

		cout<<" Forme jadid?(y/n): ",cin>>ans;
	}while (ans=='y');

	
}
void setinfo       (struct Employee *e[]){
		system("cls");
		cout<<"\n\t***************************************************"
			<<"\n\t\t samane sabtename persone"<<endl;
		int post,typeemploy,refah;
		cout<<"\n etela'ate zir ra vared konid: "<<endl                  ;
		cout<<"\n naam va nameKhanevadegi: "     ,scanf("%s",&e[n]->Name)      ;
		cout<<"\n shomare shenasnameh: "         ,scanf("%s",&e[n]->IDNumber)  ;
		cout<<"\n adrese mahale sokounat: "      ,scanf("%s",&e[n]->HAddress)  ;
		cout<<"\n shomare mobile: "              ,scanf("%s",&e[n]->cellphone) ;
		cout<<"\n tarikhe estekhdam: "           ,scanf("%s",&e[n]->employment);
		cout<<"\n shomare hesabe banke Melli: "  ,scanf("%s",&(e[n]->Accountnumber));
		cout<<"\n noe estekhdam ra entekhab konid: "             ;
		cout<<"\n              1] rasmi "                        ;
		cout<<"\n              2] peyman "                       ;
		cout<<"\n              : "                               ;
		cin>>typeemploy;
		switch(typeemploy){
		case 1:
			strcpy(e[n]->employmentType,"rasmi");
			break;
		case 2:
			strcpy(e[n]->employmentType,"peymani");
			break;
		case 3:
			strcpy(e[n]->employmentType,"");
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
			strcpy(e[n]->Post,"modire kol");
			e[n]->BasicEarning=13468900;
			break;
		case 2:
			strcpy(e[n]->Post,"moaven");
			e[n]->BasicEarning=12456340;
			break;
		case 3:
			strcpy(e[n]->Post,"modire bakhsh");
			e[n]->BasicEarning=9893000;
			break;
		case 4:
			strcpy(e[n]->Post,"karmande bakhsh");
			e[n]->BasicEarning=9000000;
			break;
		case 5:
			strcpy(e[n]->Post,"abdarchi");
			e[n]->BasicEarning=6478800;
			break;
		case 6:
			strcpy(e[n]->Post,"bazaryab");
			e[n]->BasicEarning=7000000;
			break;
		}
		cout<<"\n ozve sandooghe Refah:"                         ;
		cout<<"\n              1] hast "                         ;
		cout<<"\n              2] nist "                         
			<<"\n              : "; 
		cin>>refah;		
		switch(refah){
		case 1:
			e[n]->joinRefah=1;
			break;
		case 2:
			e[n]->joinRefah=0;
			break;
		}
		e[n]->mi=e[n]->pl=0;
		e[n]->Number=n+1000;
}
void change        (struct Employee *e[]){
	char name[51];
		system("cls");
		cout<<"\n\t***************************************************"
			<<"\n\t\t samane taghire moshakhasate persone"<<endl;
		cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
		cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
		int post,typeemploy,refah;
		cout<<"\n etela'ate zir ra vared konid: "<<endl                  ;
		cout<<"\n naam va nameKhanevadegi: "     ,scanf("%s",&e[i]->Name)      ;
		cout<<"\n shomare shenasnameh: "         ,scanf("%s",&e[i]->IDNumber)  ;
		cout<<"\n adrese mahale sokounat: "      ,scanf("%s",&e[i]->HAddress)  ;
		cout<<"\n shomare mobile: "              ,scanf("%s",&e[i]->cellphone) ;
		cout<<"\n tarikhe estekhdam: "           ,scanf("%s",&e[i]->employment);
		cout<<"\n shomare hesabe banke Melli: "  ,scanf("%s",&(e[i]->Accountnumber));
		cout<<"\n noe estekhdam ra entekhab konid: "             ;
		cout<<"\n              1] rasmi "                        ;
		cout<<"\n              2] peyman "                       ;
		cout<<"\n              : "                               ;
		cin>>typeemploy;
		switch(typeemploy){
		case 1:
			strcpy(e[i]->employmentType,"rasmi");
			break;
		case 2:
			strcpy(e[i]->employmentType,"peymani");
			break;
		case 3:
			strcpy(e[i]->employmentType,"");
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
			strcpy(e[i]->Post,"modire kol");
			e[i]->BasicEarning=13468900;
			break;
		case 2:
			strcpy(e[i]->Post,"moaven");
			e[i]->BasicEarning=12456340;
			break;
		case 3:
			strcpy(e[i]->Post,"modire bakhsh");
			e[n]->BasicEarning=9893000;
			break;
		case 4:
			strcpy(e[i]->Post,"karmande bakhsh");
			e[i]->BasicEarning=9000000;
			break;
		case 5:
			strcpy(e[i]->Post,"abdarchi");
			e[i]->BasicEarning=6478800;
			break;
		case 6:
			strcpy(e[i]->Post,"bazaryab");
			e[i]->BasicEarning=7000000;
			break;
		}
		cout<<"\n ozve sandooghe Refah:"                         ;
		cout<<"\n              1] hast "                         ;
		cout<<"\n              2] nist "                         
			<<"\n              : "; 
		cin>>refah;		
		switch(refah){
		case 1:
			e[i]->joinRefah=1;
			break;
		case 2:
			e[i]->joinRefah=0;
			break;
		}
		
}
		else
			cout<<"\n payda nashod";
	getch();

}
void showall       (struct Employee* e[]){
	int i;
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t samaneh gozaresh giri az etelaate personel";
	cout<<"\n baraye shorooe gozaresh giri kelidi ra feshar dahid..."<<endl, getch();
	for (i=0;i<n;i++){
	
	cout<<endl;
	cout<<" Shomare personeli     : "<<e[i]->Number         <<endl;
	cout<<" Naam                  : "<<e[i]->Name           <<endl;
	cout<<" shomareShenasnameh    : "<<e[i]->IDNumber       <<endl;
	cout<<" adrese mahale sokounat: "<<e[i]->HAddress		<<endl;
	cout<<" shomare mobile        : "<<e[i]->cellphone      <<endl;
	cout<<" tarikhe estekhdam     : "<<e[i]->employment     <<endl;
	cout<<" noe estekhdam         : "<<e[i]->employmentType <<endl;
	cout<<" semate karmand        : "<<e[i]->Post           <<endl;
	cout<<" hoghogh payeh         : "<<e[i]->BasicEarning   <<" Rial"<<endl;
	cout<<" ozve sandooghe Refah  : "<<e[i]->joinRefah      <<endl;
	


		cout<<"\t -------------------------------------------";
	}
	cout<<"\n tedade kole personel : "<<n<<endl,getch();
}
void switch1       (struct Employee* e[]){
	int x;
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t Fehreste Aasli"<<endl;
	cout<<"\n\t 1) Omur Karmandi";
	cout<<"\n\t 2) Kargozini";
	cout<<"\n\t 3) Omour Mali"
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
			switch1       (e);
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
			showall       (e);
			break;
		case 2:
			morakhasi     (e);
			break;
		case 3:
			ezafe         (e);
			break;
		case 4:
			gheybat       (e);
			break;
		case 5:
			entesabe      (e);
			break;
		case 6:
			tarfii        (e);
			break;
		case 7:
			bazneshastegi (e);
			break;
		case 8:
			bazkharid     (e);
			break;
		case 9:
			ekhraje       (e);
			break;
		case 10:
			switch1       (e);
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
			hoghoogh   (e);
			break;
		case 2:
			fish       (e);
			break;
		case 3:
			gozarshShH (e);
			break;
		case 4:
			pardakhti  (e);
			break;
		case 5:
			azayerefah (e);
			break;
		case 6:
			switch1    (e);
			break;
		}
		break;
	}
}
void morakhasi     (struct Employee* e[]){
	system("cls");
	char name[51];
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh sodure morakhasi"<<endl;
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
			int post;
			cout<<"\n\t\t\t sodoore morakhasi";
			cout<<"\n injaneb "<<e[i]->Name<<endl;
			cout<<" az saate \t ruz \t ela saate \t ruze \t\n khastar morakhasye bedoone hoghoogh mibasham.\n emza karmand *\t\t emza kargozini*";
		}
		else
			cout<<"\n payda nashod";
	getch();
}
void ezafe         (struct Employee* e[]){
	system("cls");
	char name[51];
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh ezafekari personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	int plus;
	cout<<"\n be ezaye har saat ezafe kari mablaghe 10.000 Rial be hoghooghe daryafti\n ezafe khahad shod."<<endl;
	cout<<"\n saate ezafe kari ra vared konid: ",cin>>temp;
	temp=temp*10000;
	e[i]->pl=e[i]->pl+temp;
	cout<<" haghe ezafe kari be hesabe agha/khanom "<<e[i]->Name<<" manzoor shod"<<endl
		<<" majmooe kole hoghooghe ezafe kari "<<e[i]->pl<<" mibashad"<<endl;
}
		else
			cout<<"payda nashod"<<endl;
	getch();
}
void gheybat       (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh gheybate personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	cout<<"\n be ezaye har saat ghaybat mablaghe 10.000Rial az hoghooghe daryafti\n kam khahad shod."<<endl;
	cout<<" saate ghaybat ra vared konid: ",cin>>temp;
	temp=temp*10000;
	e[i]->mi=e[i]->mi+temp;
	cout<<" haghe ezafe kari be hesabe agha/khanom "<<e[i]->Name<<" manzoor shod"<<endl
		<<" majmooe kole kosoorat gheybat "<<e[i]->mi<< "mibashad"<<endl;
}
		else
			cout<<"\n payda nashod";
	getch();
}
void entesabe      (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh entesabe magham";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	int post;
	cout<<" \n poste feli "<<e[i]->Name<<", "<<e[i]->Post<<" mibashad.";
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
		strcpy(e[i]->Post,"modire kol");
		break;
	case 2:
		strcpy(e[i]->Post,"moaven");
		break;
	case 3:
		strcpy(e[i]->Post,"modire bakhsh");
		break;
	case 4:
		strcpy(e[i]->Post,"karmande bakhsh");
		break;
	case 5:
		strcpy(e[i]->Post,"abdarchi");
		break;
	case 6:
		strcpy(e[i]->Post,"bazaryab");
		break;
	}
	cout<<"\n mansoob shodand.";
}
		else
			cout<<"\n payda nashod";
	getch();
}
void tarfii        (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh tarfie magham";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	int post;
	cout<<" \n poste feli "<<e[i]->Name<<", "<<e[i]->Post<<" mibashad.";
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
		strcpy(e[i]->Post,"modire kol");
		break;
	case 2:
		strcpy(e[i]->Post,"moaven");
		break;
	case 3:
		strcpy(e[i]->Post,"modire bakhsh");
		break;
	case 4:
		strcpy(e[i]->Post,"karmande bakhsh");
		break;
	case 5:
		strcpy(e[i]->Post,"abdarchi");
		break;
	case 6:
		strcpy(e[i]->Post,"bazaryab");
		break;
	}
cout<<"\n ertegha dade shod.";
}
		else
			cout<<"\n payda nashod";
	getch();
}
void bazneshastegi (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh bazneshastegi";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	cout<<"\n aghaye/khanome "<<e[i]->Name<<" ba hoghooghe paye "<<e[i]->BasicEarning<< "az in tarikh be bad bazneshaste shode \n va mahane hoghooghi barabare 5600000Rial \n daryaft khahand kard.\n\t emza karmand\t\t emza modir."<<endl;
}
		else
			cout<<"\n payda nashod"<<endl;
	getch();	
}
void bazkharid     (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh bazkharid personel";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
		cout<<"\n aghaye/khanome "<<e[i]->Name<<" ba hoghooghe paye "<<e[i]->BasicEarning<< "be mablaghe 210,000,000Rial\n bazkharid shodand.\n\t emza karmand\t\t emza modir."<<endl;
		}
		else
			cout<<"\n payda nashod."<<endl;
	getch();
	
}
void ekhraje       (struct Employee* e[]){
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
void hoghoogh      (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh mohasebe hoghoogh";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	cout<<" Aghaye/Khanome "<<e[i]->Name<<endl
		<<"\n tedade saate ezafe kari      : "<<e[i]->pl/10000
		<<"\n haghe ezafe kari             : "<<e[i]->pl
		<<"\n tedade saate gheybate        : "<<e[i]->mi/10000
		<<"\n mablaghe kasr shode gheybatha: "<<e[i]->mi<<endl;
	temp=(e[i]->BasicEarning)+(e[i]->pl)-(e[i]->mi);
	cout<<"\n hoghooghe khalese daryafti shoma "<<temp<< " Rial mibashad.";
	temp=0;
}
		else
			cout<<"\n payda nashod."<<endl;
	getch();
	
}
void fish          (struct Employee* e[]){
	char name[51];
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh sodoore fidhe hoghooghi";
	cout<<"\n esme karmand ra vared konid: ",scanf("%s",&name);
	cout<<endl;
	for (int i=0;i<n;i++)
		if (strcmp(e[i]->Name,name)==0){
	temp=(e[i]->BasicEarning)+(e[i]->pl)+(e[i]->mi);
	cout<<" Aghaye/Khanome "<<e[i]->Name<<endl
		<<"\n hoghooghe daryafti in mahe shoma "<<temp<< " Rial mibashad."
		<<"\n\t emzaye karamand\t\t emzaye raise omur mali";
}
		
		else
			cout<<"\n payda nashod."<<endl;
	getch();
}
void gozarshShH    (struct Employee* e[]){
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh giri az shomare hesabe personel"<<endl;
	for (int i=0;i<n;i++){
	 cout<<" aghaye/khnome "<<e[i]->Name<<" shomare hesabe: "<<e[i]->Accountnumber<<endl;
	
}
	getch();
}
void pardakhti     (struct Employee* e[]){
	system("cls");
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh giri az hoghogh pardakhti be personel"<<endl;
	for (int i=0;i<n;i++){
	temp=(e[i]->BasicEarning)+(e[i]->pl)-(e[i]->mi);
	cout<<" aghaye/khnome "<<e[i]->Name<<" hoghooghe pardakhti "<<temp<<endl;
	}
	getch();
}
void azayerefah    (struct Employee* e[]){
	system("cls");
	char name[51];
	cout<<"\n\t***************************************************";
	cout<<"\n\t\t samaneh gozaresh giri az afrade ozve sandooghe refah"<<endl;
	cout<<"\n azaye sandoogh refah:\n"<<endl;
	for (int i=0;i<n;i++){
		if(e[i]->joinRefah==1)
			cout<<"\t"<<e[i]->Name<<endl;
}
	getch();
}

