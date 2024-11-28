//calculation game 1.0
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int a,b,i=1;
int level=100;
int n,m=0,lives=5;
int p;
float c;
void ask();
void add();
void sub();
void mul();
void divi();
void ran();
void score();
void all();
bool flag=false;
void play();
void menu();
void diff();
void q();
int hs;
void high();

void high()
{
    int choice;
    cout<<"your high score is : "<<hs<<endl;
    cout<<"press 1 to go back : ";
    cin>>choice;
    cout<<"---------------------------------------"<<endl;
    if(choice==1)
    {
        menu();
    }
    else
    {
        cout<<"error"<<endl;
        menu();
    }
    
    
}

void q()
{
    int choice;
    cout<<"1. play again"<<endl;
    cout<<"2 menu"<<endl;
    cout<<"enter the option"<<endl;
    cin>>choice;
    cout<<"---------------------------------------"<<endl;
    if(choice==1)
    {
        play();
    }
    else if(choice==2)
    {
        menu();
    }
    else
    {
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
}

void diffi()
{
    int choice;
    cout<<"1. easy"<<endl;
    cout<<"2. medium"<<endl;
    cout<<"3. hard"<<endl;
    cout<<"choose your option : ";
    cin>>choice;
    cout<<"---------------------------------------"<<endl;
    if(choice==1)
    {
        level=100;
    }
    else if(choice==2)
        level=300;
    else if(choice==3)
        level=500;
    menu();
}

void menu()
{
    cout<<"1. play"<<endl;
    cout<<"2. difficulty"<<endl;
    cout<<"3. high score"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"choose your option : ";
    cin>>p;
    cout<<"---------------------------------------"<<endl;
    if(p==1)
        play();
    else if(p==2)
        diffi();
    else if(p==3)
    {
        high();
    }
    else if(p==4)
    {
        cout<<"THANK YOU FOR PPLAYING THE GAME "<<endl;
        cout<<"MEET YOU SOON!"<<endl;
    }
    else
    {
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
}

void all()
{
    n=1+rand()%4;
    ran();
}

void score()
{
    cout<<"---------------------------------------"<<endl;
    cout<<"your score is - "<<m<<endl;
    cout<<"---------------------------------------"<<endl;
    if(m>hs)
        hs=m;
    q();
}

void ran()
{
    a=rand()%level;
    b=rand()%level;
    ask();
}

void ask()
{
    
    if(n==1)
    {
        add();
    }
    else if(n==2)
    {
        sub();
    }
    else if(n==3)
    {
        mul();
    }
    else if(n==4)
    {
        if (b!=0 && a>b && a%b==0)
            divi();
        else
            ran();
    }
    else if(n==5)
    {
        flag=true;
        all();
    }
    else
    {
        cout<<"enter a valid number"<<endl;
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
}

void add()
{
    cout<<i<<". "<<a<<" + "<<b<<endl;
    cout<<"A: ";
    cin>>c;
    if(c==a+b)
    {
        i++;
        cout<<"its correct"<<endl;
        cout<<"---------------------------------------"<<endl;
        m++;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }
    else if (lives!=1)
    {
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        lives--;
        cout<<"total lives left : "<<lives<<endl;
        cout<<"---------------------------------------"<<endl;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
    }
    
}
void sub()
{
    cout<<i<<". "<<a<<" - "<<b<<endl;
    i++;
    cout<<"A: ";
    cin>>c;
    if(c==a-b)
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        cout<<"---------------------------------------"<<endl;
        m++;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }
    else if (lives!=1)
    {
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        lives--;
        cout<<"total lives left : "<<lives<<endl;
        cout<<"---------------------------------------"<<endl;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
    }
}
void mul()
{
    cout<<i<<". "<<a<<" * "<<b<<endl;
    i++;
    cout<<"A: ";
    cin>>c;
    if(c==a*b)
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        cout<<"---------------------------------------"<<endl;
        m++;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }
    else if (lives!=1)
    {
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        lives--;
        cout<<"total lives left : "<<lives<<endl;
        cout<<"---------------------------------------"<<endl;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
    }
}
void divi()
{
    cout<<i<<". "<<a<<" / "<<b<<endl;
    i++;
    cout<<"A: ";
    cin>>c;
    if(c==a/b)
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        cout<<"---------------------------------------"<<endl;
        m++;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }
    else if (lives!=1)
    {
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        lives--;
        cout<<"total lives left : "<<lives<<endl;
        cout<<"---------------------------------------"<<endl;
        if(flag==false)
        {
            ran();
        }
        else
        {
            all();
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
    }
}
//ask()
void play()
{
    lives=5;
    m=0;
    i=1;
    cout<<"enter the operation you want to do : "<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"press 1 to do addition "<<endl;
    cout<<"press 2 to do subtraction "<<endl;
    cout<<"press 3 to do multiplication "<<endl;
    cout<<"press 4 to do divition "<<endl;
    cout<<"press 5 to do random operations "<<endl;
    cout<<"choose your option : ";
    cin>>n;
    cout<<"---------------------------------------"<<endl;
    ran();
}
int main() {
    srand(time(0));
    cout<<"welcome to calculating game"<<endl;
    cout<<"---------------------------------------"<<endl;
    menu();
    return 0;
}


