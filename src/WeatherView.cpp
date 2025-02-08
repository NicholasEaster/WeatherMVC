/**
* @author Nicholas Easter [nicholas.easter@uleth.ca]
* @date 9/22/2024
*/
#include <iostream>
#include <string>
#include <vector>

#include "include/WeatherSensor.hpp"
#include "include/WeatherController.hpp"

//BASIC
WeatherView::WeatherView() {
}

WeatherView::~WeatherView() {
}

void WeatherView::displayTemperature(float value) {
    std::cout << "Basic View:" << std::endl;
    std::cout << value << " C | ";
}
void WeatherView::displayPressure(float value) {
    std::cout << value << " hPa | ";
}
void WeatherView::displayHumidity(float value) {
    std::cout << value << "% | ";
}
void WeatherView::displayWindspeed(float value) {
    std::cout << value << " km/hr";
}

//LABELED
LabelledView::LabelledView() {
}

LabelledView::~LabelledView() {
}

void LabelledView::displayTemperature(float value) {
    std::cout << "Labelled View:" << std::endl;
    std::cout << "Temperature: " << value << " C | ";
}

void LabelledView::displayPressure(float value) {
    std::cout << "Pressure:" << value << " hPa | ";
}

void LabelledView::displayHumidity(float value) {
    std::cout << "Humidity:" << value << "% | ";
}

void LabelledView::displayWindspeed(float value) {
    std::cout << "Windspeed:" << value << " km/hr";
}

//DESCRIPTIVE
DescriptiveView::DescriptiveView() {
}

DescriptiveView::~DescriptiveView() {
}

void DescriptiveView::displayTemperature(float value) {
    int hotVal = 25, warmVal = 10, coldVal = -5;

    std::cout << "Descriptive View:" << std::endl;
    if (value >= hotVal) {
        std::cout << "Hot | ";
    } else if (value >= warmVal) {
        std::cout << "Warm | ";
    } else if (value >= coldVal) {
        std::cout << "Cold | ";
    } else {
        std::cout << "Freezing | ";
    }
}

void DescriptiveView::displayPressure(float value) {
    int highVal = 1020, normalVal = 1014;

    if (value >= highVal) {
        std::cout << "High Pressure | ";
    } else if (value >= normalVal) {
        std::cout << "Normal Pressure | ";
    } else {
        std::cout << "Low Pressure | ";
    }
}

void DescriptiveView::displayHumidity(float value) {
    int highVal = 0.70, normalVal = 0.35;

    if (value >= highVal) {
        std::cout << "High Humidity | ";
    } else if (value >= normalVal) {
        std::cout << "Normal Humidity | ";
    } else {
        std::cout << "Low Humidity | ";
    }
}

void DescriptiveView::displayWindspeed(float value) {
    int highVal = 70, normalVal = 50;

    if (value >= highVal) {
        std::cout << "High Windspeed";
    } else if (value >= normalVal) {
        std::cout << "Normal Windspeed";
    } else {
        std::cout << "Low Windspeed";
    }
}

//COMPARITIVE
ComparitiveView::ComparitiveView() {
}

ComparitiveView::~ComparitiveView() {
}

void ComparitiveView::displayTemperature(float value) {
    int average = -2.6;

    std::cout << "Average View:" << std::endl;
    if (value > average) {
        std::cout << "Above average | ";
    } else {
        std::cout << "Below average | ";
    }
}

void ComparitiveView::displayPressure(float value) {
    int average = 1014.3;

    if (value > average) {
        std::cout << "Above average | ";
    } else {
        std::cout << "Below average | ";
    }
}

void ComparitiveView::displayHumidity(float value) {
    int average = 0.313;

    if (value > average) {
        std::cout << "Above average | ";
    } else {
        std::cout << "Below average | ";
    }
}

void ComparitiveView::displayWindspeed(float value) {
    int average = 67.6;

    if (value > average) {
        std::cout << "Above average";
    } else {
        std::cout << "Below average";
    }
}
