/**
* @author Nicholas Easter [nicholas.easter@uleth.ca]
* @date 9/22/2024
*/
#ifndef WEATHERCONTROLLER_H_INCLUDED
#define WEATHERCONTROLLER_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "include/WeatherView.hpp"
#include "include/WeatherModel.hpp"
#include "include/WeatherSensor.hpp"

/**
* @class WeatherController WeatherController.hpp "WeatherController.hpp"
* @brief The bridge between the Model and the View. Controls both.
*/
class WeatherController {
 private:
  WeatherModel* _model;
  WeatherView* _view;

 public:
  /**
  *  @brief Constructor function
  *  @param [in] m The model the controller uses
  *  @param [in] v The view the controller uses
  *  @details Creates a WeatherController object with access to the model and view.
  */
  WeatherController(WeatherModel* m, WeatherView* v) : _model(m), _view(v) {}

  /**
  *  @brief Destructor
  *  @details Deletes the controller.
  */
  ~WeatherController();

  /**
  *  @brief Extracts the sensor data
  *  @param [in] s The sensor full of data
  *  @details Extracts the data and sends the converted floats to the model.
  */
  void ExtractData(WeatherSensor* s);

  /**
  *  @brief Displays the data to the user via the view
  *  @details Displays the data depending on which type of view it controlls.
  */
  void Display();
};

#endif
