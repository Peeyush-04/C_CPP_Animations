# C\_CPP\_Animations

## Overview

C\_CPP\_Animations is a collection of command-line animations and interactive projects written in C/C++. The repository includes animations such as:

- **Loading with Percentage:** A progress bar that updates with percentage values.
- **Rotating Loading Symbol:** An animation using a rotating symbol for a 360° effect.
- **Spinning 3D Cube:** A text-based 3D cube with special characters on each side.

## Folder Structure

Below is a simple view of how the project is organized:

```
C_CPP_Animations/
├── README.md             # Project overview and instructions
├── LICENSE               # MIT License
├── docs/                 # Extra documentation (design notes, etc.)
│   └── design.md
├── src/                  # All source code
│   ├── core/             # Shared code (common functions)
│   │   ├── animation.h
│   │   └── animation.c
│   ├── loading_percentage/   # Loading with Percentage project
│   │   ├── loading.c
│   │   └── Makefile
│   ├── rotating_symbol/      # Rotating Loading Symbol project
│   │   ├── rotating.c
│   │   └── Makefile
│   ├── spinning_cube/        # Spinning 3D Cube project
│   │   ├── cube.c
│   │   └── Makefile
│   ├── interactive_dashboard/ # Interactive Dashboard project
│   │   ├── dashboard.c
│   │   └── Makefile
│   ├── animated_clock/       # Animated Clock project
│   │   ├── clock.c
│   │   └── Makefile
│   ├── ascii_particle_system/ # ASCII Particle System project
│   │   ├── particles.c
│   │   └── Makefile
├── include/             # Shared header files
│   └── common.h
├── bin/                 # Compiled executables
├── tests/               # Test files and examples
│   ├── test_animation.c
│   └── Makefile
```

## Getting Started

### Prerequisites

- A C/C++ compiler (e.g., GCC or Clang)
- A terminal that supports ANSI escape codes
- (Optional for GUI upgrades) Libraries such as SDL2, SFML, or ncurses

### Installation

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/Peeyush-04/C_CPP_Animations.git
   cd C_CPP_Animations
   ```

2. **Compile a Project:**
   For example, to compile the "Loading with Percentage" animation:

   ```bash
   cd src/loading_percentage
   make
   ```

3. **Run the Animation:**

   ```bash
   ./bin/loading  # Adjust the executable name if needed
   ```

## provi

Contributions are welcome! To contribute:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/YourFeature
   ```
3. Commit your changes with clear messages.
4. Push the branch:
   ```bash
   git push origin feature/YourFeature
   ```
5. Open a pull request with a description of your changes.

## License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.
