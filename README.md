
# Vegetable Object Detection using ESP32-CAM and Edge Impulse

An embedded AI project that uses the ESP32-CAM and Edge Impulse to perform on-device vegetable object detection. The system is designed to identify three vegetable classes: **Tomato, Potato, and Capsicum** using a compact machine learning model.

The project combines computer vision, TinyML, and embedded systems to demonstrate how object detection can be deployed on a low-cost microcontroller-based camera platform.

## Project Overview

This project implements an edge AI-based vegetable detection system using an ESP32-CAM module and a model developed using Edge Impulse.

Images are collected and labeled in Edge Impulse, where an object detection model is trained and prepared for deployment on an embedded device.

The ESP32-CAM captures images through its onboard camera, and the trained model is used to identify the target vegetables.

### Vegetable Classes

The Edge Impulse dataset contains the following classes:

| Class | Description |
|---|---|
| Tomato | Detects tomatoes |
| Potato | Detects potatoes |
| Capsicum | Detects capsicums |

## Features

- Image acquisition using the ESP32-CAM.
- Custom object detection model developed using Edge Impulse.
- Vegetable detection for tomato, potato, and capsicum.
- Edge AI inference for embedded applications.
- Dataset collection, labeling, training, and model deployment workflow.
- Low-cost hardware suitable for experimentation and prototyping.

## System Architecture

```text
        Vegetable Images
               |
               v
       Image Collection
               |
               v
       Edge Impulse Studio
               |
      Image Labeling and
       Dataset Preparation
               |
               v
        Model Training
               |
               v
       Trained ML Model
               |
               v
        ESP32-CAM Device
               |
               v
       Camera Image Capture
               |
               v
        Model Inference
               |
               v
       Vegetable Detection
```

## Hardware Requirements

| Component | Purpose |
|---|---|
| ESP32-CAM | Image capture and embedded processing |
| ESP32-CAM-MB Programmer | USB programming and serial communication |
| USB cable | Power and programming |
| Computer | Model development, firmware upload, and testing |

The ESP32-CAM-MB programmer is useful for programming compatible ESP32-CAM boards without requiring a separate USB-to-serial adapter.

## Software and Tools

- Arduino IDE – firmware development and uploading.
- Edge Impulse Studio – dataset management, model training, and deployment.
- ESP32 Camera Library – camera interfacing.
- Edge Impulse Arduino Library or exported inference SDK – model integration, depending on the firmware implementation.

## Edge Impulse Project

The machine learning model and dataset are available through the public Edge Impulse project.

**[Open Edge Impulse Studio – Vegetable Classifier](https://studio.edgeimpulse.com/studio/1120942)**

Project details:

| Parameter | Details |
|---|---|
| Project Name | Veg. Classifier Edge Impulse |
| Project Type | Object Detection |
| Dataset Size | 70 images/items |
| Classes | Capsicum, Potato, Tomato |
| Validation Accuracy | 100% (reported by Edge Impulse) |

The reported validation accuracy is based on the validation set in Edge Impulse. It should not be interpreted as a 100% real-world detection rate. A separate test set and on-device evaluation are needed to assess generalization.

## Getting Started

### 1. Clone the Repository

Open a terminal and run:

```bash
git clone https://github.com/devsingh-26/Object_Detection_using_ESP32_CAM_Edge_Impulse.git

cd Object_Detection_using_ESP32_CAM_Edge_Impulse
```

### 2. Open the Edge Impulse Project

Visit the public Edge Impulse project:

https://studio.edgeimpulse.com/studio/1120942

Explore the dataset, impulse design, training configuration, and available model deployment options.

If you want to modify the model, clone the public project into your Edge Impulse account.

### 3. Prepare the ESP32-CAM

1. Connect the ESP32-CAM to a compatible USB programmer.
2. Connect the programmer to your computer using USB.
3. Open Arduino IDE and install the ESP32 board support package if it is not already installed.
4. Select the appropriate ESP32 board and serial port.

Ensure that the board selection and camera pin configuration match your specific ESP32-CAM module.

### 4. Deploy the Machine Learning Model

In Edge Impulse Studio:

1. Open the project and navigate to the deployment section.
2. Select a deployment option compatible with the ESP32 target and available memory.
3. Generate the Arduino library or embedded inference SDK.
4. Import the generated library into the firmware project.

The deployment format should match the inference code used in the repository.

### 5. Upload and Test

1. Open the ESP32-CAM firmware in Arduino IDE.
2. Verify the camera configuration and model integration.
3. Select the appropriate board and port.
4. Compile and upload the firmware.
5. Open the Serial Monitor, if supported by the firmware, to inspect inference results.

Point the camera toward the target vegetables and observe the model's detection output.

The actual output format, such as bounding boxes, class labels, and confidence scores, depends on the firmware implementation.

## Model Evaluation

The public Edge Impulse project currently reports:

| Metric | Reported Value |
|---|---|
| Validation accuracy | 100% |
| Test accuracy | Not reported |
| Dataset size | 70 items |

The public project also displays an on-device performance estimate for the ESP-EYE target. These estimates should not be treated as measured performance on the ESP32-CAM.

Actual latency, RAM usage, flash usage, and detection accuracy depend on the deployed model, quantization, camera resolution, and hardware configuration.

## Applications

- Vegetable identification and sorting prototypes.
- Smart agriculture and produce monitoring.
- Embedded computer vision demonstrations.
- Edge AI and TinyML educational projects.
- Low-cost object detection systems.

## Future Improvements

- Expand the dataset with more images, lighting conditions, and backgrounds.
- Evaluate the model on a separate, unseen test dataset.
- Optimize the model for ESP32-CAM memory and inference constraints.
- Measure real-world inference latency and detection performance.
- Extend the number of detectable vegetable classes.
- Integrate detection output with a display, web interface, or monitoring system.

## Repository

GitHub: [Object Detection using ESP32-CAM and Edge Impulse](https://github.com/devsingh-26/Object_Detection_using_ESP32_CAM_Edge_Impulse)

Edge Impulse: [Veg. Classifier Edge Impulse](https://studio.edgeimpulse.com/studio/1120942)

## Author

**Dev Singh**

B.Tech – Electronics and Communication Engineering

GitHub: [@devsingh-26](https://github.com/devsingh-26)

---

If you find this project useful, consider giving the repository a star!
