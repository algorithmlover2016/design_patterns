#include "checkboxes/checkbox.h"

CheckBox::~CheckBox() {
}

void MacOSCheckBox::paint() {
    std::cout << "You have created MacOSCheckbox." << std::endl;
}

void WindowsCheckBox::paint() {
    std::cout << "You have created WindowsCheckbox." << std::endl;
}

void LinuxCheckBox::paint() {
    std::cout << "You have created LinuxCheckbox." << std::endl;
}
