#include <iostream>
#include "class.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

Vehicles::Vehicles(){
    srand (time(NULL));
    int i=rand()%1;
    if(i=0){
        ready_cond=false;
    }
    else{
        ready_cond=true;
    }
}

Vehicles::~Vehicles(){

}

bool Vehicles::is_ready(){
    if(ready_cond==true)
        return true;
    else
        return false;
}

///////////////////////////
Road_section::Road_section(){
    srand(time(NULL));
    number_veh=rand()%capacity;
    veh=new Vehicles[number_veh];
}

Road_section::~Road_section(){

}

void Road_section::enter(){
    if(entrance.waiting_num()!=0){
        for(int i=0; i<=entrance.waiting_num(); i++){
            if(number_veh==capacity)
                break;
            entrance.operate();
        }
    }
}

void Road_section::exit(){
    int j=0;
    for(int i=0; i<=number_veh; i++){
        if(veh[i].is_ready()==true)
            j++;
    }
    number_veh=number_veh-j;
}

void Road_section::pass(){
    for(int i=0; i<=number_veh; i++){
        if(veh[i].is_ready()==false)
            
    }
}

int Road_section::get_no_of_vehicles(){
    return number_veh;
}

void Road_section::operate(){
    
}

///////////////////////////
Attika_road::Attika_road(){
    cout<<"Highway in operation"<<endl;
}

Attika_road::~Attika_road(){

}

void Attika_road::operate(){

    cout<<"The vehicles in Attika road are:\n"<<num_vehicles<<endl;
}

///////////////////////////
Junction::Junction(){

}

Junction::~Junction(){

}

/////////////////////////////
Entrance::Entrance(){

}

Entrance::~Entrance(){

}

void Entrance::operate(){
    num_of_waiting=num_of_waiting-1;
}

int Entrance::waiting_num(){
    return num_of_waiting;
}

//////////////////////////////
Exit::Exit(){
    toll_num=0;
    e_toll_num=0;
}

Exit::~Exit(){

}