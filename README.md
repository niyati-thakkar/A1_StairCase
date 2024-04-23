# Unreal Engine StairBuilder README

## Introduction
Welcome to the Unreal Engine StaircaseActor! This project contains a C++ class and enum to create and manipulate stairs of different types and dimensions within Unreal Engine projects. With StaircaseActor, you can easily generate stairs of varying widths, heights, and lengths, and choose between three types: box, open, and closed.

## Features
- Create stairs of different types: box, open, and closed.
- Customize the width, height, and length of the stairs.
- Easily manipulate stairs properties within Unreal Engine projects.

## Installation
To use the StairBuilder plugin in your Unreal Engine project, follow these steps:

1. Clone the project.
2. Open your Unreal Engine project.

## Usage

### 1. Adding the StaircaseActor Component
In the Unreal Engine Editor, add a new actor or blueprint where you want to create the stairs. Then, add the `StairBuilderComponent` to the actor or blueprint.

### 2. Configuring Stairs Properties
Select the `StairBuilderComponent` in the Details panel to configure the properties of the stairs. You can set the type (box, open, or closed) and specify the dimensions of the stairs (width, height, length).

### 3. Previewing Stairs
In the editor viewport, you will see a preview of the stairs based on the configured properties.

### 4. Runtime Manipulation
You can also manipulate the stairs properties during runtime using Blueprint scripting or C++.

## Stair Types
The `StairType` enum defines three types of stairs: `BOX`, `OPEN`, and `CLOSED`. These types determine the structure of the stairs.

```cpp
enum class StairType {
    BOX STAIRS,    // Box-type stairs with enclosed steps.
    OPEN STAIRS,   // Open-type stairs with no enclosed steps.
    CLOSED STAIRS  // Closed-type stairs with a solid wall enclosing the steps.
};
```

## Example Blueprint Usage
Here's a simple example demonstrating how to use the StairBuilder plugin in a Blueprint:

1. Add a new StaircaseActor Blueprint.
2. Configure the properties of the stairs in the Details panel such as length, width, height, number of stairs, mesh material, etc..

## Contributions
Contributions to the StairBuilder plugin are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request on GitHub.

Thank you for using the Unreal Engine StairBuilder! If you have any questions or need further assistance, don't hesitate to contact us. Happy stair building in Unreal Engine! 🚶‍♂️🚶‍♀️
