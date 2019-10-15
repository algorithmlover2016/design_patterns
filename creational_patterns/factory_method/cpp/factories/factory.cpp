#include "factories/factory.h"
Dialog::~Dialog() {
}

void Dialog::renderButton() {
    Button* okButton = createButton();
    okButton->render();
}

Button* HtmlDialog::createButton() {
    return new HtmlButton();
}

Button* WindowsDialog::createButton() {
    return new WindowsButton();
}
