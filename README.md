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

