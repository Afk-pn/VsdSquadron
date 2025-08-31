# Edge AI on RISC-V 🚀

This project demonstrates **Edge AI inference on the RISC-V architecture** using the VSDSquadron platform.  
It integrates a quantized neural network with RISC-V baremetal code to showcase the future of **TinyML on open hardware**.  

---

## 📌 Overview

- **Goal**: Run AI models efficiently on resource-constrained RISC-V devices.  
- **Platform**: VSDSquadron (SiFive-based RISC-V board).  
- **Model**: Quantized MNIST digit classifier (8-bit).  
- **Pipeline**: Train → Quantize → Deploy → Simulate on RISC-V.  

Why this matters:  
- Combines **Embedded Systems + AI**, two of the hottest areas in research.  
- Aligns with **SiFive’s mission** of advancing RISC-V adoption.  

---


## 📂 Repository Structure

EdgeAI-RISC-V/
├── docs/ # Documentation, diagrams
│ └── architecture_diagram.png
├── c_codes_for_Sifive/ # Source code (C/Assembly)
├── models/ # ML models (quantized)
│ └── mnist_quant.tflite
├── notebooks/ # Training & quantization
├── outputs/ # Logs, plots, results
├── Makefile # Build automation
├── requirements.txt # Python dependencies
├── LICENSE # MIT License
└── README.md # Project documentation

⚡ Features

Implementation of machine learning algorithms for classification

Training & exporting models to RISC-V environment

Data preprocessing & scaling (normalization for inference)

Deployment-ready C codes for RISC-V based SoC

Step-by-step workshop exercises

🛠️ Technologies Used

Python (PyTorch, NumPy, scikit-learn)

C for RISC-V (Baremetal programming)

Freedom Metal libraries

VSDSquadronPRO environment

🚀 Getting Started:
Clone the repo: git clone https://github.com/Afk-pn/VsdSquadron.git
cd VsdSquadron

Running on RISC-V

Flash compiled C code into RISC-V SoC

Use freedom-studio for simulation

Test inference on edge hardware

Author

Ranishree T
🎓 B.Tech ECE @ NITK Surathkal
💡 Exploring RISC-V + AI + VLSI
