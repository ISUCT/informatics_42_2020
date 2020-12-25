#include <iostream>
#include <string>
using namespace std;

class mc
{
    string nickname;
    string type;
    int lvl;
    int str;
    int in;
    int en;
    double hp;
    double mp;
    double phys_dam;
    double mag_dam;
    double phys_def;
    double mag_def;
    double speed;
public:
    mc(string nick, string t, int l)
    {
        nickname = nick;
        type = t;
        lvl = l;
        if (t=="warrior"){
            str = 8; in = 4; en = 5;
        }
        if (t=="magician"){
            str = 4; in = 8; en = 6;
        }
        if (t=="healer"){
            str = 6; in = 6; en = 6;
        }
        if (t=="thief"){
            str = 4; in = 5; en = 8;
        }
        hp = str+(0,3*lvl);
        mp = in+(0,3*lvl);
        speed = en+(0,3*lvl);
        phys_dam = hp*lvl/in+(en*0,5);
        mag_dam = mp*lvl/str+(en*0,5);
        phys_def = hp*lvl/in+(en*0,5);
        mag_def = mp*lvl/str+(en*0,5);
    }
    mc(string nick, string t):mc(nick,t,10)
    {

    }
    void print_stat(){
        cout<<"Nickname: "<<nickname<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Level: "<<lvl<<endl;
        cout<<"Strength: "<<str<<endl;
        cout<<"Intelligence: "<<in<<endl;
        cout<<"Endurance: "<<en<<endl;
        cout<<"Health points: "<<hp<<endl;
        cout<<"Mana points: "<<mp<<endl;
        cout<<"Physical damage: "<<phys_dam<<endl;
        cout<<"Magic damage: "<<mag_dam<<endl;
        cout<<"Physical defence: "<<phys_def<<endl;
        cout<<"Magic defence: "<<mag_def<<endl;
        cout<<"Speed: "<<speed<<endl;
    }
    void level_up(){
        lvl++;
    }
    void change_nick(string name){
        nickname = name;
    }
    void change_type(string ty){
        type = ty;
        if (ty=="warrior"){
            str = 8; in = 4; en = 5;
        }
        if (ty=="magician"){
            str = 4; in = 8; en = 6;
        }
        if (ty=="healer"){
            str = 6; in = 6; en = 6;
        }
        if (ty=="thief"){
            str = 4; in = 5; en = 8;
        }
        hp = str+(0,3*lvl);
        mp = in+(0,3*lvl);
        speed = en+(0,3*lvl);
        phys_dam = hp*lvl/in+(en*0,5);
        mag_dam = mp*lvl/str+(en*0,5);
        phys_def = hp*lvl/in+(en*0,5);
        mag_def = mp*lvl/str+(en*0,5);
    }
};

int main()
{
    string nickname;
    string type;
    int lvl;
    cout<<"Enter the nickname(without spaces): ";
    cin>>nickname;
    cout<<"\nEnter the type of character (warrior, magician, healer or thief): ";
    cin>>type;
    cout<<"\nEnter the level (0-80):";
    cin>>lvl;
    mc hero(nickname, type, lvl);
    hero.print_stat();
    cout<<endl;
    cout<<"LVL+1"<<endl;
    hero.level_up();
    hero.print_stat();
    cout<<endl;
    cout<<"Name was changed to 'Otto'."<<endl;
    hero.change_nick("Otto");
    hero.print_stat();
    cout<<endl;
    cout<<"Type was changed to 'thief'."<<endl;
    hero.change_type("thief");
    hero.print_stat();
}
