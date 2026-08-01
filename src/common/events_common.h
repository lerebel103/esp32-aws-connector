#pragma once

#include "esp_event_base.h"

/* Network event group bit definitions */
#define WIFI_PROVISIONED_BIT (1 << 0)
#define WIFI_CONNECTED_BIT (1 << 1)
#define SNTP_TIME_SYNCED_BIT (1 << 3)
#define MAX_ESP32_AWS_CONNECTOR_EVENTS_BIT SNTP_TIME_SYNCED_BIT
