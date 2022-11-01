nombre = str(input("Ingrese nombre de cliente: "))
escritorio = int(input("Ingrese cantidad de escritorios comprados: "))
escritorios = 800000
if escritorio<5:
	print(nombre," su compra es por valor de ",escritorio*escritorios," y su descuento fue ",(escritorios*escritorio)*0.1)
	else:
		if escritorio>=5 and escritorio<10:
			print(nombre," su compra es por valor de ",escritorio*escritorios," y su descuento fue ",(escritorios*escritorio)*0.2)
		else:
			if escritorio>=10:
				print(nombre," su compra es por valor de ",escritorio*escritorios," su descuento fue ",(escritorios*escritorio)*0.4)
			else:
				print("pailaaaa")
