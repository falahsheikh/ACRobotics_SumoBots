# ACRobotics_SumoBots

## Overview

The ACRobotics_SumoBots project is a program designed for controlling two motors on a SumoBot using an Arduino board. The code includes functionality for testing motor speeds and direction, suitable for SumoBot applications.

## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
  - [Pin Configuration](#pin-configuration)
  - [Running the Program](#running-the-program)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites

- Arduino board
- Motor driver (compatible with PWM for speed control)
- Two DC motors
- Arduino IDE installed on your computer

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/your-username/ACRobotics_SumoBots.git
   ```

2. Open the Arduino IDE and load the `ACRobotics_SumoBots.ino` file from the cloned repository.

3. Connect your Arduino board and upload the code to the board.

## Usage

### Pin Configuration

- **Motor Pins:**
  - Motor 1:
    - Positive: `M1p`
    - Negative: `M1n`
  - Motor 2:
    - Positive: `M2p`
    - Negative: `M2n`

- **Speed Control Pins:**
  - Motor 1: `SM1`
  - Motor 2: `SM2`

- **Sensor Pin:**
  - Sensor 1: `sensor1`

### Running the Program

1. Connect the motors and motor driver according to the pin configuration.

2. Power up the Arduino board.

3. Open the Arduino IDE Serial Monitor to view output messages.

4. Upload the code to the Arduino board.

5. Observe the behavior of the motors at different speeds.

## Contributing

Contributions are welcome! Please follow the [contribution guidelines](CONTRIBUTING.md).

## License

This project is licensed under the [MIT License](LICENSE).
