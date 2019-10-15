Intent:
    Define an interface for creating an object, but let subclasses decide which class to instantiate.
    Factory Method lets a class defer instantiation to subclasses.

Participants:
    • Product (Document)
        o defines the interface of objects the factory method creates.
    • ConcreteProduct (MyDocument)
        o implements the Product interface.
    • Creator (Application)
        o declares the factory method, which returns an object of type Product.
          Creator may also define a default implementation of the factory method
          that returns a default ConcreteProduct object.
        o may call the factory method to create a Product object.
    • ConcreteCreator (MyApplication)
        o overrides the factory method to return an instance of a ConcreteProduct.
