#include "checkboxes/checkbox.h"

CheckBox::~CheckBox() {
}

void MacOSCheckbox::paint() {
    std::cout << "You have created MacOSCheckbox." << std::endl;
}

void WindowsCheckbox::paint() {
    std::cout << "You have created WindowsCheckbox." << std::endl;
}
