#ifndef CENSUS_H
#define CENSUS_H
#include <iostream>
#include <string>
#include <vector>
#include <iostream>


using namespace std;

/**
 * 
 @brief Counts the population of civilians  
 @name Census class
 @author Tinayeshe Mugwagwa
 * 
 */


class Census  {
  public:
  /**
   * @brief Construct a new Census object
   * 
   * @param population gets  total of civilians
   * @param country gets country name
   * @param threat gets threat 
   */
    Census(int population, string country, int threat);
    
    //int  getPopulation(int i);
     /**
     * @brief Get country string
     * 
     * @param count gets string of country name
     */
    void countryName(string count);
    /**
     * @brief get the threat result 
     * 
     * @param i insert threat level
     * @return string 
     */
   
    string threatReport(int i) ;
 /**
     * @brief gives summary of all the details.
     * 
     */
    void go();
  
  private:  
    int population;
    string country;
    int threat;   

};

#endif


