/**
 * ******* Initialization Info ************
 * Consonant.h
 * 11/28/2022 
 * Author: Keira Pendragon
 * ****************************************
 * 
*/

#include <iostream>
#include <vector>
#include <random>

class Consonant
{
    public:
        // Returns an ostensibly viable onset cluster.
        std::string getOnset();
        // Returns a hypothetically acceptable mid-word cluster.
        std::string getMid();
        // Returns a coda cluster that is supposedly sound.
        std::string getCoda();    
        // Annoyed at not being able to test things here, Don't think I Actually need this
        // But until I can test a constructor with an int passed to it at home, it'll stay...
        void makeMe(int); 
        // Dummy Constructor - Do Not Like. :scowls:
        Consonant();   
    private:
    /**
     * Initializing shit - 
     * TODO: Relearn the cleaner way to do the ints that rep the consts. 
    */
        // Value for each major consonant for the switch...
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
        // The consonant that will preface any cluster this spits out.
        std::string lead_const;
        // stores the numeric indicator for this consonant 
        // indicates whether the object has been initialized...
        int cons_ID = 13;

        // All the possible tails for the const as an onset cluster
        std::vector <std::string> onset_comp;
        // All the possible tails for the const as a mid-word cluster
        std::vector <std::string> coda_comp;
        // All the possible tails for the const as a coda cluster
        std::vector <std::string> mid_comp;
        /**
         *  Using string as I am a lazy slob and several of the letters I'm using are unicode
         * TODO: Possibly update these if I ever figure out how to do the char type that allows
         * all the IPA symbols.... :sigh:
         */
    

};