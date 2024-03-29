# TPM-HSM
Edge TPM and Cloud HSM for Automotive workloads 

Inspired by recent NIST mandates, we propose an architecture combining edge trust zone and AWS cloud HSM for cryptographic key management. This solution has gained traction in the Automotive industry and fills a gap in the connected mobility framework.

Background: federal contractors are mandated with addressing compliance requirements, including DFARS and DoD acquisition standards (NIST 800-171). The lack of managed security at the edge for automotive workloads, specifically utilizing ARM trust zone and Intel SGX, posed challenges for certificate management among OEMs and aftermarket manufacturers. However, given the mandatory requirement for HSMs in line with federal regulations, the need for secure hardware maintenance data for the ARMY became apparent.TEE (Trusted Execution Environment) is available by default on some ARM Cortex processors. The ARM TrustZone technology provides the foundation for TEEs on ARM Cortex processors. TrustZone is a security extension that allows the processor to be divided into two separate security domains: the secure world and the non-secure world. The secure world is isolated from the non-secure world, and it can only be accessed by trusted software.

A TEE, is a secure area of memory on a computing device where sensitive data and code can be executed. The TEE is isolated from the rest of the system, so it cannot be accessed by unauthorized users or processes. This makes the TEE ideal for applications that require high levels of security, such as financial transactions, medical records, and government data.

The TEE is implemented in hardware and software. The hardware provides the physical isolation of the TEE, while the software provides the security mechanisms that protect the TEE from unauthorized access.



Some ARM Cortex processors that support TEE by default include:

Cortex-A72
Cortex-A53
Cortex-A35
Cortex-M33
Cortex-M23


There are two main types of TEEs:

Hardware-based TEEs are implemented in the processor's firmware. This makes them very secure, but it also makes them more difficult to implement and use.
Software-based TEEs are implemented in software running on the operating system. This makes them easier to implement and use, but they are not as secure as hardware-based TEEs.
TEEs are becoming increasingly important as more and more applications require high levels of security. As the demand for security grows, TEEs are likely to become more widespread.

Here are some of the benefits of using a TEE:

Security: The TEE is isolated from the rest of the system, so it cannot be accessed by unauthorized users or processes. This makes the TEE ideal for applications that require high levels of security.
Performance: The TEE can be used to run sensitive computations in a secure environment, without impacting the performance of the rest of the system.
Convenience: The TEE can be used to protect sensitive data and code, without requiring the user to take any special steps.
Here are some of the challenges of using a TEE:

Complexity: The TEE is a complex technology, and it can be difficult to implement and use.
Cost: The TEE can add to the cost of a computing device.
Compatibility: The TEE may not be compatible with all applications.
TEEs are a promising technology that can help to improve the security of computing devices. However, there are some challenges that need to be addressed before TEEs can become more widespread.



Testing on NXP GoldBox:The ARM Cortex on S32G from NXP is a family of automotive processors that combine Arm Cortex-A and Cortex-M cores with hardware security and safety features. The S32G family is designed for a wide range of automotive applications, including:

Infotainment: The S32G family can be used to power infotainment systems, such as touchscreen displays, navigation systems, and audio systems.
ADAS: The S32G family can be used to power ADAS (advanced driver assistance systems), such as lane departure warning, adaptive cruise control, and automatic emergency braking.
Powertrain: The S32G family can be used to power powertrain systems, such as engine control units, transmission control units, and battery management systems.
The S32G family features a number of security and safety features, including:

TrustZone: TrustZone is a security extension that allows the processor to be divided into two separate security domains: the secure world and the non-secure world. The secure world is isolated from the non-secure world, and it can only be accessed by trusted software.
Secure Boot: Secure Boot is a security feature that ensures that only trusted software can be booted on the processor.
ASIL D: The S32G family is compliant with the ASIL D safety standard, which is the highest level of automotive safety standard.
The S32G family is a powerful and versatile platform for a wide range of automotive applications. The combination of Arm Cortex cores, hardware security, and safety features makes the S32G family a good choice for applications that require high levels of security and safety.

