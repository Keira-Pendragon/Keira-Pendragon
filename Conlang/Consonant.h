#include <iostream>
#include <vector>
#include <random>

class Consonant
{
    public:
        std::string getOnset();
        std::string getMid();
        std::string getCoda();    
        void makeMe(int); 
        Consonant();   
    private:
    /**
     * Initializing shit - 
     * TODO: Relearn the cleaner way to do the ints that rep the consts. 
    */
        static const int k_cons = 0;
        static const int t_cons = 1;
        static const int p_cons = 2;
        static const int s_cons = 3;
        static const int sh_cons = 4;
        static const int f_cons = 5;
        static const int th_cons = 6;
        static const int r_cons = 7;
        static const int l_cons = 8;
        static const int n_cons = 9;
        static const int m_cons = 10;
        static const int h_cons = 11;
        std::string lead_const;
        int cons_ID = 13;
        std::vector <std::string> onset_comp;
        std::vector <std::string> coda_comp;
        std::vector <std::string> mid_comp;
};