

# E-Paper Business Card?

I wanted  to mess around with an e-paper display and build upon my PCB design skills. Also, because all the design work I have done during my 8+ year software career is all within private repositories, I thought it would be beneficial to show that I can actually do stuff 😂

My idea was to create a type of business card with an e-paper display, where I can program an "image" onto it. I also want to (in later revisions once the prototype is working) add a button on the back that can toggle to different images. Also have thought about adding one or two sensors (depending on space) such as a gyro and/or comms module. I plan on interfacing this with an STM32L4 MCU (have a Nucleo L433RC). Code for that has been started in this repo.

Anyway, I can think about all this later. Right now the task at hand is to construct the prototype once the parts arrive and do my initial tests.

## PCB
Be gentle, this is my first PCB I've designed by myself from scratch 🥹
### Track layout
![28P-FPC-SPI-Debug-PCB-2D](https://github.com/user-attachments/assets/4eb482e3-a8e3-46e0-a678-4b44994d6e51)

### Front + Back 3D
![28P-FPC-SPI-Debug-PCB-FrBa](https://github.com/user-attachments/assets/217df6b0-ca7a-4ac2-b460-8e91971b95b4)

## BOM
| Reference        | Qty | Value            | Manufacturer Part No.         |
|------------------|-----|------------------|--------------------------------|
| C1, C2, C4, C5, C7, C9, C10 | 7   | 1u/50V           | MBASU168AB5105KTNA01           |
| C3, C13          | 2   | 0.1u/50V         | MAJCU168BB7104KTEA01           |
| C6, C8, C14      | 3   | 1u/25V           | MAJCT168BB7105KTEA01           |
| C11, C12         | 2   | CL21A475KBQNNNE  | CL21A475KBQNNNE                |
| D1, D2, D3       | 3   | MBR0530          | MBR0540T1G                     |
| J1               | 1   | Conn_01x08       | TSW-103-07-T-D                 |
| J2               | 1   | Conn_01x24       | MTSW-112-07-F-D-195            |
| J3               | 1   | SFV24R-1STBE1HLF | SFV24R-1STBE1HLF               |
| L1               | 1   | L_Iron           | LPS4018-104MRC                 |
| Q1               | 1   | Si1308EDL        | SI1308EDL-T1-BE3               |
| Q2               | 1   | AO3401A          | SSM3J340R,LF                   |
| Q3               | 1   | S8050            | SS8050DBU                      |
| R1               | 1   | 10k              | CRCW060310K0FKEI               |
| R2               | 1   | 3R               | CRCW06033R00FKEAC              |
| R3               | 1   | 1k               | CRCW06031K00FKED               |
| R6               | 1   | 1K               | CRCW06031K00FKED               |
| R7               | 1   | 10K              | CRCW060310K0FKEI               |
| R8, R9, R10      | 3   | 47K              | CRCW060347K0FKED               |
| R11              | 1   | 100K             | CRCW0603100KFKEE               |
| U1               | 1   | RT9193-33GB      | RT9193-33GB                    |
| U2               | 1   | TXB0108PW        | TXB0108PWR                     |

