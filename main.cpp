#include<iostream>
#include "Item.h"
#include "tool.h"
#include "Player.h"
#include "Dungen.h"
#include <fstream>
using namespace std;

int main()
{
    /*ifstream infile("setting.txt.txt");
    if(infile.good())
        cout<<"ya"<<endl;
    string s;
    infile>>s;
    cout<<s<<endl;*/
    //ifstream infile("current.dat",ios::binary);
    //Dungeon startdungeon;
    //infile.read((char*) &startdungeon ,sizeof(startdungeon));

    Dungeon backupdun(1);
    backupdun.runDungeor();

    //Dungeon startdungeon;
    //startdungeon.runDungeor();


    //backup(startdungeon);
    //Dungeon ddd=startdungeon;
    //ddd.runDungeor();
    //cout<<ddd.getPlayer()->getName()<<endl;
    //outfile.write((char*) &startdungeon,sizeof(startdungeon));
    return 0;

}

/*
1 -1 -1 -1
2 0 -1 -1
3 1 -1 -1
-1 2 -1 -1
*/

/*
1 -1 -1 -1
2 0 -1 4
3 1 -1 -1
-1 2 -1 -1
-1 -1 1 5
-1 -1 4 -1
*/
