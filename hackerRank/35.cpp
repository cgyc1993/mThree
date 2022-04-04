#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
    Fireball* fire = dynamic_cast<Fireball*>(spell);
    Frostbite* frost = dynamic_cast<Frostbite*>(spell);
    Waterbolt* water = dynamic_cast<Waterbolt*>(spell);
    Thunderstorm* thunder = dynamic_cast<Thunderstorm*>(spell);
    string spell1;
    string spell2;
    
    if( fire ){
        fire->revealFirepower();
    }
    else if( frost ){
        frost->revealFrostpower();
    }
    else if( thunder ){
        thunder->revealThunderpower();
    }
    else if( water ){
        water->revealWaterpower();
    }
    else {
        spell1 = spell->revealScrollName();
        spell2 = SpellJournal::journal;
        
        int lcs[spell1.size() + 1][spell2.size() + 1];
        
        for (int i = 0; i <= spell1.size(); i++) {
            for (int j = 0; j <= spell2.size(); j++) {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (spell1[i - 1] == spell2[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    
        cout << lcs[spell1.size()][spell2.size()] << endl;
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}