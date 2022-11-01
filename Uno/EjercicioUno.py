nombre = str(input("Ingrese su nombre: "))
salario = int(input("Ingrese salario por hora: "))
horas = int(input("Ingrese cantidad de horas: "))
trabajo = int(salario*horas)

if trabajo >= 450000:
  print("Su nombre es ", nombre , "su salario es: ", trabajo)
else:
  print("su nombre es: " , nombre )