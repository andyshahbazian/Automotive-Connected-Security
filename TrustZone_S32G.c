#include <arm_trustzone.h>
#include <arm_parsec.h>

int main() {

  // Initialize the TrustZone and Parsec libraries.
  arm_trustzone_init();
  arm_parsec_init();

  // Create a secure application.
  arm_parsec_app_t app = arm_parsec_app_create();

  // Load the secure application into memory.
  arm_parsec_app_load(app, "/path/to/secure/application");

  // Start the secure application.
  arm_parsec_app_start(app);

  // Wait for the secure application to finish.
  arm_parsec_app_wait(app);

  // Destroy the secure application.
  arm_parsec_app_destroy(app);

  // Shutdown the TrustZone and Parsec libraries.
  arm_trustzone_shutdown();
  arm_parsec_shutdown();

  return 0;
}
