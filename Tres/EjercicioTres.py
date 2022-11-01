def descuento(Numcreditos , porcentaje):
  creditoT = credito*Numcreditos
  Descuento1 = (creditoT*porcentaje)/100
  PrecioFinal = creditoT-Descuento1
  return PrecioFinal

programa = int(input("\n 1. Pregrado \n 2. Posgrado \n"))

promedio = float(input("Cuál es tu promedio(decimales)"))

if programa ==1:
  credito= 50000
  if promedio >= 4.5:
    print("El precio de la carrera con el 25% de descuento:", descuento(28,25))
    if promedio < 4.5 and promedio >= 4.0:
      print("El precio de la carrera con el 10% de descuento:", descuento(25,10))
      if promedio < 4.0 and promedio >= 3.5:
        print("El precio de la carrera es de:", creditoT = credito*20)
        if promedio < 3.5 and promedio >= 2.5:
          print("El precio de la carrera es de:", creditoT = credito*15)   
  else:
    input("No puede matricularse, pailaaaaa")
elif programa ==2:
  credito = 300000
  if promedio >= 4.5:
    print('el precio de la carrera con el 25% de descuento: ',descuento(20,20))
  else:
    print('el precio de la carrera es de: $',creditoT = credito*10)
else:
  print("Error a elegir programa")

    
   
  
    
      