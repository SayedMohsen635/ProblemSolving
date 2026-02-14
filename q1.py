import numpy as np
import matplotlib.pyplot as plt

# Time Range
t = np.linspace(0, 0.1, 1000)

# Voltage Waveform
V = 220 * np.cos(2 * np.pi * 50 * t)

# Ohm's Law
R = 2
I = V / R

# Plot Waveforms
plt.figure(figsize=(8, 5))
plt.plot(t, V, label="Voltage (V)", color="blue")
plt.plot(t, I, label="Current (A)", color="red")

# Labels and title
plt.xlabel("Time (s)")
plt.ylabel("Amplitude")
plt.title("Voltage and Current Signals (Load = 2Ω)")
plt.legend()
plt.grid(True)

# Show the plot
plt.show()