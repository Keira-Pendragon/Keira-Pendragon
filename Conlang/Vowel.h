/**
 * ******* Initialization Info ************
 * Vowel.h
 * 11/28/2022 
 * Author: Keira Pendragon
 * ****************************************
 * 
*/

#include <iostream>
#include <vector>
#include <random>

class Vowel
{
    public:
        Vowel();
        std::string getvowels(int);
    private:
        /**
         * While setting this up, I decided once and for all that I need to tweak some of
         * my vowel connotations for nouns, so I'm going to tweak those before I continue this... 
        */
        std::vector <std::string> vowels = {"y", "ʌ", "a", "e", "i" "o", "u"};

        std::vector <std::string> people_v = {"a", "ia", "oa", "ua", "ya", "ʌa", "ea"};
        std::vector <std::string> object_v = {"e", "ie", "oe", "ue", "ye", "ʌe", "ae"};
        std::vector <std::string> places_v = {"ʌ", "iʌ", "oʌ", "uʌ", "yʌ", "aʌ", "eʌ"};

        std::vector <std::string> tense_v = {"e", "o", "a", "u"};
        std::vector <std::string> volition_v = {"e", "ai", "u"};
        std::string plural = "ei";
        std::string adverb = "i";

};