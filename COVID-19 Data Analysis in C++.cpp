#include<iostream>
#include<string>
using namespace std;


string country[3]={"Sri_Lanka", "Malaysia", "Singapore"};
string date[4]={"Dec26","Dec27","Dec28","Dec29"};
int num[4][3]={{598, 635, 102,},
                {674, 796, 134},
                {549, 894, 127},
                {453 ,925 ,142}};
int operation;
int total_ech_country=0,total_ech_days=0;
//===================================================================================================
void menu(){
    cout<<"---- ++++ ==== Menu ==== ++++ ----"<<endl;
    cout<<endl;

cout<<"1. Number of new cases in each country."<<endl;
cout<<"2. Number of new cases in each date."<<endl;
cout<<"3. Number of new cases identified in a specific date in a particular country"<<endl;
cout<<"4. Highest reported case record"<<endl;
cout<<"5. Lowest report case record"<<endl;
cout<<"6. Total number of COVID-19 new cases in between Dec26 and Dec29"<<endl;
cout<<"7. Exit the program"<<endl;
cout<<endl;
cout<<"Chose An Operation : ";
cin>>operation;
cout<<endl;

}


void Number_of_new_cases_ineach_country(){
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
           total_ech_country+=num[i][j];
        }
            cout<<"Number of new cases in "<<country[j]<<" : "<<total_ech_country<<endl;
        total_ech_country=0;
    }
    cout<<endl;
}




//===================================================================================================
void Number_of_new_cases_ineach_days(){
    for (int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            total_ech_days+=num[i][j];
        }
        cout<<"Number of new cases in "<<date[i]<<" : "<<total_ech_days<<endl;
        total_ech_days=0;
    }
    cout<<endl;
}
//===================================================================================================
void specific_date_time (){
string indate,incountry;
int countryindex,dateindex;
cout<<"Enter Date : ";
cin>>indate;
cin.ignore();
cout<<"Enter Country : ";
cin>>incountry;

for (int i=0;i<4;i++){
    if(indate==date[i]){
        dateindex=i;
    }
}
for (int i=0;i<4;i++){
    if(incountry==country[i]){
        countryindex=i;
    }
}
cout<<"There are "<<num[dateindex][countryindex]<<" cases in "<<incountry<<" on "<<indate<<endl;
cout<<endl;
}
void Highest_reported_case(){
int max=num[0][0];
int dayIndex,countIndex;
 for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
           if(max<num[i][j]){
            max=num[i][j];
            dayIndex=i;
            countIndex=j;
           }
    }
}
cout<<"Highest reported case record is "<<max<<" in "<<country[countIndex]<<" on "<<date[dayIndex]<<endl;
}


void Lowest_reported_case(){
int min=num[0][0];
int dayIndex,countIndex;
 for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
           if(min>num[i][j]){
            min=num[i][j];
            dayIndex=i;
            countIndex=j;
           }
    }
}
cout<<"Lowest reported case record is "<<min<<" in "<<country[countIndex]<<" on "<<date[dayIndex]<<endl;
cout<<endl;
}

void Total(){
    int total=0;
 for (int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            total+=num[i][j];
        }

    }

cout<<"Total number of COVID-19 new cases in between Dec26 and Dec29 : "<<total<<" Cases"<<endl;
cout<<endl;
}





int main(){
while (true){
menu();
switch(operation){
case 1:Number_of_new_cases_ineach_country();
    break;
case 2:Number_of_new_cases_ineach_days();
    break;
case 3:specific_date_time();
    break;
case 4:Highest_reported_case();
    break;
case 5:Lowest_reported_case();
    break;
case 6:Total();
    break;
case 7:
    return 0;
default:
    cout<<"Wrong Operation.....";
}
}


//Number_of_new_cases_ineach_country();
//Number_of_new_cases_ineach_days();
//specific_date_time ();
//Lowest_reported_case();






}

