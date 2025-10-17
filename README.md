

# E-Paper Business Card?

My idea is to create a type of business card with an e-paper display, where I can program some image/text content onto it. I also want to (in later revisions once the prototype is working) add a button on the back that can toggle to different images. Also have thought about adding one or two sensors (depending on space) such as a gyro and/or comms module. I plan on interfacing this with an STM32L4 MCU (have a Nucleo L433RC). Code for that has been started in this repo.

## PCB
This is my first PCB I've designed by myself from scratch, so any feedback is encouraged 😊
### Track layout
<img width="600" alt="Screenshot 2025-10-17 184225" src="https://github.com/user-attachments/assets/c3aa5bf8-b152-4d36-8376-995bd73a2b66" />


### Front + Back 3D
<img width="600"  alt="Screenshot 2025-10-17 184106" src="https://github.com/user-attachments/assets/56cd203b-3225-472a-870e-10f6823613e4" />
<img width="600"  alt="Screenshot 2025-10-17 184045" src="https://github.com/user-attachments/assets/8da1365f-8452-4a19-a581-11842ce05dda" />

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
|----------------------------------------------------------------------------|

# Prototyped Boards
I recently had my custom PCB prototyped through [PCBWay](https://www.pcbway.com/), and I am very impressed with the overall quality and service. From the start, their customer support was excellent—clear, responsive, and proactive in keeping me updated on the progress of my order. It was reassuring to receive regular communication at each stage of the process, from file checks through to production and shipping.

The boards themselves came out great. The soldering work is clean, precise, and of consistently high quality. I inspected the joints and pads closely, and everything was well aligned with no visible defects or irregularities. The overall finish of the boards, from the silkscreen to the copper traces, is sharp and professional. It’s clear that PCBWay places strong emphasis on both manufacturing quality and attention to detail.

What stood out most to me was how smooth the experience was. Even as a prototype run, the boards feel production-ready, giving me confidence to move forward with testing and further development. For anyone looking for reliable PCB prototyping with excellent communication and workmanship, I would highly recommend PCBWay. I’ll definitely be returning for future projects.
<img src="https://github.com/user-attachments/assets/f72e629e-b2f1-4941-9721-07ae32b13436" alt="drawing" width="400"/>
<img src="https://github.com/user-attachments/assets/6e93fe24-491a-4dab-bcba-4b5c31152581" alt="drawing" width="400"/>
<img src="https://github.com/user-attachments/assets/770e50d2-74de-4eac-8172-b1574b4fccc0" alt="drawing" width="400"/>
