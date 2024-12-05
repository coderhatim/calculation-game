//calculation game 2.0
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
void classic();
void menu();
void diff();
void q();
int hs[3]={0,0,0};//index array is extra becauz of my mistake n dont want to change all thing in my code.
void high();
int mode=1;
void temp();
int count=0;
void play();
void nothing();
int difficult=1;
void check();
int streak=0;
void longst();
void end();

void end()
{
    int choice;
    cout<<"please share a review with us :"<<endl;
    for(int i=1; i<=5; i++)
    {
        cout<<i<<". ";
        for(int j=0; j<i; j++)
        {
            cout<<"☆ ";
        }
        cout<<endl;
    }
    cout<<"rate us : ";
    cin>>choice;
    if(choice>0 && choice<6)
    {
        for(int i=0; i<choice; i++)
        {
            cout<<"★ ";
        }
        cout<<endl;
        cout<<"thank you for your reveiw"<<endl;
        cout<<"---------------------------------------"<<endl;
    }
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
    cout<<"do you want to really end"<<endl;
    cout<<"1. no "<<endl;
    cout<<"2. yes"<<endl;
    cin>>choice;
    cout<<"---------------------------------------"<<endl;
    if(choice==1)
        menu();
    else if (choice==2)
    {
        cout<<"THANK YOU FOR PLAYING THE GAME "<<endl;
        cout<<"MEET YOU SOON!"<<endl;
        mode=5;
    }
    else
    {
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
    }
}

void longst()
{
    if(streak>hs[2])
    {
        hs[2]=streak;
    }
}

void check()
{
    if(difficult==1)
    {
        level=100;
    }
    else if(difficult==2)
    {
        level=300;
    }
    else if(difficult==3)
    {
        level=500;
    }
    else
    {
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
    }
}

