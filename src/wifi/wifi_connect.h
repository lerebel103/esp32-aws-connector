#pragma once

#include <freertos/FreeRTOS.h>
#include <freertos/event_groups.h>
#include <qrcode.h>

struct wifi_metrics_t {
  uint32_t connect_attempt_count;
  uint32_t connected_count;
  uint32_t disconnected_count;
  uint32_t connect_duration_ms;
  int8_t rssi;
  uint8_t channel;
  char ssid[33];
  char ap_bssid[33];
  char ip_addr[16];
  char gw_addr[16];
  char nm_addr[16];
};


void wifi_connect_init(EventGroupHandle_t networkEventGroup);

wifi_metrics_t wifi_connect_get_metrics();

/**
 * Returns a QR code handle that can be used to display a QR code for provisioning
 * @return nullptr if no provisioning is currently underway, or the corresponding QR code during provisioning
 */
esp_qrcode_handle_t wifi_get_prov_qr();

int wifi_get_prov_qr_len();