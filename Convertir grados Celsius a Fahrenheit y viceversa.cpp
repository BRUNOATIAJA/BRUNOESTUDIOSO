python
Copiar código
opcion = input("¿Deseas convertir a (C)elsius o (F)ahrenheit? ").lower()
temp = float(input("Introduce la temperatura: "))

if opcion == 'c':
    resultado = (temp - 32) * 5 / 9
    print(f"{temp}°F son {resultado:.2f}°C")
elif opcion == 'f':
    resultado = (temp * 9 / 5) + 32
    print(f"{temp}°C son {resultado:.2f}°F")
else:
    print("Opción no válida.")
