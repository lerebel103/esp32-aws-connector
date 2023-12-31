# AWS connector component

Provides a re-usable and hopefully friendly `ESP-IDF` component for WiFi onboarding, SNTP sync, 
MQTT connectivity, Fleet Provisioning, Certificate rotation, Over the Air Updates and a Named Shadow handler. This is 
essentially boilerplate code that can be re-used across builds.

To use this, component your code might look something like:
```c
extern "C" void app_main() {

  ESP_ERROR_CHECK(esp_event_loop_create_default());

  xNetworkEventGroup = xEventGroupCreate();

  aws_connector_init(xNetworkEventGroup);

  // ... 
  // Continue with your business logic as you normally would.
  // WiFi connectivity, certificate handling etc will be handled for you.
  
}
```

Per AWS Fleet Provioning, there are specific requirements to create provisioning templates, root certificates, policies
and preload the required info onto NVS to use this component. Documentation coming soon...

To see this code action, checkout https://github.com/lerebel103/hottop-sidecar-firmware.

WIP, apologies for the brevity, only working on this in my spare time.
