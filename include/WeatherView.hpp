/**
* @author Nicholas Easter [nicholas.easter@uleth.ca]
* @date 9/22/2024
*/
#ifndef WEATHERVIEW_H_INCLUDED
#define WEATHERVIEW_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

/**
* @class WeatherView WeatherView.hpp "WeatherView.hpp"
* @brief Outputs the data recieved from the controller.
*/
class WeatherView {
 public:
  /**
  *  @brief Default constructor function
  *  @details Creates a WeatherModel object to store weather data.
  */
  WeatherView();

  /**
  *  @brief Destructor
  *  @details Deletes the view
  */
  ~WeatherView();

  /**
  *  @brief displays data.
  *  @param [in] v the temperature passed from the controller
  *  @details Displays the temperature in a basic format.
  */
  virtual void displayTemperature(float v);

  /**
  *  @brief displays data.
  *  @param [in] v the pressure passed from the controller
  *  @details Displays the pressure in a basic format.
  */
  virtual void displayPressure(float v);

  /**
  *  @brief displays data.
  *  @param [in] v the humidity passed from the controller
  *  @details Displays the humidity in a basic format.
  */
  virtual void displayHumidity(float v);

  /**
  *  @brief displays data.
  *  @param [in] v the windspeed passed from the controller
  *  @details Displays the windspeed in a basic format.
  */
  virtual void displayWindspeed(float v);
};

/**
* @class LabelledView LabelledView.hpp "LabelledView.hpp"
* @brief Outputs the data recieved from the controller. Child of WeatherView.
*/
class LabelledView : public WeatherView {
 public:
  /**
  *  @brief Default constructor function
  *  @details Creates a LabelledView object to store weather data.
  */
  LabelledView();

  /**
  *  @brief Destructor
  *  @details Deletes the view
  */
  ~LabelledView();

  /**
  *  @brief displays data.
  *  @param [in] v the temperature passed from the controller
  *  @details Displays the temperature and labels it.
  */
  void displayTemperature(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the pressure passed from the controller
  *  @details Displays the pressure and labels it.
  */
  void displayPressure(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the humidity passed from the controller
  *  @details Displays the humidity and labels it.
  */
  void displayHumidity(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the windspeed passed from the controller
  *  @details Displays the windspeed and labels it.
  */
  void displayWindspeed(float v) override;
};

/**
* @class DescriptiveView DescriptiveView.hpp "DescriptiveView.hpp"
* @brief Outputs the data recieved from the controller. Child of WeatherView.
*/
class DescriptiveView : public WeatherView {
 public:
  /**
  *  @brief Default constructor function
  *  @details Creates a DescriptiveView object to store weather data.
  */
  DescriptiveView();

  /**
  *  @brief Destructor
  *  @details Deletes the view
  */
  ~DescriptiveView();

  /**
  *  @brief displays data.
  *  @param [in] v the temperature passed from the controller
  *  @details Displays a small description of the temperature.
  */
  void displayTemperature(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the pressure passed from the controller
  *  @details Displays a small description of the pressure.
  */
  void displayPressure(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the humidity passed from the controller
  *  @details Displays a small description of the humidity.
  */
  void displayHumidity(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the windspeed passed from the controller
  *  @details Displays a small description of the windspeed].
  */
  void displayWindspeed(float v) override;
};

/**
* @class ComparitiveView ComparitiveView.hpp "ComparitiveView.hpp"
* @brief Outputs the data recieved from the controller. Child of WeatherView.
*/
class ComparitiveView : public WeatherView {
 public:
  /**
  *  @brief Default constructor function
  *  @details Creates a ComparitiveView object to store weather data.
  */
  ComparitiveView();

  /**
  *  @brief Destructor
  *  @details Deletes the view
  */
  ~ComparitiveView();

  /**
  *  @brief displays data.
  *  @param [in] v the temperature passed from the controller
  *  @details Displays the temperature based on the average (calculated by averaging 10 weather sensors).
  */
  void displayTemperature(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the pressure passed from the controller
  *  @details Displays the pressure based on the average (calculated by averaging 10 weather sensors).
  */
  void displayPressure(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the humidity passed from the controller
  *  @details Displays the humidity based on the average (calculated by averaging 10 weather sensors).
  */
  void displayHumidity(float v) override;

  /**
  *  @brief displays data.
  *  @param [in] v the windspeed passed from the controller
  *  @details Displays the windspeed based on the average (calculated by averaging 10 weather sensors).
  */
  void displayWindspeed(float v) override;
};

#endif

