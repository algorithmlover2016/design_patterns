#include "head.h"
#include "buttons/button.h"
#include "factories/factory.h"

class Demo {
private:
    Dialog* dialog; 
    void configure(bool window = false) {
        if (window) {
            dialog = new WindowsDialog();
        } else {
            dialog = new HtmlDialog();
        }
    }

public:
    Demo(bool window) {
        dialog = nullptr;
        configure(window);
    }
    void runBusinessLogic() {
        dialog->renderButton();
    }
    ~Demo() {
        if (dialog) {
            delete dialog;
            dialog = nullptr;
        }
    }
};

int main() {
    Demo* dialogWindow = new Demo(true);
    dialogWindow->runBusinessLogic();

    Demo* dialogHtml = new Demo(false);
    dialogHtml->runBusinessLogic();
    return 0;
}
