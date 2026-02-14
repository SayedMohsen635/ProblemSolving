import numpy as np
import matplotlib.pyplot as plt

months = [
    "January", "February", "March", "April", "May", "June", 
    "July", "August", "September", "October", "November", "December"
]
load_mw = [8, 6, 4, 2, 6, 12, 16, 14, 10, 4, 6, 8]

average_load = sum(load_mw) / len(load_mw)

peak_load = max(load_mw)
load_factor = average_load / peak_load

month_indices = np.arange(1, 13)

plt.figure(figsize=(10, 5))
plt.step(month_indices, load_mw, where='mid', label="Monthly Load (MW)", color='blue')

plt.xticks(month_indices, months, rotation=45)
plt.xlabel("Month")
plt.ylabel("Load (MW)")
plt.title("Annual Load Curve")
plt.grid(True)
plt.legend()

print(f"Average Load: {average_load:.2f} MW")
print(f"Annual Load Factor: {load_factor:.2f}")

plt.show()