Here are some of the specific ARM Cortex cores that are used in the S32G family:

Cortex-A53: The Cortex-A53 is a high-performance, 32-bit Arm Cortex core that is designed for embedded applications.
Cortex-M7: The Cortex-M7 is a high-performance, 32-bit Arm Cortex core that is designed for microcontroller applications.
Cortex-R52: The Cortex-R52 is a high-performance, 32-bit Arm Cortex core that is designed for real-time applications.

The S32G family also includes a number of other features, such as:

Low Latency Communication Engine (LLCE): The LLCE is a hardware accelerator that can be used to accelerate automotive networks.
Packet Forwarding Engine (PFE): The PFE is a hardware accelerator that can be used to accelerate Ethernet networks.
Hardware Security Engine (HSE): The HSE is a hardware security module that can be used to protect sensitive data.

## CLoud HSM on AWS

AWS CloudHSM Documentation: https://docs.aws.amazon.com/cloudhsm/latest/userguide/

This documentation provides detailed information on how to use AWS CloudHSM, including:

Creating and managing HSMs
Using HSMs to store and manage cryptographic keys
Integrating HSMs with your applications


## Securing Greengrass with Parsec
ARM Parsec is a software framework that provides a secure execution environment for applications on ARM-based devices. It uses the ARM TrustZone technology to create a secure partition in the device's memory where applications can run in a trusted environment.
AWS Greengrass is a cloud-based platform that allows you to run code and services on edge devices. It provides a secure way to connect your devices to the cloud and to share data and insights.
an idea would be in the sample code we will create a secure application and load the Greengrass application into memory. The Greengrass application will then be started and will run until it finishes. Once the Greengrass application finishes, it will be destroyed and the Parsec library will be shut down.

This is just a basic example of how to use ARM Parsec to secure AWS Greengrass applications. For more information, please see the ARM Parsec and AWS Greengrass documentation.



## Sample Workflow
                                    +--------+
                                    | TPM     |
                                    +--------+
                                        |
                                        |
                                    +--------+
                                    | HSM     |
                                    +--------+
                                        |
                                        |
                                    +--------------+
                                    |Secure Server  |
                                    +--------------+


In this diagram, the TPM (Trusted Platform Module) is a secure cryptoprocessor that is embedded in the server. The HSM (Hardware Security Module) is a separate device that is used to store and manage cryptographic keys. The server uses the TPM and the HSM to protect sensitive data and to perform cryptographic operations.

The TPM provides a number of security features, including:

Secure boot: The TPM can be used to verify the integrity of the boot process, ensuring that the server only boots from trusted software.
Secure storage: The TPM can be used to store cryptographic keys in a secure manner, preventing unauthorized access to the keys.
Secure execution: The TPM can be used to create a secure execution environment for applications, preventing malicious software from accessing the keys.
The HSM provides a number of security features, including:

Strong cryptography: The HSM can be used to perform strong cryptographic operations, such as encryption and decryption.
Physical security: The HSM is a physical device that is designed to be tamper-resistant, preventing unauthorized access to the keys.
Remote management: The HSM can be managed remotely, making it easy to administer the keys.
The combination of the TPM and the HSM provides a high level of security for sensitive data and cryptographic operations.

##Parsec

![image](https://github.com/andyshahbazian/TPM-HSM/assets/16087670/909e0c06-7801-4851-8d22-f1dd485266e3)

Parsec stands for Platform AbstRaction for SECurity, an open-source project that aims to offer a standardized API for hardware security and cryptographic services in a platform-agnostic manner. By implementing this abstraction layer, Parsec ensures that workloads remain independent of specific physical platform details. This approach enables seamless delivery of cloud-native applications within data centers and at the edge, facilitating efficient and flexible deployment.

