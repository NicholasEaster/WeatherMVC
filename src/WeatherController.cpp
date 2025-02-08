/**
* @author Nicholas Easter [nicholas.easter@uleth.ca]
* @date 9/22/2024
*/
#include <iostream>
#include <string>
#include <vector>

#include "include/WeatherSensor.hpp"
#include "include/WeatherController.hpp"

WeatherController::~WeatherController() {
}

void WeatherController::ExtractData(WeatherSensor* sensor) {
  std::string data = sensor->getReading();
  std::string tempString = data;
  int found = data.find("|");

  for (int i =0; i < 4; i++) {
    tempString.erase(0, found + 1);
    data.erase(data.begin()+found, data.end());
    while (data.back() == '0') {
      data.pop_back();
    }
    if (data.back() == '.') {
      data.pop_back();
    }
    if (i == 0) {
      _model->Weather.Temperature = std::stof(data);
    } else if (i == 1) {
      _model->Weather.Pressure = std::stof(data);
    } else if (i == 2) {
      _model->Weather.Humidity = std::stof(data);
    } else if (i == 3) {
      _model->Weather.Windspeed = std::stof(data);
    }
    data = tempString;
    if (data.find("|") != std::string::npos) {
      found = data.find("|");
    } else {
      found = data.length();
    }
  }
}

void WeatherController::Display() {
  _view->displayTemperature(_model->Weather.Temperature);
  _view->displayPressure(_model->Weather.Pressure);
  _view->displayHumidity(_model->Weather.Humidity);
  _view->displayWindspeed(_model->Weather.Windspeed);
  std::cout << std::endl;
}
