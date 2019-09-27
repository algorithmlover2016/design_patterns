#include "head.h"
#include "buttons/button.h"
#include "checkboxes/checkbox.h"
#include "app/application.h"

class Demo {
public:
    void configureApplication(std::string const & OSName) {
        if ( "macos" == OSName) {
            guiFactory = new MacOSFactory();
        } else if ( "windows" == OSName) {
            guiFactory = new WindowsFactory();
        } else if ( "linux" == OSName) {
            guiFactory = new LinuxFactory();
        } else {
            guiFactory = nullptr;
        }
        app = new Application(guiFactory);
    }

    void run() {
        app->paint();
    }

    ~Demo() {
        if (!guiFactory) {
            delete guiFactory;
        }
        if (!app) {
            delete app;
        }
    }

private:
    GUIFactory * guiFactory = nullptr;
    Application * app = nullptr;
};

int main() {
    Demo demo;
    demo.configureApplication("macos");
    demo.run();

    demo.configureApplication("windows");
    demo.run();
    demo.configureApplication("linux");
    demo.run();

    demo.configureApplication("ubunton");
    demo.run();
    return 0;
}
