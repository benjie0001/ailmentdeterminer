/*F17/1760/2019 BENJAMIN OKUMU
PROGRAM DETERMINES VIRAL DISEASE AS EITHER CORONAVIRUS, FLU OR COLD*/
#include<iostream>
using namespace std;
int main()
{
//declaring variables for count
    int coronafreq=0;
    int coldfreq=0;
    int flufreq=0;
    //display the symptoms
    cout<<"VIRAL DISEASE DETERMINER!!"<<endl;
    cout<<"WHICH OF THESE SYMPTOMS DO YOU EXHIBIT?"<<endl;
    cout<<"[1]FEVER"<<endl;
    cout<<"[2]FATIGUE"<<endl;
    cout<<"[3]COUGH"<<endl;
    cout<<"[4]SNEEZING"<<endl;
    cout<<"[5]ACHES AND PAINS"<<endl;
    cout<<"[6]RUNNY OR STUFFY NOSE"<<endl;
    cout<<"[7]SORE THROAT"<<endl;
    cout<<"[8]DIARRHEA"<<endl;
    cout<<"[9]HEADACHES"<<endl;
    cout<<"[10]SHORTNESS OF BREATH"<<endl;

    int option;

    do{
//user enters symptom number as per selector
    cout<<"ENTER SYMPTOM NO:";
    cin>>option;
    //using if loops for each symptom, analysis of the symptoms occurs below
    //fever
    if (option==1)
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Common"<<endl;
        cout<<"[2]Rare"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            flufreq=flufreq+1;
            cout<<"Coronavirus or Flu"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
    }
    else if(option==2)//fatigue
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Sometimes"<<endl;
        cout<<"[2]Common"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            coldfreq=coldfreq+1;
            cout<<"Coronavirus or cold"<<endl;
        }
        else if(severity==2)
        {
            flufreq=flufreq+1;
            cout<<"Flu"<<endl;
        }
    }
    else if(option==3)//cough
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Common(usually dry)"<<endl;
        cout<<"[2]Dry"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            flufreq=flufreq+1;
            cout<<"Coronavirus or Flu"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
    }
    else if(option==4)//sneezing
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]None"<<endl;
        cout<<"[2]Common"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            flufreq=flufreq+1;
            cout<<"Coronavirus or Flu"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
    }
    else if(option==5)//aches and pains
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Sometimes"<<endl;
        cout<<"[2]Common"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            cout<<"Coronavirus"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            flufreq=flufreq+1;
            cout<<"Cold of flu"<<endl;
        }
    }
    else if(option==6)//runny or stuffy nose
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Rare"<<endl;
        cout<<"[2]Common"<<endl;
        cout<<"[3]Sometimes"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            cout<<"Corona virus"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
        else if(severity==3)
        {
            flufreq=flufreq+1;
            cout<<"Flu"<<endl;
        }
    }
    else if (option==7)//sorethroat
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Sometimes"<<endl;
        cout<<"[2]Common"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            flufreq=flufreq+1;
            cout<<"Coronavirus or Flu"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
    }
    else if(option==8)//diarrhea
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Rare"<<endl;
        cout<<"[2]No"<<endl;
        cout<<"[3]Sometimes(children)"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            cout<<"Coronavirus"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
        else if(severity==3)
        {
            flufreq=flufreq+1;
            cout<<"Flu"<<endl;
        }
    }
    else if(option==9)//headaches
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Sometimes"<<endl;
        cout<<"[2]Rare"<<endl;
        cout<<"[3]Common"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            cout<<"Coronavirus"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            cout<<"Cold"<<endl;
        }
        else if(severity==3)
        {
            flufreq=flufreq+1;
            cout<<"Flu"<<endl;
        }
    }
    else//shortness of breath
    {
        cout<<"ENTER SEVERITY;"<<endl;
        cout<<"[1]Sometimes"<<endl;
        cout<<"[2]No"<<endl;
        int severity;
        cin>>severity;
        if(severity==1)
        {
            coronafreq=coronafreq+1;
            cout<<"Coronavirus"<<endl;
        }
        else if(severity==2)
        {
            coldfreq=coldfreq+1;
            flufreq=flufreq+1;
            cout<<"Cold or flu"<<endl;
        }
    }

    }while(option<=9);
    cout<<endl<<endl;
    //Diagnosis and ailment declaration
    if(coronafreq>coldfreq)
    {
        if(coronafreq>flufreq)
        {
            cout<<"CORONA VIRUS:POSITIVE"<<endl;
        }
    }
    else if(coronafreq<coldfreq)
    {
        cout<<"COLD:POSITIVE"<<endl;
    }
    else
    {
        cout<<"FLU:POSITIVE"<<endl;
    }
    cout<<"NOTE THAT A PATIENT MAY SUFFER EITHER FLU OR COLD AS CORONA VIRUS SYMPTOMS!!"<<endl;
}

