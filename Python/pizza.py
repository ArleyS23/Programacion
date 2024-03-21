class PizzaBuilder:
    def __init__(self):
        self.pizza = Pizza()

    def set_masa(self, masa):
        self.pizza.masa = masa

    def set_salsa(self, salsa):
        self.pizza.salsa = salsa

    def add_ingrediente(self, ingrediente):
        self.pizza.ingredientes.append(ingrediente)

    def get_pizza(self):
        return self.pizza


class Pizza:
    def __init__(self):
        self.masa = None
        self.salsa = None
        self.ingredientes = []


class Director:
    def __init__(self, builder):
        self.builder = builder

    def construir_pizza(self):
        self.builder.set_masa("Delgada")
        self.builder.set_salsa("Tomate")
        self.builder.add_ingrediente("Queso")
        self.builder.add_ingrediente("Pepperoni")

    def get_pizza(self):
        return self.builder.get_pizza()


director = Director(PizzaBuilder())

director.construir_pizza()

pizza = director.get_pizza()

print(f"Masa: {pizza.masa}")
print(f"Salsa: {pizza.salsa}")
print(f"Ingredientes: {pizza.ingredientes}")