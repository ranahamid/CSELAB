#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
using namespace std;

#define MAX 100

class text_file
{
    private:
    char s[MAX],fni[MAX],fno[MAX],map[MAX][MAX];
    int mapwords,mapnumber[MAX];

    public:

    text_file()
    {
        mapwords=0;
        for(int i=0;i<MAX;i++)
        mapnumber[i]=0;
    }

    void SetInputFile(char FN[])
    {
        strcpy(fni,FN);
        fstream input_file(fni,ios::out);
        cout<<"\nEnter strings for the input file\nEnter \"END\" in a new line to stop entering strings into the input file\nNow enter strings as you like : \n"<<endl;
        while(1)
        {
            gets(s);
            if(strcmp(s,"END")==0)break;
            strcat(s,"\n");
            input_file<<s;
        }
        input_file.close();
    }
    void SetOutputFile(char FN[])
    {
        strcpy(fno,FN);
        fstream input_file(fni,ios::in);
        fstream output_file(fno,ios::out);
        while(!input_file.eof())
        {
            input_file>>s;
            if(wordExclusionSet(s))
            continue;
            else if(!input_file.eof())
            addToMap(s);
        }
        input_file.close();
        for(int i=0;i<mapwords;i++)
        {
            output_file<<map[i]<<" "<<mapnumber[i]<<endl;
        }
        output_file.close();
    }
    bool wordExclusionSet(char str[])
    {
        if((strcmp(str,"a")==0)||(strcmp(str,"an")==0)||
        (strcmp(str,"or")==0)||(strcmp(str,"the")==0)||
        (strcmp(str,"and")==0)||(strcmp(str,"but")==0))
        return true;
		else 
        return false;
    }
    void addToMap(char str[])
    {
        int i,j;
        for(i=0;i<mapwords;i++)
        if((strcmp(map[i],str))==0)
        {
        mapnumber[i]++;
        return;
        }
        strcpy(map[mapwords],str);
        mapnumber[mapwords]++;
        mapwords++;
    }
    
    bool search(char str[])
    {
        for(int i=0;i<mapwords;i++)
        if((strcmp(map[i],str))==0)
           return true;
        else false;
    }
    void printWordMap()
    {
        cout<<"\nThe word map is printed below : \nword : number_of_presence"<<endl;
        cout<<"Not a,and,but,or,an,the"<<endl<<endl;
        for(int i=0;i<mapwords;i++)
        cout<<map[i]<<" "<<mapnumber[i]<<endl;
    }
};

int main()
{
    char fni[MAX],fno[MAX],str[MAX];
    text_file File;
    cout<<"\nEnter the name of the input file : ";
    cin>>fni;
    File.SetInputFile(fni);
    cout<<"\nEnter the name of the output file : ";
    cin>>fno;
    File.SetOutputFile(fno);
    cout<<"\nNow enter a word to search n\nEnter \"END\" to stop"<<endl;
    while(1)
    {
        cout<<"\nThe word to be searched : ";
        cin>>str;
        if(strcmp(str,"END")==0)
        break;
        if(File.search(str))
        cout<<"The word is not found "<<endl;
        else 
        cout<<"The word is  found "<<endl;
    }
    File.printWordMap();

  system("PAUSE");
}
