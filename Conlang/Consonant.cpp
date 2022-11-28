/**
 * ******* Initialization Info ************
 * Consonant.cpp
 * 11/28/2022 
 * Author: Keira Pendragon
 * ****************************************
 * 
*/

#include "Consonant.h"
/**
 * Try to figure out header and class inegration.... 
 * might need to wait till I'm at home...
 * TODO: if possibly merge and replace makeMe().
*/
Consonant::Consonant()
{

}


/**
 * Initialize the consonant for acceptable onset and coda clusters.
 * TODO: reunite with the constructor. 
 * Alternatively figure out a more streamlined solution - Already kind of cooking
 * some options in my brain for later. 
*/
void Consonant::makeMe(int c_val)
{
    c_val = cons_ID;
    // Determine the lead consonant
    switch (cons_ID)
    {
    // It's K
    case k_cons:
        lead_const = "k";
        onset_comp = {"r", "l", "s"};
        mid_comp = {"t", "p", "s", "ɕ", "f", "θ", "r", "l", "n", "m"};
        coda_comp = {"s", "st"};
        break;
    // It's T
    case t_cons:
        lead_const = "t";
        onset_comp = {"r", "s", "ɕ"};
        mid_comp = {"k", "p", "s", "ɕ", "f", "θ", "r", "l", "n", "m"};
        coda_comp = {"s", "ɕ"};
        break;
    // It's P
    case p_cons:
        lead_const = "p";
        onset_comp = {"r", "s", "ɕ", "n", "l", "t"};
        mid_comp = {"k", "t", "s", "ɕ", "f", "θ", "r", "l", "n", "m"};
        coda_comp = {"s", "ɕ", "t", "k", "f", "θ"};
        break;
    // It's S    
    case s_cons:
        lead_const = "s";
        onset_comp = {"k", "t", "p", "f", "θ", "r", "l", "n", "m"};
        mid_comp = {"k", "t", "p", "f", "θ", "r", "l", "n", "m"};
        coda_comp = {"k", "t", "p", "f", "θ", "r", "l", "n", "m"};
        break;
    // It's 
    case sh_cons:
        lead_const = "ɕ";
        onset_comp = {"k", "t", "p", "f", "θ", "r", "l", "n", "m"};
        mid_comp = {"k", "t", "p", "f", "θ", "r", "l", "n", "m"};
        coda_comp = {"k", "t", "p", "f", "θ", "r", "l", "n", "m"};
        break;
    // It's F
    case f_cons:
        lead_const = "f";
        onset_comp = {"r", "l", "n"};
        mid_comp = {"k", "t", "p", "s", "ɕ", "θ", "r", "l", "n", "m"};
        coda_comp = {"k", "t", "p", "s", "ɕ", "θ"};
        break;
    // It's 
    case th_cons:
        lead_const = "θ";
        onset_comp = {"r", "l", "n"};
        mid_comp = {"k", "t", "p", "s", "ɕ", "f", "r", "l", "n", "m"};
        coda_comp = {"k", "t", "p", "s", "ɕ", "f"};
        break;
    // It's R
    case r_cons:
        lead_const = "r";
        onset_comp = {"'k", "'t", "'p", "'l", "'s", "'ɕ", "'f", "'θ", "'n", "'m"};
        mid_comp = {"k", "t", "p", "s", "ɕ", "f", "θ", "l", "n", "m"};
        coda_comp = {"k", "t", "p", "s", "ɕ", "f", "θ", "l", "n", "m"};
        break;
    // It's L
    case l_cons:
        lead_const = "l";
        onset_comp = {"'k", "'t", "'p", "'r", "'s", "'ɕ", "'f", "'θ", "'n", "'m"};
        mid_comp = {"k", "t", "p", "s", "ɕ", "f", "θ", "r", "n", "m"};
        coda_comp = {"k", "t", "p", "s", "ɕ", "f", "θ", "n", "m"};
        break;
    // It's N
    case n_cons:
        lead_const = "n";
        onset_comp = {"r"};
        mid_comp = {"k", "t", "p", "s", "ɕ", "f", "θ", "r", "l", "m"};
        coda_comp = {"k", "t", "s", "ɕ", "f", "θ", "m"};
        break;
    // It's M
    case m_cons:
        lead_const = "m";
        onset_comp = {"r"};
        mid_comp = {"k", "t", "p", "s", "ɕ", "f", "θ", "r", "l", "n"};
        coda_comp = {"k", "p", "s", "ɕ", "f", "θ", "n"};
        break;
    /** It's H
     * TODO: remove this one when I either decide h_cons is truly unnecessary, 
     * or if I find a proper use for it elsewhere.
    */
    case h_cons:
        lead_const = "h";
        onset_comp = {""};
        mid_comp = {""};
        coda_comp = {""};
        break;
    // H is also default because I hate and am paranoid about switches.and also hate unused variables- 
    default:
        lead_const = "h";
        onset_comp = {""};
        mid_comp = {""};
        coda_comp = {""};
        break;
    }
    
}

/**
 * Return a suitable Onset Cluster
*/
std::string Consonant::getOnset()
{
    std::string onset = lead_const;
    int tail_ID = rand() % onset_comp.size();
    if (tail_ID >= 0 && tail_ID > onset_comp.size())
    {
        onset += onset_comp.at(tail_ID);
    }
    return onset;
}

/**
 * Return a suitable mid-word cluster
*/
std::string Consonant::getMid()
{
    std::string mid_cluster = lead_const;
    int tail_ID = rand() % mid_comp.size();
    if (tail_ID >= 0 && tail_ID > mid_comp.size())
    {
        mid_cluster += mid_comp.at(tail_ID);
    }
    return mid_cluster;
}

/**
 * Return a suitable coda cluster
*/
std::string Consonant::getCoda()
{
    std::string coda = lead_const;
    int tail_ID = rand() % coda_comp.size();
    if (tail_ID >= 0 && tail_ID > coda_comp.size())
    {
        coda += coda_comp.at(tail_ID);
    }
    return coda;
}