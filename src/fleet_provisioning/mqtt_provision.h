#pragma once

#include <freertos/event_groups.h>
#include <freertos/FreeRTOS.h>

bool mqtt_provisioning_active();

esp_err_t mqtt_provision_init(EventGroupHandle_t networkEventGroup);
