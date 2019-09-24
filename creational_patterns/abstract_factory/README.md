Intent:
    Provide an interface for creating families of related or dependent objects without specifying their concrete classes.

Participants
    • AbstractFactory (WidgetFactory)
        o declares an interface for operations that create abstract product objects.
    • ConcreteFactory (MotifWidgetFactory, PMWidgetFactory)
        o implements the operations to create concrete product objects.
    • AbstractProduct (Window, ScrollBar)
        o declares an interface for a type of product object.
    • ConcreteProduct (MotifWindow, MotifScrollBar)
        o defines a product object to be created by the corresponding concrete factory.
        o implements the AbstractProduct interface.
    • Client
        o uses only interfaces declared by AbstractFactory and AbstractProduct classes.
