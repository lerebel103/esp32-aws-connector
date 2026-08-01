#pragma once

#include <freertos/event_groups.h>
#include <freertos/FreeRTOS.h>

esp_err_t mqtt_ota_init(EventGroupHandle_t networkEventGroup);
