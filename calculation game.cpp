//calculation game 4.0
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>
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
void over();
long long duration;
long long start;
long long end;
int period=60;
int timer=period;
void stats();
int totaltime=0,correct=0;
int qa[2]={0,0} , qs[2]={0,0} , qm[2]={0,0} , qd[2]={0,0};
//time spend on practice, average time on each question,total question ans; total correct, total wrong; total adition,sub,mul,divi, 
void custom();
void help();

void help() {
    cout << "Here are the info on all modes:" << endl;
    cout<<"---------------------------------------"<<endl;
    cout << "1. Classic: A simple mode to test your basic calculation skills." << endl;
    cout<<" "<<endl;
    cout << "2. Endless: No time limits, just keep answering questions and score as much as you can!" << endl;
    cout<<" "<<endl;
    cout << "3. Double or Nothing: Answer correctly to double your score with increasing difficulty, but get one wrong and lose everything!" << endl;
    cout<<" "<<endl;
    cout << "4. Quiz: A series of questions with options and 20 sec of timer for each question to test your overall knowledge. Good luck! (note : enter the answer not the options)" << endl;
    cout<<" "<<endl;
    cout << "5. Time Blast: Answer as many questions as you can before the time runs out!" << endl;
    cout<<" "<<endl;
    cout << "6. Practice: Practice without pressure, no timers or penalties, just perfect your skills and see the stats after!" << endl;
    cout<<" "<<endl;
    cout<<"---------------------------------------"<<endl;
    menu();
}

void custom()
{
    int choice;
    cout<<"choose the timer : "<<endl;
    cout<<"1. 60 sec (short)"<<endl;
    cout<<"2. 180 sec (default)"<<endl;
    cout<<"3. 300 sec (long)"<<endl;
    cout<<"4. custom"<<endl;
    cout<<"choose : ";
    cin>>choice;
    if(choice==1)
        period=60;
    else if(choice==2)
        period==180;
    else if(choice==3)
        period==300;
    else if(choice==4)
    {
        cout<<"enter the time (sec) : ";
        cin>>period;
    }
    else
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"error!"<<endl;
        cout<<"---------------------------------------"<<endl;
        menu();
    }
    cout<<"---------------------------------------"<<endl;
    timer=period;
        streak=0;
        m=0;
        i=1;
        count=0;
        lives=5;
        n=5;
        mode=5;
        cout<<" "<<endl;
        cout<<"total time = "<<period<<" seconds"<<endl;
        cout<<"---------------------------------------"<<endl;
        ran();
}

void stats()
{
    i--;
    cout<<"statistics : "<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"total time spend : "<<totaltime<<" seconds"<<endl;
    cout<<"avg.time / question : "<<totaltime/i<<" seconds"<<endl;
    cout<<"Total questions : "<<i<<endl;
    cout<<"Total correct : "<<correct<<" / "<<i<<endl;
    cout<<"total wrong : "<<i-correct<<" / "<<i<<endl;
    cout<<"Total correct addition : "<<qa[1]<<" / "<<qa[0]<<endl;
    cout<<"Total correct subtraction : "<<qs[1]<<" / "<<qs[0]<<endl;
    cout<<"Total correct multiplication : "<<qm[1]<<" / "<<qm[0]<<endl;
    cout<<"Total correct divition : "<<qd[1]<<" / "<<qd[0]<<endl;
    cout<<"---------------------------------------"<<endl;
}

void option(){
    int r=rand()%4;
    int z[4]={0,0,0,0};
    if(n==1)
    {
        int center = a+b;
        for(int i=0; i<4; i++)
        {
            z[i]=(center-100) +rand()%(((center+100)-(center-100))+1);
        }
        z[r]=a+b;
    }
    if(n==2)
    {
        int center = a-b;
        for(int i=0; i<4; i++)
        {
            z[i]=(center-100) +rand()%(((center+100)-(center-100))+1);
        }
        z[r]=a-b;
    }
    if(n==3)
    {
        int center = a*b;
        for(int i=0; i<4; i++)
        {
            z[i]=(center-100) +rand()%(((center+100)-(center-100))+1);
        }
        z[r]=a*b;
    }
    if(n==4)
    {
        int center = a/b;
        for(int i=0; i<4; i++)
        {
            z[i]=(center-100) +rand()%(((center+100)-(center-100))+1);
        }
        z[r]=a/b;
    }
    cout<<"options :   ";
    cout<<z[0]<<"   "<<z[1]<<"   "<<z[2]<<"   "<<z[3]<<endl;
}

