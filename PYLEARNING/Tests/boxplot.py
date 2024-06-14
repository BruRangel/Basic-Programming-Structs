import matplotlib.pyplot as plt

# Dados fornecidos
data_limpo = [0.95, 1.00, 0.92, 0.93, 0.83, 0.90, 0.92, 0.98, 0.93, 0.92, 0.88, 0.95, 1.13, 0.93, 0.95, 0.93, 0.95, 1.00, 1.12, 0.92, 1.08, 1.00, 0.95, 0.93, 0.95, 0.90, 0.92, 0.95, 0.93, 0.93, 0.97, 0.83, 0.92, 0.92, 1.00, 0.97]
data_garoa = [1.00, 0.98]
data_chuva = [1.03, 0.92]
data_chuva_forte = [1.08]

# Criar os boxplotsw
data = [data_limpo, data_garoa, data_chuva, data_chuva_forte]
labels = ['Limpo', 'Garoa', 'Chuva', 'Chuva Forte']

plt.boxplot(data, patch_artist=True, labels=labels)
plt.title('Boxplots Tempo de Deslocamento por Clima')
plt.xlabel('Condição climática')
plt.ylabel('Valores (horas)')

# Mostrar o gráfico
plt.show()