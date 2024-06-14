import numpy as np
from scipy.stats import pearsonr

# Exemplo de conjuntos de dados
x = [2, 2.5, 2.9, 3.3, 4.1, 4.3, 7.0, 13.0]
y = [17.5, 18.5, 19.5, 22.2, 26.5, 16.6, 36.6, 38.4]

# Cálculo da correlação de Pearson
correlation, p_value = pearsonr(x, y)

print(f"Correlação de Pearson: {correlation}")
print(f"Valor p: {p_value}")

# Cálculo do desvio padrão
desvio_padrao_x = np.std(x)
desvio_padrao_y = np.std(y);
print(f"Desvio padrão x: {desvio_padrao_x}. Desvio padrão y: {desvio_padrao_y}")