---
title: "Database Systems"
collection: teaching
type: "Undergraduate course TA"
permalink: /teaching/2023-summer
venue: "Michigan State University"
date: 2023-05-18
---
Material is completly credited to course Instructor  [Professor James Mariani](https://www.linkedin.com/in/jmm755)

This document provides students additional help apart from the materials provided by the professor and the reference book, Database System Concepts 7th Edition Abraham Silberschatz , Henry Korth, S. Sudarshan. The goal of the course is to teach important concepts of databases and create a simple database in Python. 
# LOCKS
Locks are one of the crucial components of the databases. Class objects are considered to be in memory databases. We use class objects to store lock configurations. The lock implementation revolves arround the singleton design pattern as only one lock should be possible across all the database classes. More on the code and implementation of the locks can be found [here](files/480_locks.md).