/**
* @author Nicholas Easter [nicholas.easter@uleth.ca]
* @date 9/22/2024
*/
#ifndef WEATHERMODEL_H_INCLUDED
#define WEATHERMODEL_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

/**
* @class WeatherModel WeatherModel.hpp "WeatherModel.hpp"
* @brief Stores the weather data for future use.
*/
class WeatherModel {
 public:
  /**
  *  @brief Default onstructor function
  *  @details Creates a WeatherModel object to store weather data.
  */
  WeatherModel();

  /**
  *  @brief Destructor
  *  @details Deletes the model
  */
  ~WeatherModel();

  struct WeatherData {
    float Temperature = 0.0;
    float Pressure = 0.0;
    float Humidity = 0.0;
    float Windspeed = 0.0;
  } Weather;
};

#endif
