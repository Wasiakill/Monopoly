#include <iostream>

using namespace std;

class Player
{
    public:
    const int playerId;
    int playerFieldId;//polozenie gracza na planszy
    int money;
    int playerMove;
    bool inPrison;//czy gracz jest w wiezieniu
    bool cardPrison;//czy gracz posiada karte wyjscia z wiezienia
    int timePrison;//ile tur gracz siedzi w wiezieniu
    bool broke; //czy gracz jest bankrutem czy dalej gra

    Player(int id, int fieldId, int mny, int pMove, bool iP, bool cP, int tP, bool br);

    void dice();
    void dicePrison();
    void playerMoveBy();
    bool haveMoney(int price);
    void payTax(int price);
    void noMoney(int price);
    void getMoney(int price);
    void goToJail();
};
class Bank
{
    public:
    int money;
    
    void getTax(int price);
    void payToPlayer(int price, int pId);
    
    private:
    Bank(int mn=50000);
    bool haveMoney();
};
class Property
{
    public:
    const int fieldId;
    int propertyColor;
    string propertyName;
    int owner;
    int price;
    int baseRent;
    int houses;
    int houseRent;
    int housePrice;
    int hotels;
    int hotelRent;
    int hotelPrice;
    bool mortgage;
    int buildingsRent = (houses * houseRent) + (hotels * hotelRent);
    int actualRent = baseRent + buildingsRent;

    Property(int id, string name, int color, int own, int prc, int bR, bool h, bool hR, int hP, int ho, int hoR, int hoP, bool mor);

    void buy(int own, int pId);
    void buildHouse(int pId);
};
class OtherProperty
{
    public:
    const int fieldId;
    string propertyName;
    int owner;
    int price;
    int rent;

    OtherProperty(int id, string name, int own, int prc, int r);

    void buy(int own, int pId);
};
class Rails
{
    public:
    const int fieldId;
    string propertyName;
    int owner;
    int price;
    int rent;

    Rails(int id, string name, int own, int prc, int r);

    void buy(int own, int pId);
};
class Tax
{
    public:
    const int fieldId;
    int tax;

    Tax(int id, int t);
};
class Card
{
    public:
    const int fieldId;
    int cardType;

    Card(int id, int cT);

    int cardRand();
};
class Parking
{
    public:
    const int fieldId;

    Parking(int id);
};
class Start
{
    public:
    const int fieldId;

    Start(int id);
};
class gojail
{
    public:
    const int fieldId;

    gojail(int id);
};
class Prison
{
    public:
    const int fieldId;

    Prison(int id);

    int whoPrison();
	void bailOut(int id);
};
