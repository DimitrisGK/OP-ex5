#include <iostream>
using namespace std;

class Attika_road{
private:
    int nsegs;
    int num_vehicles;
public:
    Attika_road();
    ~Attika_road();

    void operate();
};

class Road_section{
private:
    Entrance entrance;
    int number_veh;
    int capacity;
    //next & prev section
    // next_sect;
    // prev_sect;
public:
    Road_section();
    ~Road_section();

    void enter();
    void exit();
    void pass();
    int get_no_of_vehicles();
    void operate();

    Vehicles* veh;
};

///////////////////////////
class Vehicles{
private:
    bool ready_cond;
public:
    Vehicles();
    ~Vehicles();

    bool is_ready();
};

/////////////////////////
class Junction{
protected:
    char name;
    int toll_num;
    int e_toll_num;
public:
    Junction();
    ~Junction();
};

///////////////////////////
class Entrance: public Junction{
private:
    int num_of_waiting;
public:
    Entrance();
    ~Entrance();

    void operate();
    int waiting_num();
};

/////////////////////////
class Exit: public Junction{
private:
    /* data */
public:
    Exit();
    ~Exit();
};