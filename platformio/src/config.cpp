/* Configuration options for esp32-weather-epd.
 * Copyright (C) 2022-2025  Luke Marzen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <Arduino.h>
#include "config.h"

// PINS
const uint8_t PIN_BAT_ADC  = A2;
const uint8_t PIN_EPD_BUSY = 14;
const uint8_t PIN_EPD_CS   = 13;
const uint8_t PIN_EPD_RST  = 21;
const uint8_t PIN_EPD_DC   = 22;
const uint8_t PIN_EPD_SCK  = 18;
const uint8_t PIN_EPD_MISO = 19;
const uint8_t PIN_EPD_MOSI = 23;
const uint8_t PIN_EPD_PWR  = 26;
const uint8_t PIN_BME_SDA = 17;
const uint8_t PIN_BME_SCL = 16;
const uint8_t PIN_BME_PWR =  4;
const uint8_t BME_ADDRESS = 0x76;

// WIFI
const char *WIFI_SSID     = "zzzZZ";
const char *WIFI_PASSWORD = "Zj65213728";
const unsigned long WIFI_TIMEOUT = 10000;

// HTTP
const unsigned HTTP_CLIENT_TCP_TIMEOUT = 10000;

// OPENWEATHERMAP API
const String OWM_APIKEY   = "0d73019f1c6e92fea4044eea7bdf1d45";
const String OWM_ENDPOINT = "api.openweathermap.org";
const String OWM_ONECALL_VERSION = "2.5";

// LOCATION
const String LAT = "31.2304";
const String LON = "121.4737";
const String CITY_STRING = "Shanghai";

// TIME
const char *TIMEZONE = "CST-8";
const char *TIME_FORMAT = "%H:%M";
const char *HOUR_FORMAT = "%H";
const char *DATE_FORMAT = "%a, %B %e";
const char *REFRESH_TIME_FORMAT = "%x %H:%M";
const char *NTP_SERVER_1 = "pool.ntp.org";
const char *NTP_SERVER_2 = "time.nist.gov";
const unsigned long NTP_TIMEOUT = 20000;
const int SLEEP_DURATION = 30;
const int BED_TIME  = 00;
const int WAKE_TIME = 06;

// HOURLY OUTLOOK GRAPH
const int HOURLY_GRAPH_MAX = 24;

// BATTERY
const uint32_t WARN_BATTERY_VOLTAGE     = 3535;
const uint32_t LOW_BATTERY_VOLTAGE      = 3462;
const uint32_t VERY_LOW_BATTERY_VOLTAGE = 3442;
const uint32_t CRIT_LOW_BATTERY_VOLTAGE = 3404;
const unsigned long LOW_BATTERY_SLEEP_INTERVAL      = 30;
const unsigned long VERY_LOW_BATTERY_SLEEP_INTERVAL = 120;
const uint32_t MAX_BATTERY_VOLTAGE = 4200;
const uint32_t MIN_BATTERY_VOLTAGE = 3000;
