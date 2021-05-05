Chapter2 Introduction to Operation System
2. 1 Definition
- Application view: 프로그램이 실행될 수 있는 최적의 환경을 제공해준다.
- System view: resource(Memory, CPU)를 효율적으로 관리해주는 소프트웨어
- Implementation view: event-driven software
  대기하고 있다가 이벤트가 발생하면, 일을 처리하고 다시 대기상태로 돌아간다.

- Middleware: 양쪽(시스템-응용)을 연결하여, 데이터를 주고받을 수 있도록 중간에서 매개역할을 하는 소프트웨어 / 표준화된 인터페이스 제공, 부하 분산 가능
ex) JVM, Android DB Server
- Firmware: 특정 하드웨어에 장치에 포함된 소프트웨어.

2. 2 Computer Generation
- 1st G(1945-1955): No os, No Programming Language
- 2nd G(1955-1965): Batch Systems(한 번에 하나의 프로그램만 실행)
  : I/O 병목현상으로 CPU가 제대로 활용되지 않음.
  : 운영체제가 있었다. 메모리에 항상 있었으며, 단순히 컨트롤만을 전송했다.
- 3rd G(1965-1980): IC(Intergrated Circuits)칩 등장
  Multiprogrammed Systems
  1. Spool(Simultaneous Peripheral Operation On-Line)
     CPU와 I/O장치가 독립적으로 동작하도록 하여 대기시간을 줄이기 위한 기법
     Spooling: 스풀을 적용하는 것 또는 스풀을 위해 저장공간을 채우는 동작
  2. CPU 사용량 증가   
  3. OS적으로 해결해야할 문제도 증가함: 작업 스케줄링, 메모리 관리
  Time-Sharing Systems: 시간을 조금씩 나눠서 프로그램마다 조금씩 CPU를 쓰게함.
  이를 통해 response time 개선.
- 4th G(1980-): LSI, VLSI, 컴퓨터가 작고 빨라짐, GUI, 무어의 법칙
 
2. 3 Multics(1965, MIT, Bell Labs, GE)
- Multiplexed Information and Computing Service
- 우리가 쓰는 운영체제의 많은 아이디어가 이 곳에서 유래되었다.
- GE - 645(36bit system)
- time-shared, multi processor, Hierarchy file system(file, directory, path name, working directory), Virtual Memory, Shell, Dynamic Linking, Shared Memory, High Level Language(PL/1) 
- Multics Relation Data Store(MRDS): 최초의 상업적 relational DBMS, 초기 SQL과 비슷한 query Language 사용
- Fortran, C, Cobol 등을 제공.
- Spreadsheets


2. 4 Unix(1969, Bell Labs)
- Hierarchical file Systems, Process Call(fork, exec, wait, exit), shell, signal

Multics
Top-down approach
설계 및 구현 그리고 유지보수에 많은 인원
복잡하고 비싼 하드웨어

Unix
Bottom-up approach
개발에 2명
간단한 하드웨어
