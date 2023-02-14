#include"iostream"
#include"fstream"
#include"cstring"
using namespace std;
class WMS
{
public:
    int house_no, street_no, no_of_member, quantity;
    char area[160], city[160], district[160], suggestions[160], date[160], state[160], west_type[160];
    void get_data();
    void put_data(int);
    void put_display();
};
void WMS :: get_data()
{
        cout << "\n Enter State:- ";
        cin >> state;
        cout << "\n Enter City Name:- ";
        cin >> city;
        cout << "\n Enter District Name:- ";
        cin >> district;
        cout << "\n Enter Area Name:- ";
        cin >> area;
        cout << "\n Enter the Street No:- ";
        cin >> street_no;
        cout << "\n Enter the House No:- ";
        cin >> house_no;
        cout << "\n Enter the Date:- ";
        cin >> date;
        cout << "\n Enter West Type:- ";
        cin >> west_type;
        cout << "\n Enter Quantity :- ";
        cin >> quantity;
        cout << "\n Enter No of Member:- ";
        cin >> no_of_member;
        cout << "\n Enter Your Suggestion:- ";
        cin >> suggestions;
}
void WMS :: put_data(int strt)
{

        if(street_no==strt)
        {
        cout << "\n\n State:- " << state << "\n";
        cout << "\n City:- " << city << "\n";
        cout << "\n District:- " << district << "\n";
        cout << "\n Area:- " << area << "\n";
        cout << "\n Street No:- "<< street_no << "\n";
        cout << "\n House No:- " << house_no << "\n";
        cout << "\n Date:- " << date << "\n";
        cout << "\n West:- " << west_type << "\n";
        cout <<"\n Quantity:- "<< quantity <<"\n";
        cout << "\n Member:- " << no_of_member << "\n";
        cout << "\n Suggestion:- "<< suggestions << "\n";
        }
}
void WMS :: put_display()
{
        cout << "\n\n State:- " << state << "\n";
        cout << "\n City:- " << city << "\n";
        cout << "\n District:- " << district << "\n";
        cout << "\n Area:- " << area << "\n";
        cout << "\n Street No:- "<< street_no << "\n";
        cout << "\n House No:- " << house_no << "\n";
        cout << "\n Date:- " << date << "\n";
        cout << "\n West:- " << west_type << "\n";
        cout <<"\n Quantity:- "<< quantity <<"\n";
        cout << "\n Member:- " << no_of_member << "\n";
        cout << "\n Suggestion:- "<< suggestions << "\n";
}
const int size = 3;
int main()
{
    WMS p[size];
    int strt,x;
    for(int i=0; i<size; i++)
    {
        cout << "\n State Details:- " << i+1 << "\n";
        p[i].get_data();
    }
    cout << "\n";
    for(int i=0; i<=size; i++)
    {
        cout << "\n State Details:- " << i+1 << "\n";
        p[i].put_data(strt);
    }
    cout<<"1 for street no 3 and Delhi city"<<endl;
    cout<<"2 for waste type is wet and quanity is 2kgs"<<endl;
    cout<<"3 for houses in state Gujarat and dry type waste"<<endl;
    cin>>x;
    switch(x)
    {
	case 1:{
			for(int i=0; i<size; i++)
	   		{
				if((strcmp(p[i].city,"Delhi"))>0)
				{
					if(p[i].street_no==3)
					{
						p[i].put_display();
					}
				}
			}
  		break;
		}
	case 2:{
			for(int i=0; i<size; i++)
	   		{
				if((strcmp(p[i].west_type,"wet"))>0)
				{
					if(p[i].quantity==2)
					{
						p[i].put_display();
					}
				}
			}
  		break;
		}
	case 3:{
			for(int i=0; i<size; i++)
	   		{
				if((strcmp(p[i].state,"Gujarat"))>0)
				{
					if(p[i].west_type=="dry")
					{
						p[i].put_display();
					}
				}
			}
  		break;
		}
    }
    return 0;
}
