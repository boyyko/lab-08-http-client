#include <http_client.hpp>

int main() {
  for (;;) {
    client first;
    first.create_req();
    first.start();
  }
  return 0;
}