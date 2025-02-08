#include <iostream>
#include <string>
#include <vector>

#include "include/WeatherSensor.hpp"
#include "include/WeatherController.hpp"
#include "include/WeatherModel.hpp"
#include "include/WeatherView.hpp"

int main(int argc, char const *argv[]) {
  WeatherSensor* sensor_obj = new WeatherSensor();

  WeatherModel* model_obj = new WeatherModel();
  WeatherView* basicView_obj = new WeatherView();
  WeatherController basicController(model_obj, basicView_obj);

  basicController.ExtractData(sensor_obj);
  std::cout << std::endl;
  basicController.Display();

  LabelledView* labelledView_obj = new LabelledView();
  WeatherController labeledController(model_obj, labelledView_obj);
  std::cout << std::endl;
  labeledController.Display();

  DescriptiveView* DescriptiveView_obj = new DescriptiveView();
  WeatherController DescriptiveController(model_obj, DescriptiveView_obj);
  std::cout << std::endl;
  DescriptiveController.Display();

  ComparitiveView* comparitiveView_obj = new ComparitiveView();
  WeatherController ComparitiveController(model_obj, comparitiveView_obj);
  std::cout << std::endl;
  ComparitiveController.Display();

  delete sensor_obj;
  delete model_obj;
  delete basicView_obj;
  delete labelledView_obj;
  delete DescriptiveView_obj;
  delete comparitiveView_obj;
}
