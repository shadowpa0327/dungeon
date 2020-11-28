#ifndef TOOL_H_INCLUDED
#define TOOL_H_INCLUDED


#include"Object.h"
#include "Room.h"
#include "Dungen.h"
#include<vector>
#include<string>
#include<iostream>
#include<fstream>

using namespace std;

int getnumberfrom_ifstream();
int findpos(vector<Object *> &inventory,string s);
int findpos2(vector<Item> &ll,string type);
//vector<Room> setmap();

vector<Object *> setroomobject(ifstream &,int);
//vector<Object *> setroomobject();

void traverseroom(vector<Room> roomlist);
void backup(Dungeon &dun);
void saveplayer(Player *,vector<Room>,ofstream &);
Player* reading(Player *playptr,vector<Room> &room,int & exit,int &numberofcollect,int &currentkilled,int &numberofkilled,char *,ifstream &);

//Room *setting_roominfor(vector <Room> &room);
//Room *setting_exit(vector <Room> &room);


#endif // TOOL_H_INCLUDED