void nothing()
{
    int choice;
    cout<<"1. double it (if loose score will be 0)"<<endl;
    cout<<"2. end"<<endl;
    cout<<"choose : ";
    cin>>choice;
    if(choice==1)
    {
        level+=2;
        cout<<"---------------------------------------"<<endl;
        all();
    }
    else if(choice==2)
    {
        score();
        check();
        menu();
    }
    else
    {
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
}

void play()
{
    int choice;
    check();
    cout<<"1. classic"<<endl;
    cout<<"2. practice"<<endl;
    cout<<"3. double or nothing"<<endl;
    cout<<"4. back"<<endl;
    cout<<"choose : ";
    cin>>choice;
    cout<<"---------------------------------------"<<endl;
    cout<<" "<<endl;
    if(choice==1)
    {
        mode=1;
        flag=false;
        classic();
    }
    else if(choice==2)
    {
        m=0;
        i=1;
        count=0;
        lives=5;
        n=5;
        mode=2;
        ran();
    }
    else if(choice==3)
    {
        m=0;
        i=1;
        count=0;
        lives=5;
        n=5;
        mode=3;
        ran();
    }
    else if(choice==4)
        menu();
    else
    {
        cout<<"error"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
}

void high()
{
    int choice;
    cout<<"your high score is : "<<hs[1]<<endl;
    cout<<"your longest streak is : "<<hs[2]<<endl;
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
        classic();
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
    //int difficult;
    cout<<"1. easy"<<endl;
    cout<<"2. medium"<<endl;
    cout<<"3. hard"<<endl;
    cout<<"choose your option : ";
    cin>>difficult;
    cout<<"---------------------------------------"<<endl;
    check();
    menu();
}

void menu()
{
    cout<<"1. play"<<endl;
    cout<<"2. difficulty"<<endl;
    cout<<"3. high score"<<endl;
    cout<<"4. end"<<endl;
    cout<<"choose your option : ";
    cin>>p;
    cout<<"---------------------------------------"<<endl;
    if(p==1)
    {
        play();
    }
    else if(p==2)
        diffi();
    else if(p==3)
    {
        high();
    }
    else if(p==4)
    {
        end();
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
    if(m>hs[1])
        hs[1]=m;
    
}

void ran()
{
    
    a=rand()%level;
    b=rand()%level;
    ask();
}

void ask() //real ask statement
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
    cout<<i<<") "<<a<<" + "<<b<<endl;
    cout<<"A: ";
    cin>>c;
    if(c==a+b)
    {
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        
        if(mode==3)
        {
            if(i==2)
                m++;
            else    
                m=m*2;
            cout<<"score : "<<m<<endl;
            cout<<"---------------------------------------"<<endl;
            nothing();
            
        }
        else
        {
            streak++;
            longst();
            cout<<"streak : "<<streak<<endl;
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a+b<<endl;
        count++;
        if(mode==3)
        {
            m=0;
            score();
            menu();
        }
        if(mode==1)
        {
            lives--;
            cout<<"total lives left : "<<lives<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        else if(mode==2)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. go back"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            else if(choice!=2 && choice!=1 )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=5)
        {
            if(flag==false)
            {
                ran();
            }
            else
            {
                all();
            }
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
        q();
    }
    
}
void sub()
{
    cout<<i<<") "<<a<<" - "<<b<<endl;
    cout<<"A: ";
    cin>>c;
    if(c==a-b)
    {
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        
        if(mode==3)
        {
            if(i==2)
                m++;
            else    
                m=m*2;
            cout<<"score : "<<m<<endl;
            cout<<"---------------------------------------"<<endl;
            nothing();
            
        }
        else
        {
            streak++;
            longst();
            cout<<"streak : "<<streak<<endl;
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a-b<<endl;
        count++;
        if(mode==3)
        {
            m=0;
            score();
            menu();
        }
        if(mode==1)
        {
            lives--;
            cout<<"total lives left : "<<lives<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        else if(mode==2)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. go back"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            else if(choice!=2 && choice!=1 )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=5)
        {
            if(flag==false)
            {
                ran();
            }
            else
            {
                all();
            }
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
        q();
    }
    
}
void mul()
{
    cout<<i<<") "<<a<<" * "<<b<<endl;
    cout<<"A: ";
    cin>>c;
    if(c==a*b)
    {
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        
        if(mode==3)
        {
            if(i==2)
                m++;
            else    
                m=m*2;
            cout<<"score : "<<m<<endl;
            cout<<"---------------------------------------"<<endl;
            nothing();
            
        }
        else
        {
            streak++;
            longst();
            cout<<"streak : "<<streak<<endl;
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a*b<<endl;
        count++;
        if(mode==3)
        {
            m=0;
            score();
            menu();
        }
        if(mode==1)
        {
            lives--;
            cout<<"total lives left : "<<lives<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        else if(mode==2)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. go back"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            else if(choice!=2 && choice!=1 )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=5)
        {
            if(flag==false)
            {
                ran();
            }
            else
            {
                all();
            }
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
        q();
    }
    
}
void divi()
{
    cout<<i<<") "<<a<<" / "<<b<<endl;
    cout<<"A: ";
    cin>>c;
    if(c==a/b)
    {
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        cout<<"its correct"<<endl;
        
        if(mode==3)
        {
            if(i==2)
                m++;
            else    
                m=m*2;
            cout<<"score : "<<m<<endl;
            cout<<"---------------------------------------"<<endl;
            nothing();
            
        }
        else
        {
            streak++;
            longst();
            cout<<"streak : "<<streak<<endl;
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a/b<<endl;
        count++;
        if(mode==3)
        {
            m=0;
            score();
            menu();
        }
        if(mode==1)
        {
            lives--;
            cout<<"total lives left : "<<lives<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        else if(mode==2)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. go back"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            else if(choice!=2 && choice!=1 )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=5)
        {
            if(flag==false)
            {
                ran();
            }
            else
            {
                all();
            }
        }
    }   
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"game over"<<endl;
        score();
        q();
    }
    
}
//ask()
void classic()
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
int main() 
{
    srand(time(0));
    menu();
    return 0;
}
