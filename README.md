# Servo Sweep - Arduino Uno R4 WiFi

Simple project that sweeps a hobby servo from 0° to 180° and back using the Arduino `Servo` library.

Files
- `src/main.cpp` — Arduino sketch that performs the servo sweep and opens Serial at 9600.
- `platformio.ini` — PlatformIO project configuration (example provided; update `board` to the Uno R4 WiFi board ID if available).

Hardware
- Arduino Uno R4 WiFi
- Standard hobby servo (e.g., SG90, MG90S, etc.)
- Jumper wires
- Optional external 5V power supply for the servo (recommended for heavier servos)

Wiring
- `Signal` pin of servo -> Digital pin D6 (matches `servoPin` in `src/main.cpp`)
- `VCC` of servo -> 5V (or external 5V supply)
- `GND` of servo -> GND (make sure Arduino GND and servo supply GND are common)

Important power note
- If the servo draws significant current, do **not** power it from the Arduino 5V pin. Use a suitable external 5V supply and connect grounds together.

Example `platformio.ini`
    [env:uno]
    platform = atmelavr
    board = uno
    framework = arduino
    monitor_speed = 9600

Replace `board = uno` with the appropriate PlatformIO board ID for `Arduino Uno R4 WiFi` if/when available (check PlatformIO boards list or use Arduino CLI if PlatformIO doesn't yet support the board).

Build and upload (PlatformIO)
- Build: `pio run`
- Upload: `pio run --target upload`
- Monitor serial: `pio device monitor --baud 9600` or `pio device monitor` (uses `monitor_speed` value)

What `src/main.cpp` does (summary)
- Attaches a `Servo` object to pin D6
- Starts Serial at 9600
- Continuously sweeps servo from 0° to 180° and back with a 15 ms delay between steps

Troubleshooting
- Servo jitter: ensure proper power and common ground.
- Upload problems: confirm correct `board` in `platformio.ini` and correct USB port.
- If `platformio.ini` lacks a board for Uno R4 WiFi, use the Arduino IDE/CLI or update PlatformIO to a version that supports the board.

License
- Use, modify, and distribute as needed. No warranty.