void over()
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
        mode=10;
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
    cout<<"2. endless"<<endl;
    cout<<"3. double or nothing"<<endl;
    cout<<"4. quiz"<<endl;
    cout<<"5. time blast"<<endl;
    cout<<"6. practice"<<endl;
    cout<<"7. back"<<endl;
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
        streak=0;
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
        streak=0;
        m=0;
        i=1;
        count=0;
        lives=5;
        n=5;
        mode=3;
        ran();
    }
    else if(choice==4)
    {
        streak=0;
        m=0;
        i=1;
        count=0;
        lives=5;
        n=5;
        mode=4;
        ran();
    }
    else if(choice==5)
    {
        custom();
    }
    else if(choice==6)
    {
        totaltime=0,correct=0;
        for(int i=0; i<2; i++)
        {
            qa[i]=0;
            qs[i]=0;
            qm[i]=0;
            qd[i]=0;
        }
        timer=period;
        streak=0;
        m=0;
        i=1;
        count=0;
        lives=5;
        n=5;
        mode=6;
        ran();
    }
    else if(choice==7)
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
    cout<<"4. help"<<endl;
    cout<<"5. end"<<endl;
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
        help();
    }
    else if(p==5)
    {
        over();
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
    int zero;
    qa[0]++;///////////////////////////////////
    cout<<i<<") "<<a<<" + "<<b<<endl;///////////////////////////
    if(mode==4)
    {
        option();
    }
    auto start=chrono::steady_clock::now();
    cout<<"A: ";
    cin>>c;
    auto end=chrono::steady_clock::now();
    if(mode==6)
    {
        duration = chrono::duration_cast<chrono::seconds>(end - start).count();
        totaltime+=duration;
    }
    if(mode==5)
        {
            duration = chrono::duration_cast<chrono::seconds>(end - start).count();
            timer-=duration;
            if(timer<0)
                timer=0;
            cout<<"---------------------------------------"<<endl;
            cout<<"time remaining : "<<timer<<endl;
        }
    if(c==a+b)////////////////////
    {
        correct++;
        qa[1]++;/////////////////////////
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        if(mode==4)
        {
         duration = chrono::duration_cast<chrono::seconds>(end - start).count();
         zero=20-duration;
         if(zero<=0)
            zero=0;
        if(zero>0)    
            cout<<"Just in time! ";
        cout<<zero<<" seconds were left"<<endl;
        }
        if(duration>20 && mode==4)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            m--;
            streak--;
        }
        else if(mode==5&& timer<=0)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            
            m--;
            streak--;
        }
        else
            if(mode==6)
                cout<<"time taken : "<<duration<<" seconds"<<endl;
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
            if(!(duration>20 && mode==4 || mode==5&& timer<=0))
                cout<<"streak : "<<streak<<endl;
            m++;
            if(duration>20 && mode==4)
            {
                score();
                q();
            }
            else if(mode==5&&timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==2 || mode==6)
                {
                    if(count>=5)
                    {
                    int choice;
                    cout<<"1. end"<<endl;
                    cout<<"2. continue"<<endl;
                    cout<<"choose : ";
                    cin>>choice;
                    if(choice==1)
                    {
                        cout<<"---------------------------------------"<<endl;
                        if(mode==6)
                            stats();
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
                }    
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        if(mode==6)
            cout<<"time taken : "<<duration<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a+b<<endl;///////////////////
        count++;
        if(mode==5)
        {
            if(timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
            }
            
        }
        if(mode==4)
        {
            score();
            q();
        }
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
        else if(mode==2 || mode==6)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. end"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==6)
                    stats();
                menu();
            }
            else if(choice!=2 && choice!=1  )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=10 && mode!=4 )
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
    int zero;
    qs[0]++;
    cout<<i<<") "<<a<<" - "<<b<<endl;
    if(mode==4)
    {
        option();
    }
    auto start=chrono::steady_clock::now();
    cout<<"A: ";
    cin>>c;
    auto end=chrono::steady_clock::now();
    if(mode==6)
    {
        duration = chrono::duration_cast<chrono::seconds>(end - start).count();
        totaltime+=duration;
    }
    if(mode==5)
        {
            duration = chrono::duration_cast<chrono::seconds>(end - start).count();
            timer-=duration;
            if(timer<0)
                timer=0;
            cout<<"---------------------------------------"<<endl;
            cout<<"time remaining : "<<timer<<endl;
        }
    if(c==a-b)
    {
        correct++;
        qs[1]++;
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        if(mode==4)
        {
         duration = chrono::duration_cast<chrono::seconds>(end - start).count();
         zero=20-duration;
         if(zero<=0)
            zero=0;
        if(zero>0)    
            cout<<"Just in time! ";
        cout<<zero<<" seconds were left"<<endl;
        }
        if(duration>20 && mode==4)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            m--;
            streak--;
        }
        else if(mode==5&& timer<=0)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            
            m--;
            streak--;
        }
        else
            if(mode==6)
                cout<<"time taken : "<<duration<<" seconds"<<endl;
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
            if(!(duration>20 && mode==4 || mode==5&& timer<=0))
                cout<<"streak : "<<streak<<endl;
            m++;
            if(duration>20 && mode==4)
            {
                score();
                q();
            }
            else if(mode==5&&timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==2 || mode==6)
                {
                    if(count>=5)
                    {
                    int choice;
                    cout<<"1. end"<<endl;
                    cout<<"2. continue"<<endl;
                    cout<<"choose : ";
                    cin>>choice;
                    if(choice==1)
                    {
                        cout<<"---------------------------------------"<<endl;
                        if(mode==6)
                            stats();
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
                }    
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        if(mode==6)
            cout<<"time taken : "<<duration<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a-b<<endl;
        count++;
        if(mode==5)
        {
            if(timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
            }
            
        }
        if(mode==4)
        {
            score();
            q();
        }
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
        else if(mode==2 || mode==6)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. end"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==6)
                    stats();
                menu();
            }
            else if(choice!=2 && choice!=1  )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=10 && mode!=4 )
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
    int zero;
    qm[0]++;
    cout<<i<<") "<<a<<" * "<<b<<endl;
    if(mode==4)
    {
        option();
    }
    auto start=chrono::steady_clock::now();
    cout<<"A: ";
    cin>>c;
    auto end=chrono::steady_clock::now();
    if(mode==6)
    {
        duration = chrono::duration_cast<chrono::seconds>(end - start).count();
        totaltime+=duration;
    }
    if(mode==5)
        {
            duration = chrono::duration_cast<chrono::seconds>(end - start).count();
            timer-=duration;
            if(timer<0)
                timer=0;
            cout<<"---------------------------------------"<<endl;
            cout<<"time remaining : "<<timer<<endl;
        }
    if(c==a*b)
    {
        correct++;
        qm[1]++;
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        if(mode==4)
        {
         duration = chrono::duration_cast<chrono::seconds>(end - start).count();
         zero=20-duration;
         if(zero<=0)
            zero=0;
        if(zero>0)    
            cout<<"Just in time! ";
        cout<<zero<<" seconds were left"<<endl;
        }
        if(duration>20 && mode==4)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            m--;
            streak--;
        }
        else if(mode==5&& timer<=0)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            
            m--;
            streak--;
        }
        else
            if(mode==6)
                cout<<"time taken : "<<duration<<" seconds"<<endl;
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
            if(!(duration>20 && mode==4 || mode==5&& timer<=0))
                cout<<"streak : "<<streak<<endl;
            m++;
            if(duration>20 && mode==4)
            {
                score();
                q();
            }
            else if(mode==5&&timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==2 || mode==6)
                {
                    if(count>=5)
                    {
                    int choice;
                    cout<<"1. end"<<endl;
                    cout<<"2. continue"<<endl;
                    cout<<"choose : ";
                    cin>>choice;
                    if(choice==1)
                    {
                        cout<<"---------------------------------------"<<endl;
                        if(mode==6)
                            stats();
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
                }    
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        if(mode==6)
            cout<<"time taken : "<<duration<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a*b<<endl;
        count++;
        if(mode==5)
        {
            if(timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
            }
            
        }
        if(mode==4)
        {
            score();
            q();
        }
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
        else if(mode==2 || mode==6)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. end"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==6)
                    stats();
                menu();
            }
            else if(choice!=2 && choice!=1  )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=10 && mode!=4 )
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
    int zero;
    qd[0]++;
    cout<<i<<") "<<a<<" / "<<b<<endl;
    if(mode==4)
    {
        option();
    }
    auto start=chrono::steady_clock::now();
    cout<<"A: ";
    cin>>c;
    auto end=chrono::steady_clock::now();
    if(mode==6)
    {
        duration = chrono::duration_cast<chrono::seconds>(end - start).count();
        totaltime+=duration;
    }
    if(mode==5)
        {
            duration = chrono::duration_cast<chrono::seconds>(end - start).count();
            timer-=duration;
            if(timer<0)
                timer=0;
            cout<<"---------------------------------------"<<endl;
            cout<<"time remaining : "<<timer<<endl;
        }
    if(c==a/b)
    {
        correct++;
        qd[1]++;
        count++;
        i++;
        cout<<"---------------------------------------"<<endl;
        if(mode==4)
        {
         duration = chrono::duration_cast<chrono::seconds>(end - start).count();
         zero=20-duration;
         if(zero<=0)
            zero=0;
        if(zero>0)    
            cout<<"Just in time! ";
        cout<<zero<<" seconds were left"<<endl;
        }
        if(duration>20 && mode==4)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            m--;
            streak--;
        }
        else if(mode==5&& timer<=0)
        {
            cout<<"Correct, but the timing's off!"<<endl;
            
            m--;
            streak--;
        }
        else
            if(mode==6)
                cout<<"time taken : "<<duration<<" seconds"<<endl;
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
            if(!(duration>20 && mode==4 || mode==5&& timer<=0))
                cout<<"streak : "<<streak<<endl;
            m++;
            if(duration>20 && mode==4)
            {
                score();
                q();
            }
            else if(mode==5&&timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==2 || mode==6)
                {
                    if(count>=5)
                    {
                    int choice;
                    cout<<"1. end"<<endl;
                    cout<<"2. continue"<<endl;
                    cout<<"choose : ";
                    cin>>choice;
                    if(choice==1)
                    {
                        cout<<"---------------------------------------"<<endl;
                        if(mode==6)
                            stats();
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
                }    
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
    }
    else if (lives!=1)
    {
        i++;
        streak=0;
        cout<<"---------------------------------------"<<endl;
        if(mode==6)
            cout<<"time taken : "<<duration<<endl;
        cout<<"wrong answer"<<endl;
        cout<<"correct ans: "<<a/b<<endl;
        count++;
        if(mode==5)
        {
            if(timer<=0)
            {
                score();
                q();
            }
            else
            {
                cout<<"---------------------------------------"<<endl;
            }
            
        }
        if(mode==4)
        {
            score();
            q();
        }
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
        else if(mode==2 || mode==6)
        {
            if(count>=5)
            {
            int choice;
            cout<<"---------------------------------------"<<endl;
            cout<<"1. end"<<endl;
            cout<<"2. continue"<<endl;
            cout<<"choose : ";
            cin>>choice;
            if(choice==1)
            {
                cout<<"---------------------------------------"<<endl;
                if(mode==6)
                    stats();
                menu();
            }
            else if(choice!=2 && choice!=1  )
            {
                cout<<"invalid input!"<<endl;
                cout<<"---------------------------------------"<<endl;
                menu();
            }
            count=0;
            }
            cout<<"---------------------------------------"<<endl;
        }
        if(mode!=3 && mode!=10 && mode!=4 )
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
    cout<<"1. addition "<<endl;
    cout<<"2. subtraction "<<endl;
    cout<<"3. multiplication "<<endl;
    cout<<"4. divition "<<endl;
    cout<<"5. random operations "<<endl;
    cout<<"choose your option : ";
    cin>>n;
    cout<<"---------------------------------------"<<endl;
    ran();
}
int main() 
{
    srand(time(0));
    cout<<"---------------------------------------"<<endl;
    cout<<"     Welcome to the Math Madness !"<<endl;
    cout<<"---------------------------------------"<<endl;
    menu();
    return 0;
}
