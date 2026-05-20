# Edge AI Deployment on RISC-V (SiFive VSDSquadron)

This project explores deployment of lightweight machine learning models on resource-constrained RISC-V embedded hardware using the SiFive VSDSquadron platform.
It integrates a quantized neural network with RISC-V baremetal code to showcase the future of **TinyML on open hardware**. 

---

##  Overview

- **Goal**: Run AI models efficiently on resource-constrained RISC-V devices.  
- **Platform**: VSDSquadron (SiFive-based RISC-V board).  
- **Model**: Quantized MNIST digit classifier (8-bit).  
- **Pipeline**: Train → Quantize → Deploy → Simulate on RISC-V.  

Why this matters:  
- Combines **Embedded Systems + AI**, two of the hottest areas in research.  
- Aligns with **SiFive’s mission** of advancing RISC-V adoption.  

---


## Repository Structure

```text
EdgeAI-RISC-V/
├── MNIST Prediction/              # C inference codes
├── Architecture overview/         # Documentation and architecture diagrams
├── c_codes_for_Sifive/            # Source code for SiFive deployment
├── models/                        # Quantized ML models
├── notebooks/                     # Training and quantization workflows
├── outputs/                       # Logs, plots, and inference results
├── Neural Network Visualization/  # Neural network visualization images
├── Makefile                       # Build automation
├── requirements.txt               # Python dependencies
├── LICENSE                        # MIT License
└── README.md                      # Project documentation
```


##  Technologies used
- **Languages:** Python, C  
- **Frameworks:** PyTorch, NumPy, Matplotlib  
- **Hardware:** RISC-V, VSD Squadron Board  
- **Tools:** Jupyter Notebook, GitHub  

---

## Features

- **Edge AI Inference** – Deploys a trained neural network model directly on the SiFive RISC-V board for real-time inference.

- **Quantized Models** – Supports 4-bit and 8-bit quantized weights for low-memory, high-efficiency deployment.

- **Bare-Metal Implementation** – Runs without an operating system, directly on the hardware for minimal latency.

- **Python Notebook Support** – Easy-to-run Jupyter Notebook for training, evaluation, and exporting models to C.

- **Automated Build & Flash Scripts** – Ready-to-use scripts for building and flashing firmware to the SiFive board.

- **Modular Code Structure** – Clear separation between ML preprocessing, model export, and C code for inference.

- **Simulation & Verification** – Ability to test and validate model outputs before flashing to hardware.

- **Cross-Platform Compatible** – Works on Windows, Linux, and macOS (Python part); hardware part works on SiFive board.

- **Documentation Ready** – Includes step-by-step instructions to run ML notebook and deploy on SiFive.

- **Expandable Framework** – Can integrate other neural network models or datasets with minimal changes.


#  Getting Started:
## Setup Instructions

1. Clone the repository:

```bash
git clone https://github.com/Afk-pn/VsdSquadron.git
cd VsdSquadron
```
2. Running the Machine Learning Notebook (Python)

Make sure Python 3.11+ and Jupyter Notebook are installed.
(Optional) Create a virtual environment:
```bash
python -m venv venv
source venv/bin/activate      # Linux/macOS
venv\Scripts\activate         # Windows
```
3.Install required Python packages:
```bash
pip install -r requirements.txt
```
4.Open and run notebook
```bash
jupyter notebook
```
3. Running the SiFive C Code

-Make sure Freedom Studio IDE is installed.
-Build the project:
```bash
./scripts/build.sh
```
Flash the firmware to the board:
```bash
./scripts/flash.sh
```
Run inference on the board:
```bash
./scripts/run_inference.sh
```
# Notes
-Run the notebook first to generate the trained model before running the C code on the board.
-ML code runs in Jupyter, hardware code runs on SiFive using the build/flash scripts.


Running on RISC-V
Flash compiled C code into RISC-V SoC
Use freedom-studio for simulation
Test inference on edge hardware


## Results
- Successfully tested lightweight ML inference workflows on RISC-V hardware
- Observed reduced memory footprint using quantized models
- Explored real-time inference constraints for Edge AI systems
# Author

Ranishree T
🎓 B.Tech ECE @ NITK Surathkal
💡 Exploring RISC-V + AI + VLSI
